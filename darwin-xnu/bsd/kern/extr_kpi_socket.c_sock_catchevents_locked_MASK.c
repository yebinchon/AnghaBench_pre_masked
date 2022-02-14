
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef TYPE_1__* socket_t ;
typedef int * sock_evupcall ;
struct TYPE_4__ {scalar_t__ so_eventmask; int * so_eventarg; int * so_event; } ;


 int FUNC_0 (TYPE_1__*) ;
 int * VAR_0 ;

void
FUNC_1(socket_t VAR_1, sock_evupcall VAR_2, void *VAR_3,
    u_int32_t VAR_4)
{
 FUNC_0(VAR_1);




 if (VAR_2 != ((void*)0)) {
  VAR_1->so_event = VAR_2;
  VAR_1->so_eventarg = VAR_3;
  VAR_1->so_eventmask = VAR_4;
 } else {
  VAR_1->so_event = VAR_0;
  VAR_1->so_eventarg = ((void*)0);
  VAR_1->so_eventmask = 0;
 }
}
