
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int AuthType; int SecurePrivateKeyName; int SecurePublicCertName; int ClientK; int ClientX; int PlainPassword; int HashedPassword; int Username; } ;
typedef int PACK ;
typedef TYPE_1__ CLIENT_AUTH ;
typedef int BUF ;







 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_0 ;
 int * FUNC_6 (int ,int) ;

void FUNC_7(PACK *VAR_1, CLIENT_AUTH *VAR_2)
{
 BUF *VAR_3;

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_1, "AuthType", VAR_2->AuthType);
 FUNC_5(VAR_1, "Username", VAR_2->Username);

 switch (VAR_2->AuthType)
 {
 case 132:
  break;

 case 130:
  FUNC_3(VAR_1, "HashedPassword", VAR_2->HashedPassword, VAR_0);
  break;

 case 129:
  FUNC_5(VAR_1, "PlainPassword", VAR_2->PlainPassword);
  break;

 case 131:
  VAR_3 = FUNC_6(VAR_2->ClientX, 0);
  if (VAR_3 != ((void*)0))
  {
   FUNC_2(VAR_1, "ClientX", VAR_3);
   FUNC_0(VAR_3);
  }
  VAR_3 = FUNC_1(VAR_2->ClientK, 0, ((void*)0));
  if (VAR_3 != ((void*)0))
  {
   FUNC_2(VAR_1, "ClientK", VAR_3);
   FUNC_0(VAR_3);
  }
  break;

 case 128:
  FUNC_5(VAR_1, "SecurePublicCertName", VAR_2->SecurePublicCertName);
  FUNC_5(VAR_1, "SecurePrivateKeyName", VAR_2->SecurePrivateKeyName);
  break;
 }
}
