
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int ** IkeCryptos; int ** EspCryptos; } ;
typedef TYPE_1__ IKE_ENGINE ;
typedef int IKE_CRYPTO ;


 size_t VAR_0 ;

IKE_CRYPTO *FUNC_0(IKE_ENGINE *VAR_1, bool VAR_2, UINT VAR_3)
{

 if (VAR_1 == ((void*)0) || VAR_3 == 0 || VAR_3 >= VAR_0)
 {
  return ((void*)0);
 }

 if (VAR_2)
 {
  return VAR_1->EspCryptos[VAR_3];
 }
 else
 {
  return VAR_1->IkeCryptos[VAR_3];
 }
}
