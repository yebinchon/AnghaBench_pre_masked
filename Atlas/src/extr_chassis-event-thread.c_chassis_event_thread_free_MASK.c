
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int network_mysqld_con ;
struct TYPE_4__ {int notify_receive_fd; int notify_send_fd; int event_queue; scalar_t__ event_base; int * thr; int notify_fd_event; } ;
typedef TYPE_1__ chassis_event_thread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(chassis_event_thread_t *VAR_0) {
 if (!VAR_0) return;

 if (VAR_0->thr) FUNC_6(VAR_0->thr);

 if (VAR_0->notify_receive_fd != -1) {
  FUNC_2(&(VAR_0->notify_fd_event));
  FUNC_0(VAR_0->notify_receive_fd);
 }
 if (VAR_0->notify_send_fd != -1) {
  FUNC_0(VAR_0->notify_send_fd);
 }


 if (VAR_0->thr != ((void*)0) && VAR_0->event_base) FUNC_1(VAR_0->event_base);

 network_mysqld_con* VAR_1;
 while ((VAR_1 = FUNC_3(VAR_0->event_queue))) {
  FUNC_7(VAR_1);
 }
 FUNC_4(VAR_0->event_queue);

 FUNC_5(VAR_0);
}
