
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,struct itimerval*,int *) ;

void FUNC_3(void)
{
 struct itimerval VAR_1;

 VAR_1.it_interval.tv_sec = 1;
 VAR_1.it_interval.tv_usec = 0;
 VAR_1.it_value.tv_sec = 1;
 VAR_1.it_value.tv_usec = 0;

 if(FUNC_2(VAR_0, &VAR_1, ((void*)0)) != 0) {
  FUNC_1("Unable to set interval timer");
  FUNC_0();
 }
}
