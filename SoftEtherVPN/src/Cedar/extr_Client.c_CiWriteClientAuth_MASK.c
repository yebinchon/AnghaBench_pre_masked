
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int Size; int Buf; } ;
struct TYPE_8__ {int AuthType; int SecurePrivateKeyName; int SecurePublicCertName; int * ClientK; int * ClientX; int PlainPassword; int HashedPassword; int Username; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT_AUTH ;
typedef TYPE_2__ BUF ;







 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int *,int,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_6 (int *,int) ;

void FUNC_7(FOLDER *VAR_1, CLIENT_AUTH *VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1, "AuthType", VAR_2->AuthType);
 FUNC_2(VAR_1, "Username", VAR_2->Username);

 switch (VAR_2->AuthType)
 {
 case 132:
  break;

 case 130:
  FUNC_0(VAR_1, "HashedPassword", VAR_2->HashedPassword, VAR_0);
  break;

 case 129:
  VAR_3 = FUNC_3(VAR_2->PlainPassword);
  FUNC_0(VAR_1, "EncryptedPassword", VAR_3->Buf, VAR_3->Size);
  FUNC_4(VAR_3);
  break;

 case 131:
  if (VAR_2->ClientK != ((void*)0) && VAR_2->ClientX != ((void*)0))
  {
   VAR_3 = FUNC_6(VAR_2->ClientX, 0);
   FUNC_0(VAR_1, "ClientCert", VAR_3->Buf, VAR_3->Size);
   FUNC_4(VAR_3);

   VAR_3 = FUNC_5(VAR_2->ClientK, 0, ((void*)0));
   FUNC_0(VAR_1, "ClientKey", VAR_3->Buf, VAR_3->Size);
   FUNC_4(VAR_3);
  }
  break;

 case 128:
  FUNC_2(VAR_1, "SecurePublicCertName", VAR_2->SecurePublicCertName);
  FUNC_2(VAR_1, "SecurePrivateKeyName", VAR_2->SecurePrivateKeyName);
  break;
 }
}
