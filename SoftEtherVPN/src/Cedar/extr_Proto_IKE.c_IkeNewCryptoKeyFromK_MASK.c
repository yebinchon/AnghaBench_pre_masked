
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int Size; int Buf; } ;
typedef int IKE_SERVER ;
typedef int IKE_HASH ;
typedef int IKE_CRYPTO_KEY ;
typedef int IKE_CRYPTO ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,void*,scalar_t__,scalar_t__) ;
 int * FUNC_2 (int *,int ,int ) ;

IKE_CRYPTO_KEY *FUNC_3(IKE_SERVER *VAR_0, void *VAR_1, UINT VAR_2, IKE_HASH *VAR_3, IKE_CRYPTO *VAR_4, UINT VAR_5)
{
 BUF *VAR_6;
 IKE_CRYPTO_KEY *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_2, VAR_5);
 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_2(VAR_4, VAR_6->Buf, VAR_6->Size);

 FUNC_0(VAR_6);

 return VAR_7;
}
