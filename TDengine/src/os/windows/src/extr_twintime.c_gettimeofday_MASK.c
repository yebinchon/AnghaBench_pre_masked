
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timezone {int dummy; } ;
struct timeval {long tv_sec; int tv_usec; } ;
struct TYPE_3__ {int wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(struct timeval *VAR_0, struct timezone *VAR_1) {
  time_t VAR_2;
  VAR_2 = FUNC_1(((void*)0));
  SYSTEMTIME VAR_3;
  FUNC_0(&VAR_3);

  VAR_0->tv_sec = (long)VAR_2;
  VAR_0->tv_usec = VAR_3.wMilliseconds * 1000;

  return 0;
}
