
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef void UCHAR ;
struct TYPE_8__ {int CryptoId; } ;
struct TYPE_7__ {int AesKey; void* DesKey3; void* DesKey2; void* DesKey1; TYPE_2__* Crypto; scalar_t__ Size; int Data; } ;
typedef TYPE_1__ IKE_CRYPTO_KEY ;
typedef TYPE_2__ IKE_CRYPTO ;


 int FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (void*,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_2 (void*) ;



 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_4 (int) ;

IKE_CRYPTO_KEY *FUNC_5(IKE_CRYPTO *VAR_1, void *VAR_2, UINT VAR_3)
{
 IKE_CRYPTO_KEY *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 if (FUNC_3(VAR_1, VAR_3) == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_4(sizeof(IKE_CRYPTO_KEY));
 VAR_4->Crypto = VAR_1;
 VAR_4->Data = FUNC_1(VAR_2, VAR_3);
 VAR_4->Size = VAR_3;

 switch (VAR_4->Crypto->CryptoId)
 {
 case 128:

  VAR_4->DesKey1 = FUNC_2(VAR_2);
  break;

 case 130:

  VAR_4->DesKey1 = FUNC_2(((UCHAR *)VAR_2) + VAR_0 * 0);
  VAR_4->DesKey2 = FUNC_2(((UCHAR *)VAR_2) + VAR_0 * 1);
  VAR_4->DesKey3 = FUNC_2(((UCHAR *)VAR_2) + VAR_0 * 2);
  break;

 case 129:

  VAR_4->AesKey = FUNC_0(VAR_2, VAR_3);
  break;
 }

 return VAR_4;
}
