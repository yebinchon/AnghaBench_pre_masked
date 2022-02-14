
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; int tv_usec; } ;


 int FUNC_0 (long) ;
 int FUNC_1 (long) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int ,int *,int *,int *,struct timeval*) ;

void FUNC_4(long VAR_0)
{







  struct timeval VAR_1;
  VAR_1.tv_sec = VAR_0 / 1000L;
  VAR_0 = VAR_0 % 1000L;
  VAR_1.tv_usec = (int)VAR_0 * 1000;
  FUNC_3(0, ((void*)0), ((void*)0), ((void*)0), &VAR_1);

}
