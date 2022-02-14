
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long long tv_sec; int tv_nsec; } ;
typedef int __u64 ;


 int FUNC_0 (unsigned long long,int) ;

void FUNC_1(__u64 VAR_0, struct timespec *VAR_1)
{
 unsigned long long VAR_2;

 VAR_2 = VAR_0 >> 12;
 FUNC_0(VAR_2, 1000000);
 VAR_1->tv_sec = VAR_2;
 VAR_0 -= (VAR_2 * 1000000) << 12;
 VAR_1->tv_nsec = ((VAR_0 * 1000) >> 12);
}
