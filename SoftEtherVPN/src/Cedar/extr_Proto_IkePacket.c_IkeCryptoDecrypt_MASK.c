
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int AesKey; int DesKey3; int DesKey2; int DesKey1; TYPE_1__* Crypto; } ;
struct TYPE_4__ {int BlockSize; int CryptoId; } ;
typedef TYPE_2__ IKE_CRYPTO_KEY ;


 int FUNC_0 (void*,void*,int,int ,void*) ;
 int FUNC_1 (void*,void*,int,int ,int ,int ,void*) ;
 int FUNC_2 (void*,void*,int,int ,void*) ;



 int FUNC_3 (void*,int) ;

void FUNC_4(IKE_CRYPTO_KEY *VAR_0, void *VAR_1, void *VAR_2, UINT VAR_3, void *VAR_4)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0 || VAR_4 == ((void*)0))
 {
  FUNC_3(VAR_1, VAR_3);
  return;
 }

 if ((VAR_3 % VAR_0->Crypto->BlockSize) != 0)
 {
  FUNC_3(VAR_1, VAR_3);
  return;
 }

 switch (VAR_0->Crypto->CryptoId)
 {
 case 128:
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0->DesKey1, VAR_4);
  break;

 case 130:
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0->DesKey1, VAR_0->DesKey2, VAR_0->DesKey3, VAR_4);
  break;

 case 129:
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0->AesKey, VAR_4);
  break;

 default:

  FUNC_3(VAR_1, VAR_3);
  break;
 }
}
