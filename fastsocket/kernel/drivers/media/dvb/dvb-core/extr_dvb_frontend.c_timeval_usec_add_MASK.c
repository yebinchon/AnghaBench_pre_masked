
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timeval {int tv_usec; int tv_sec; } ;



__attribute__((used)) static inline void FUNC_0(struct timeval *VAR_0, u32 VAR_1)
{
 VAR_0->tv_usec += VAR_1;
 if (VAR_0->tv_usec >= 1000000) {
  VAR_0->tv_usec -= 1000000;
  VAR_0->tv_sec++;
 }
}
