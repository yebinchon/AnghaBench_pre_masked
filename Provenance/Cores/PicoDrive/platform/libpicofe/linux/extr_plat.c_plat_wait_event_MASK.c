
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_5 (int) ;

int FUNC_6(int *VAR_0, int VAR_1, int VAR_2)
{
 struct timeval VAR_3, *VAR_4 = ((void*)0);
 int VAR_5, VAR_6, VAR_7 = -1;
 fd_set VAR_8;

 if (VAR_2 >= 0) {
  VAR_3.tv_sec = VAR_2 / 1000;
  VAR_3.tv_usec = (VAR_2 % 1000) * 1000;
  VAR_4 = &VAR_3;
 }

 FUNC_2(&VAR_8);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_0[VAR_5] > VAR_7) VAR_7 = VAR_0[VAR_5];
  FUNC_1(VAR_0[VAR_5], &VAR_8);
 }

 VAR_6 = FUNC_4(VAR_7 + 1, &VAR_8, ((void*)0), ((void*)0), VAR_4);
 if (VAR_6 == -1)
 {
  FUNC_3("plat_wait_event: select failed");
  FUNC_5(1);
  return -1;
 }

 if (VAR_6 == 0)
  return -1;

 VAR_6 = -1;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (FUNC_0(VAR_0[VAR_5], &VAR_8))
   VAR_6 = VAR_0[VAR_5];

 return VAR_6;
}
