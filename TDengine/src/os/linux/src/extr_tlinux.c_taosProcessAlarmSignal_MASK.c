
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int timer_t ;
struct TYPE_4__ {int _tid; } ;
struct sigevent {int sigev_signo; TYPE_1__ _sigev_un; int sigev_notify; } ;
struct TYPE_6__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct itimerspec {TYPE_3__ it_interval; TYPE_2__ it_value; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sigevent*,int *) ;
 scalar_t__ FUNC_7 (int ,int ,struct itimerspec*,int *) ;
 int FUNC_8 (char*,...) ;

void *FUNC_9(void *VAR_6) {

  sigset_t VAR_7;
  FUNC_2(&VAR_7);
  FUNC_1(&VAR_7, VAR_2);
  FUNC_3(VAR_4, &VAR_7, ((void*)0));
  void (*VAR_8)(int) = VAR_6;

  timer_t VAR_9;
  struct sigevent VAR_10;
  VAR_10.sigev_notify = VAR_3;
  VAR_10._sigev_un._tid = FUNC_5(VAR_5);
  VAR_10.sigev_signo = VAR_2;

  if (FUNC_6(VAR_0, &VAR_10, &VAR_9) == -1) {
    FUNC_8("Failed to create timer");
  }

  struct itimerspec VAR_11;
  VAR_11.it_value.tv_sec = 0;
  VAR_11.it_value.tv_nsec = 1000000 * VAR_1;
  VAR_11.it_interval.tv_sec = 0;
  VAR_11.it_interval.tv_nsec = 1000000 * VAR_1;

  if (FUNC_7(VAR_9, 0, &VAR_11, ((void*)0))) {
    FUNC_8("Failed to init timer");
    return ((void*)0);
  }

  int VAR_12;
  while (1) {
    if (FUNC_4(&VAR_7, &VAR_12)) {
      FUNC_8("Failed to wait signal: number %d", VAR_12);
      continue;
    }


    VAR_8(0);
  }

  FUNC_0(0);
  return ((void*)0);
}
