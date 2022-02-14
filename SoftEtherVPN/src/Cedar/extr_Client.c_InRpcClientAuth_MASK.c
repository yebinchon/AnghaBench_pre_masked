
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AuthType; int SecurePrivateKeyName; int SecurePublicCertName; int ClientK; int ClientX; int PlainPassword; int HashedPassword; int Username; } ;
typedef int PACK ;
typedef TYPE_1__ CLIENT_AUTH ;
typedef int BUF ;


 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *,int) ;





 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_1__*,int) ;

void FUNC_9(CLIENT_AUTH *VAR_1, PACK *VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_1, sizeof(CLIENT_AUTH));
 VAR_1->AuthType = FUNC_6(VAR_2, "AuthType");
 FUNC_7(VAR_2, "Username", VAR_1->Username, sizeof(VAR_1->Username));

 switch (VAR_1->AuthType)
 {
 case 132:
  break;

 case 130:
  if (FUNC_5(VAR_2, "HashedPassword") == VAR_0)
  {
   FUNC_4(VAR_2, "HashedPassword", VAR_1->HashedPassword);
  }
  break;

 case 129:
  FUNC_7(VAR_2, "PlainPassword", VAR_1->PlainPassword, sizeof(VAR_1->PlainPassword));
  break;

 case 131:
  VAR_3 = FUNC_3(VAR_2, "ClientX");
  if (VAR_3 != ((void*)0))
  {
   VAR_1->ClientX = FUNC_1(VAR_3, 0);
   FUNC_2(VAR_3);
  }
  VAR_3 = FUNC_3(VAR_2, "ClientK");
  if (VAR_3 != ((void*)0))
  {
   VAR_1->ClientK = FUNC_0(VAR_3, 1, 0, ((void*)0));
   FUNC_2(VAR_3);
  }
  break;

 case 128:
  FUNC_7(VAR_2, "SecurePublicCertName", VAR_1->SecurePublicCertName, sizeof(VAR_1->SecurePublicCertName));
  FUNC_7(VAR_2, "SecurePrivateKeyName", VAR_1->SecurePrivateKeyName, sizeof(VAR_1->SecurePrivateKeyName));
  break;
 }
}
