
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int * IkeClient; } ;
struct TYPE_5__ {int IkeSaList; } ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_SA ;
typedef int IKE_CLIENT ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

UINT FUNC_2(IKE_SERVER *VAR_0, IKE_CLIENT *VAR_1)
{
 UINT VAR_2 = 0, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->IkeSaList);VAR_3++)
 {
  IKE_SA *VAR_4 = FUNC_0(VAR_0->IkeSaList, VAR_3);

  if (VAR_4->IkeClient == VAR_1)
  {
   VAR_2++;
  }
 }

 return VAR_2;
}
