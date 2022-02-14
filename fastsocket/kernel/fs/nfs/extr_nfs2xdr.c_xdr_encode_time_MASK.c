
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int __be32 ;


 void* FUNC_0 (int) ;

__attribute__((used)) static inline __be32*
FUNC_1(__be32 *VAR_0, struct timespec *VAR_1)
{
 *VAR_0++ = FUNC_0(VAR_1->tv_sec);

 *VAR_0++ = FUNC_0(VAR_1->tv_nsec ? VAR_1->tv_nsec / 1000 : 0);
 return VAR_0;
}
