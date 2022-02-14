
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int suseconds_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct timeval *VAR_1) {
 int64_t VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_0, 2);
 if (VAR_2 < 0) return -1;

 VAR_3 = (unsigned int)VAR_2 & 0xffff;

 VAR_1->tv_usec = (suseconds_t)(VAR_3 % 100) * 10000;
 VAR_1->tv_sec = (time_t)(VAR_3 / 100);

 return 0;
}
