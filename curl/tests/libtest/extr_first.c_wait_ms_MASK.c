
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (int ,int *,int *,int *,struct timeval*) ;

void FUNC_1(int VAR_0)
{
  struct timeval VAR_1;
  VAR_1.tv_sec = VAR_0/1000;
  VAR_0 -= (int)VAR_1.tv_sec * 1000;
  VAR_1.tv_usec = VAR_0 * 1000;
  FUNC_0(0, ((void*)0), ((void*)0), ((void*)0), &VAR_1);
}
