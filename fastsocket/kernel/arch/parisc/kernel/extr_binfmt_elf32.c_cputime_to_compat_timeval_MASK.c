
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compat_timeval {unsigned long tv_usec; unsigned long tv_sec; } ;
typedef int cputime_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int const) ;

__attribute__((used)) static __inline__ void
FUNC_1(const cputime_t VAR_1, struct compat_timeval *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);
 VAR_2->tv_usec = (VAR_3 % VAR_0) * (1000000L / VAR_0);
 VAR_2->tv_sec = VAR_3 / VAR_0;
}
