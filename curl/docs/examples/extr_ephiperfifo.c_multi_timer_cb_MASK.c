
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {long tv_sec; long tv_nsec; } ;
struct TYPE_5__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct itimerspec {TYPE_2__ it_value; TYPE_1__ it_interval; } ;
struct TYPE_7__ {int tfd; } ;
typedef TYPE_3__ GlobalInfo ;
typedef int CURLM ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,long) ;
 int FUNC_1 (struct itimerspec*,int ,int) ;
 int FUNC_2 (int ,int ,struct itimerspec*,int *) ;

__attribute__((used)) static int FUNC_3(CURLM *VAR_1, long VAR_2, GlobalInfo *VAR_3)
{
  struct itimerspec VAR_4;

  FUNC_0(VAR_0, "multi_timer_cb: Setting timeout to %ld ms\n", VAR_2);

  if(VAR_2 > 0) {
    VAR_4.it_interval.tv_sec = 1;
    VAR_4.it_interval.tv_nsec = 0;
    VAR_4.it_value.tv_sec = VAR_2 / 1000;
    VAR_4.it_value.tv_nsec = (VAR_2 % 1000) * 1000 * 1000;
  }
  else if(VAR_2 == 0) {



    VAR_4.it_interval.tv_sec = 1;
    VAR_4.it_interval.tv_nsec = 0;
    VAR_4.it_value.tv_sec = 0;
    VAR_4.it_value.tv_nsec = 1;
  }
  else {
    FUNC_1(&VAR_4, 0, sizeof(struct itimerspec));
  }

  FUNC_2(VAR_3->tfd, 0, &VAR_4, ((void*)0));
  return 0;
}
