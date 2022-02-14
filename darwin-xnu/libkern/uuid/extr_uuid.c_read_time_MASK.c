
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct timespec {unsigned long long tv_sec; unsigned long long tv_nsec; } ;


 int FUNC_0 (struct timespec*) ;

__attribute__((used)) static uint64_t
FUNC_1(void)
{
 struct timespec VAR_0;

 FUNC_0(&VAR_0);

 return (VAR_0.tv_sec * 10000000ULL) + (VAR_0.tv_nsec / 100ULL) + 0x01B21DD213814000ULL;
}
