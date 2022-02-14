
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;


 int FUNC_0 () ;

void FUNC_1(struct timespec *VAR_0)
{
 VAR_0->tv_sec = FUNC_0();
 VAR_0->tv_nsec = 0;
}
