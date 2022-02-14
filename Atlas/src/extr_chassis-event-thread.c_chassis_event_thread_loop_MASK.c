
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {int event_base; int index; } ;
typedef TYPE_1__ chassis_event_thread_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct timeval*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int ,scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_3 ;

void *FUNC_9(chassis_event_thread_t *VAR_4) {
 FUNC_7(&VAR_3, FUNC_0(VAR_4->index));



 while (!FUNC_2()) {
  struct timeval VAR_5;
  int VAR_6;

  VAR_5.tv_sec = 1;
  VAR_5.tv_usec = 0;

  FUNC_5(FUNC_4(VAR_4->event_base, &VAR_5) == 0);

  VAR_6 = FUNC_3(VAR_4->event_base);

  if (VAR_6 == -1) {



   if (VAR_2 == VAR_0) continue;
   FUNC_6("%s: leaving chassis_event_thread_loop early, errno != EINTR was: %s (%d)", VAR_1, FUNC_8(VAR_2), VAR_2);
   break;
  }
 }

 return ((void*)0);
}
