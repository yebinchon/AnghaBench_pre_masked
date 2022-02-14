
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; } ;
struct TYPE_6__ {int IkeSaList; } ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_SA ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

IKE_SA *FUNC_2(IKE_SERVER *VAR_0, UINT64 VAR_1, UINT64 VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->IkeSaList);VAR_3++)
 {
  IKE_SA *VAR_4 = FUNC_0(VAR_0->IkeSaList, VAR_3);

  if (VAR_4->InitiatorCookie == VAR_1 && VAR_4->ResponderCookie == VAR_2)
  {
   return VAR_4;
  }
 }

 return ((void*)0);
}
