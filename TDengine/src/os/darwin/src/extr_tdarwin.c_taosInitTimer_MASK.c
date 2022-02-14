
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_1__ it_interval; TYPE_1__ it_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct itimerval*,int *) ;
 int FUNC_1 (int ,void (*) (int)) ;

int FUNC_2(void (*VAR_2)(int), int VAR_3) {
  FUNC_1(VAR_1, VAR_2);

  struct itimerval VAR_4;
  VAR_4.it_interval.tv_sec = 0;
  VAR_4.it_interval.tv_usec = 1000 * VAR_3;
  VAR_4.it_value = VAR_4.it_interval;

  return FUNC_0(VAR_0, &VAR_4, ((void*)0));
}
