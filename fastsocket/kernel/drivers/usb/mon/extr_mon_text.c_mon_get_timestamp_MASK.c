
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; unsigned int tv_usec; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static inline unsigned int FUNC_1(void)
{
 struct timeval VAR_0;
 unsigned int VAR_1;

 FUNC_0(&VAR_0);
 VAR_1 = VAR_0.tv_sec & 0xFFFF;
 VAR_1 = VAR_1 * 1000000 + VAR_0.tv_usec;
 return VAR_1;
}
