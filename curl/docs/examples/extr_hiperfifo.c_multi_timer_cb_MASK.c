
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
struct TYPE_3__ {int timer_event; } ;
typedef TYPE_1__ GlobalInfo ;
typedef int CURLM ;


 int VAR_0 ;
 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,long) ;

__attribute__((used)) static int FUNC_3(CURLM *VAR_1, long VAR_2, GlobalInfo *VAR_3)
{
  struct timeval VAR_4;
  (void)VAR_1;

  VAR_4.tv_sec = VAR_2/1000;
  VAR_4.tv_usec = (VAR_2%1000)*1000;
  FUNC_2(VAR_0, "multi_timer_cb: Setting timeout to %ld ms\n", VAR_2);







  if(VAR_2 == -1)
    FUNC_1(&VAR_3->timer_event);
  else
    FUNC_0(&VAR_3->timer_event, &VAR_4);
  return 0;
}
