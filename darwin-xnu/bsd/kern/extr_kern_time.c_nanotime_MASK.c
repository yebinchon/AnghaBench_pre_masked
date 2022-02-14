
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;
typedef int clock_sec_t ;
typedef int clock_nsec_t ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(
 struct timespec *VAR_0)
{
 clock_sec_t VAR_1;
 clock_nsec_t VAR_2;

 FUNC_0(&VAR_1, &VAR_2);

 VAR_0->tv_sec = VAR_1;
 VAR_0->tv_nsec = VAR_2;
}
