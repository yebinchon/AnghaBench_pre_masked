
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* mk_timer_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_11__ {scalar_t__ ip_kobject; } ;
struct TYPE_10__ {scalar_t__ active; int lock; int is_dead; int is_armed; int call_entry; TYPE_2__* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,TYPE_1__*) ;

void
FUNC_10(
 ipc_port_t VAR_6)
{
 mk_timer_t VAR_7 = ((void*)0);

 FUNC_2(VAR_6);
 if (FUNC_1(VAR_6) == VAR_2) {
  VAR_7 = (mk_timer_t)VAR_6->ip_kobject;
  FUNC_0(VAR_7 != ((void*)0));
  FUNC_4(VAR_6, VAR_3, VAR_1);
  FUNC_6(&VAR_7->lock);
  FUNC_0(VAR_7->port == VAR_6);
 }
 FUNC_3(VAR_6);

 if (VAR_7 != ((void*)0)) {
  if (FUNC_8(&VAR_7->call_entry))
   VAR_7->active--;
  VAR_7->is_armed = VAR_0;

  VAR_7->is_dead = VAR_4;
  if (VAR_7->active == 0) {
   FUNC_7(&VAR_7->lock);
   FUNC_9(VAR_5, VAR_7);

   FUNC_5(VAR_6);
   return;
  }

  FUNC_7(&VAR_7->lock);
 }
}
