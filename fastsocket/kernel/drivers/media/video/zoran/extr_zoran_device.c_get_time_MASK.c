
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; unsigned long tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static inline unsigned long
FUNC_1 (void)
{
 struct timeval VAR_0;

 FUNC_0(&VAR_0);
 return (1000000 * VAR_0.tv_sec + VAR_0.tv_usec);
}
