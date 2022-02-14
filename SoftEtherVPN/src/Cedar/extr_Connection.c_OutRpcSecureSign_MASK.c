
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int BitmapId; int UseSecureDeviceId; int Signature; int Random; int ClientCert; int SecurePrivateKeyName; int SecurePublicCertName; } ;
typedef TYPE_1__ SECURE_SIGN ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, SECURE_SIGN *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "SecurePublicCertName", VAR_1->SecurePublicCertName);
 FUNC_2(VAR_0, "SecurePrivateKeyName", VAR_1->SecurePrivateKeyName);
 FUNC_3(VAR_0, "ClientCert", VAR_1->ClientCert);
 FUNC_0(VAR_0, "Random", VAR_1->Random, sizeof(VAR_1->Random));
 FUNC_0(VAR_0, "Signature", VAR_1->Signature, sizeof(VAR_1->Signature));
 FUNC_1(VAR_0, "UseSecureDeviceId", VAR_1->UseSecureDeviceId);
 FUNC_1(VAR_0, "BitmapId", VAR_1->BitmapId);
}
