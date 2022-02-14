
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; int tv_sec; } ;
typedef int clock_usec_t ;
typedef int clock_sec_t ;


 int FUNC_0 (int *,int *,int *) ;

void
FUNC_1(
 struct timeval *VAR_0, uint64_t *VAR_1)
{
 clock_sec_t VAR_2;
 clock_usec_t VAR_3;

 FUNC_0(&VAR_2, &VAR_3, VAR_1);

 VAR_0->tv_sec = VAR_2;
 VAR_0->tv_usec = VAR_3;
}
