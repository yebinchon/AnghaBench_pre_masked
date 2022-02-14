
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_8__ {scalar_t__ ResponderCookie; } ;
struct TYPE_7__ {int IkeSaList; } ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ IKE_SA ;


 TYPE_2__* FUNC_0 (int ,TYPE_2__*) ;

IKE_SA *FUNC_1(IKE_SERVER *VAR_0, UINT64 VAR_1)
{
 IKE_SA VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_2.ResponderCookie = VAR_1;

 return FUNC_0(VAR_0->IkeSaList, &VAR_2);
}
