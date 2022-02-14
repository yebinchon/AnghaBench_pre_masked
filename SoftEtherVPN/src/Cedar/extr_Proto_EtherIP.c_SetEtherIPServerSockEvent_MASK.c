
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* SockEvent; } ;
struct TYPE_6__ {int ref; } ;
typedef TYPE_1__ SOCK_EVENT ;
typedef TYPE_2__ ETHERIP_SERVER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(ETHERIP_SERVER *VAR_0, SOCK_EVENT *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_1 != ((void*)0))
 {
  FUNC_0(VAR_1->ref);
 }

 if (VAR_0->SockEvent != ((void*)0))
 {
  FUNC_1(VAR_0->SockEvent);
  VAR_0->SockEvent = ((void*)0);
 }

 VAR_0->SockEvent = VAR_1;
}
