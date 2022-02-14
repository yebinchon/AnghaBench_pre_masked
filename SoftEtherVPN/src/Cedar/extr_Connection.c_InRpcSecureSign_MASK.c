
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* BitmapId; void* UseSecureDeviceId; int Signature; int Random; int ClientCert; int SecurePrivateKeyName; int SecurePublicCertName; } ;
typedef TYPE_1__ SECURE_SIGN ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,int) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(SECURE_SIGN *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(SECURE_SIGN));
 FUNC_2(VAR_1, "SecurePublicCertName", VAR_0->SecurePublicCertName, sizeof(VAR_0->SecurePublicCertName));
 FUNC_2(VAR_1, "SecurePrivateKeyName", VAR_0->SecurePrivateKeyName, sizeof(VAR_0->SecurePrivateKeyName));
 VAR_0->ClientCert = FUNC_3(VAR_1, "ClientCert");
 FUNC_0(VAR_1, "Random", VAR_0->Random, sizeof(VAR_0->Random));
 FUNC_0(VAR_1, "Signature", VAR_0->Signature, sizeof(VAR_0->Signature));
 VAR_0->UseSecureDeviceId = FUNC_1(VAR_1, "UseSecureDeviceId");
 VAR_0->BitmapId = FUNC_1(VAR_1, "BitmapId");
}
