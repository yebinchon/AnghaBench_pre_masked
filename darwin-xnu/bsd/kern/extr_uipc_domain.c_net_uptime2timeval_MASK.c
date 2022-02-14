
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 () ;

void
FUNC_1(struct timeval *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 VAR_0->tv_usec = 0;
 VAR_0->tv_sec = FUNC_0();
}
