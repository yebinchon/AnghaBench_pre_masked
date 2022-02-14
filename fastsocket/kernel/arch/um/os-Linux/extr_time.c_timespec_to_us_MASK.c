
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long long tv_nsec; scalar_t__ tv_sec; } ;


 long long VAR_0 ;
 long long VAR_1 ;

__attribute__((used)) static inline long long FUNC_0(const struct timespec *VAR_2)
{
 return ((long long) VAR_2->tv_sec * VAR_1) +
  VAR_2->tv_nsec / VAR_0;
}
