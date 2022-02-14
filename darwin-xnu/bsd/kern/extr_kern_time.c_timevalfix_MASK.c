
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;



void
FUNC_0(
 struct timeval *VAR_0)
{

 if (VAR_0->tv_usec < 0) {
  VAR_0->tv_sec--;
  VAR_0->tv_usec += 1000000;
 }
 if (VAR_0->tv_usec >= 1000000) {
  VAR_0->tv_sec++;
  VAR_0->tv_usec -= 1000000;
 }
}
