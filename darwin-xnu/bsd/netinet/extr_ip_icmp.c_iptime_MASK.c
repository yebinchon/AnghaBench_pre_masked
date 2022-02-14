
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int) ;

u_int32_t
FUNC_2(void)
{
 struct timeval VAR_0;
 u_int32_t VAR_1;

 FUNC_0(&VAR_0);
 VAR_1 = (VAR_0.tv_sec % (24*60*60)) * 1000 + VAR_0.tv_usec / 1000;
 return (FUNC_1(VAR_1));
}
