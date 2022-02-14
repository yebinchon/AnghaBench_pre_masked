
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int VAR_0 ;

void
FUNC_0(const struct timeval *VAR_1)
{
 VAR_0 = VAR_1->tv_sec;




 if (VAR_1->tv_usec > 500000)
  VAR_0++;
}
