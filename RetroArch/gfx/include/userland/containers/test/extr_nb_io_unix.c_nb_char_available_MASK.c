
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__,int *,int *,int *,struct timeval*) ;

int FUNC_4(void)
{
  struct timeval VAR_1;
  fd_set VAR_2;
  VAR_1.tv_sec = 0;
  VAR_1.tv_usec = 0;
  FUNC_2(&VAR_2);
  FUNC_1(VAR_0, &VAR_2);
  FUNC_3(VAR_0+1, &VAR_2, ((void*)0), ((void*)0), &VAR_1);
  return (FUNC_0(0, &VAR_2));
}
