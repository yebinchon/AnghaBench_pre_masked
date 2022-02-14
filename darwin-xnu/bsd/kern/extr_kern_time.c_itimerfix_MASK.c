
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int VAR_0 ;

int
FUNC_0(
 struct timeval *VAR_1)
{

 if (VAR_1->tv_sec < 0 || VAR_1->tv_sec > 100000000 ||
     VAR_1->tv_usec < 0 || VAR_1->tv_usec >= 1000000)
  return (VAR_0);
 return (0);
}
