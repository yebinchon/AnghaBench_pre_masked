
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 scalar_t__ VAR_0 ;
 unsigned long long VAR_1 ;

int
FUNC_0(const struct timespec *VAR_2)
{


 if (VAR_2->tv_sec < 0 || VAR_2->tv_sec > VAR_0 ||
   VAR_2->tv_nsec < 0 || (unsigned long long)VAR_2->tv_nsec > VAR_1) {
  return 0;
 }
 return 1;
}
