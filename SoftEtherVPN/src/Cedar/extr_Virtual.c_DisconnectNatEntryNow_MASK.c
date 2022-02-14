
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int SockEvent; } ;
typedef TYPE_1__ VH ;
struct TYPE_6__ {int DisconnectNow; } ;
typedef TYPE_2__ NAT_ENTRY ;


 int FUNC_0 (int ) ;

void FUNC_1(VH *VAR_0, NAT_ENTRY *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->DisconnectNow == 0)
 {
  VAR_1->DisconnectNow = 1;

  FUNC_0(VAR_0->SockEvent);
 }
}
