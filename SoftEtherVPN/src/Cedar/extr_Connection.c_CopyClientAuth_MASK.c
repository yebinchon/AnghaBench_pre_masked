
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int AuthType; int SecurePrivateKeyName; int SecurePublicCertName; int ClientK; int ClientX; int PlainPassword; int HashedPassword; int Username; } ;
typedef TYPE_1__ CLIENT_AUTH ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,int ) ;
 TYPE_1__* FUNC_4 (int,int) ;

CLIENT_AUTH *FUNC_5(CLIENT_AUTH *VAR_1)
{
 CLIENT_AUTH *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_4(sizeof(CLIENT_AUTH), 1);

 VAR_2->AuthType = VAR_1->AuthType;
 FUNC_3(VAR_2->Username, sizeof(VAR_2->Username), VAR_1->Username);

 switch (VAR_1->AuthType)
 {
 case 132:

  break;

 case 130:

  FUNC_2(VAR_2->HashedPassword, VAR_1->HashedPassword, VAR_0);
  break;

 case 129:

  FUNC_3(VAR_2->PlainPassword, sizeof(VAR_2->PlainPassword), VAR_1->PlainPassword);
  break;

 case 131:

  VAR_2->ClientX = FUNC_1(VAR_1->ClientX);
  VAR_2->ClientK = FUNC_0(VAR_1->ClientK);
  break;

 case 128:

  FUNC_3(VAR_2->SecurePublicCertName, sizeof(VAR_2->SecurePublicCertName), VAR_1->SecurePublicCertName);
  FUNC_3(VAR_2->SecurePrivateKeyName, sizeof(VAR_2->SecurePrivateKeyName), VAR_1->SecurePrivateKeyName);
  break;
 }

 return VAR_2;
}
