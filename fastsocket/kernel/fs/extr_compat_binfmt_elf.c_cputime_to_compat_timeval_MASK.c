
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct compat_timeval {int tv_usec; int tv_sec; } ;
typedef int cputime_t ;


 int FUNC_0 (int const,struct timeval*) ;

__attribute__((used)) static void FUNC_1(const cputime_t VAR_0,
          struct compat_timeval *VAR_1)
{
 struct timeval VAR_2;
 FUNC_0(VAR_0, &VAR_2);
 VAR_1->tv_sec = VAR_2.tv_sec;
 VAR_1->tv_usec = VAR_2.tv_usec;
}
