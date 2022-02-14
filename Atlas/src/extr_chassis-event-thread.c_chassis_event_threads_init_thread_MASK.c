
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int notify_receive_fd; int notify_send_fd; int notify_fd_event; int event_base; int * chas; } ;
typedef TYPE_1__ chassis_event_thread_t ;
typedef int chassis ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int,int,int ,TYPE_1__*) ;
 int FUNC_4 (char*,int ,int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int*) ;

int FUNC_7(chassis_event_thread_t *VAR_5, chassis *VAR_6) {
 VAR_5->event_base = FUNC_1();
 VAR_5->chas = VAR_6;

 int VAR_7[2];
 if (FUNC_6(VAR_7)) {
  int VAR_8;
  VAR_8 = VAR_4;
  FUNC_4("%s: evutil_socketpair() failed: %s (%d)",
    VAR_2,
    FUNC_5(VAR_8),
    VAR_8);
 }
 VAR_5->notify_receive_fd = VAR_7[0];
 VAR_5->notify_send_fd = VAR_7[1];

 FUNC_3(&(VAR_5->notify_fd_event), VAR_5->notify_receive_fd, VAR_1 | VAR_0, VAR_3, VAR_5);
 FUNC_2(VAR_5->event_base, &(VAR_5->notify_fd_event));
 FUNC_0(&(VAR_5->notify_fd_event), ((void*)0));

 return 0;
}
