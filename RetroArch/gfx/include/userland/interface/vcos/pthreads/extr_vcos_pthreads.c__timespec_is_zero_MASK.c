
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;



__attribute__((used)) static int FUNC_0(struct timespec *VAR_0)
{
   return ((VAR_0->tv_sec == 0) && (VAR_0->tv_nsec == 0));
}
