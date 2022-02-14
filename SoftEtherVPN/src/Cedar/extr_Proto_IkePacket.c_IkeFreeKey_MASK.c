
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Data; int AesKey; int DesKey3; int DesKey2; int DesKey1; } ;
typedef TYPE_1__ IKE_CRYPTO_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(IKE_CRYPTO_KEY *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->DesKey1);
 FUNC_1(VAR_0->DesKey2);
 FUNC_1(VAR_0->DesKey3);

 FUNC_0(VAR_0->AesKey);

 FUNC_2(VAR_0->Data);

 FUNC_2(VAR_0);
}
