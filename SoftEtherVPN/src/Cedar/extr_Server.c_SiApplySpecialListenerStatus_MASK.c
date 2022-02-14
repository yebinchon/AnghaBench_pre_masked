
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * EnablePtr; } ;
struct TYPE_4__ {TYPE_3__* DynListenerIcmp; int EnableVpnOverIcmp; TYPE_3__* DynListenerDns; int EnableVpnOverDns; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(SERVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->DynListenerDns != ((void*)0))
 {
  *VAR_0->DynListenerDns->EnablePtr = VAR_0->EnableVpnOverDns;
  FUNC_0(VAR_0->DynListenerDns);
 }

 if (VAR_0->DynListenerIcmp != ((void*)0))
 {
  *VAR_0->DynListenerIcmp->EnablePtr = VAR_0->EnableVpnOverIcmp;
  FUNC_0(VAR_0->DynListenerIcmp);
 }
}
