
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;



__attribute__((used)) static int FUNC_0(struct timespec *VAR_0, struct timespec *VAR_1)
{
   if (VAR_0->tv_sec != VAR_1->tv_sec)
      return VAR_0->tv_sec > VAR_1->tv_sec;
   else
      return VAR_0->tv_nsec > VAR_1->tv_nsec;
}
