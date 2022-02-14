
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



__attribute__((used)) static inline int FUNC_0(const struct timeval *VAR_0, const struct timeval *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 if (VAR_1->tv_usec > VAR_0->tv_usec) {
  VAR_2 = 1000000;
  VAR_3--;
 }

 VAR_2 += VAR_0->tv_usec - VAR_1->tv_usec;

 VAR_3 += VAR_0->tv_sec - VAR_1->tv_sec;
 VAR_3 *= 1000;
 VAR_2 /= 1000;
 VAR_3 += VAR_2;

 if (VAR_3 < 0)
  VAR_3 = 1000;

 return VAR_3;
}
