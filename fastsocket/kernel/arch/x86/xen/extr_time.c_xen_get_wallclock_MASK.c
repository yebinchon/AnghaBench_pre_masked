
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long tv_sec; } ;


 int FUNC_0 (struct timespec*) ;

unsigned long FUNC_1(void)
{
 struct timespec VAR_0;

 FUNC_0(&VAR_0);
 return VAR_0.tv_sec;
}
