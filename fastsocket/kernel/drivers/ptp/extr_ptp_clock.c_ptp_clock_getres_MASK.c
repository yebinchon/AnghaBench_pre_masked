
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct posix_clock {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct posix_clock *VAR_0, struct timespec *VAR_1)
{
 VAR_1->tv_sec = 0;
 VAR_1->tv_nsec = 1;
 return 0;
}
