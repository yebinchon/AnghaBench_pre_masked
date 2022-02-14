
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AuthType; int SecurePrivateKeyName; int SecurePublicCertName; int ClientK; int ClientX; int PlainPassword; int HashedPassword; int Username; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT_AUTH ;
typedef int BUF ;


 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *,int) ;





 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int FUNC_9 (int ,int,char*) ;
 TYPE_1__* FUNC_10 (int) ;

CLIENT_AUTH *FUNC_11(FOLDER *VAR_1)
{
 CLIENT_AUTH *VAR_2;
 char *VAR_3;
 BUF *VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_10(sizeof(CLIENT_AUTH));

 VAR_2->AuthType = FUNC_4(VAR_1, "AuthType");
 FUNC_5(VAR_1, "Username", VAR_2->Username, sizeof(VAR_2->Username));

 switch (VAR_2->AuthType)
 {
 case 132:
  break;

 case 130:
  FUNC_3(VAR_1, "HashedPassword", VAR_2->HashedPassword, VAR_0);
  break;

 case 129:
  VAR_4 = FUNC_2(VAR_1, "EncryptedPassword");
  if (VAR_4 != ((void*)0))
  {
   VAR_3 = FUNC_6(VAR_4);
   FUNC_9(VAR_2->PlainPassword, sizeof(VAR_2->PlainPassword), VAR_3);
   FUNC_7(VAR_3);
   FUNC_8(VAR_4);
  }
  break;

 case 131:
  VAR_4 = FUNC_2(VAR_1, "ClientCert");
  if (VAR_4 != ((void*)0))
  {
   VAR_2->ClientX = FUNC_1(VAR_4, 0);
  }
  FUNC_8(VAR_4);
  VAR_4 = FUNC_2(VAR_1, "ClientKey");
  if (VAR_4 != ((void*)0))
  {
   VAR_2->ClientK = FUNC_0(VAR_4, 1, 0, ((void*)0));
  }
  FUNC_8(VAR_4);
  break;

 case 128:
  FUNC_5(VAR_1, "SecurePublicCertName", VAR_2->SecurePublicCertName, sizeof(VAR_2->SecurePublicCertName));
  FUNC_5(VAR_1, "SecurePrivateKeyName", VAR_2->SecurePrivateKeyName, sizeof(VAR_2->SecurePrivateKeyName));
  break;
 }

 return VAR_2;
}
