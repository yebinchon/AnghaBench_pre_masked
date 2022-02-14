
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int IPsecSaList; } ;
struct TYPE_6__ {scalar_t__ Spi; int * IkeClient; } ;
typedef TYPE_1__ IPSECSA ;
typedef TYPE_2__ IKE_SERVER ;
typedef int IKE_CLIENT ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

IPSECSA *FUNC_2(IKE_SERVER *VAR_0, IKE_CLIENT *VAR_1, UINT VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->IPsecSaList);VAR_3++)
 {
  IPSECSA *VAR_4 = FUNC_0(VAR_0->IPsecSaList, VAR_3);

  if (VAR_4->Spi == VAR_2)
  {
   if (VAR_4->IkeClient == VAR_1)
   {
    return VAR_4;
   }
  }
 }

 return ((void*)0);
}
