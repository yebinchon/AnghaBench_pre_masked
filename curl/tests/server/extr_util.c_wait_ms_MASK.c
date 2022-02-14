
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_4 (struct timeval,struct timeval) ;
 struct timeval FUNC_5 () ;

int FUNC_6(int VAR_3)
{


  struct timeval VAR_4;

  struct timeval VAR_5;
  int VAR_6;

  int VAR_7 = 0;

  if(!VAR_3)
    return 0;
  if(VAR_3 < 0) {
    VAR_2 = VAR_1;
    return -1;
  }





  VAR_6 = VAR_3;
  VAR_5 = FUNC_5();
  do {
    int VAR_8;



    VAR_4.tv_sec = VAR_6 / 1000;
    VAR_4.tv_usec = (VAR_6 % 1000) * 1000;
    VAR_7 = FUNC_3(0, ((void*)0), ((void*)0), ((void*)0), &VAR_4);

    if(VAR_7 != -1)
      break;
    VAR_8 = VAR_2;
    if(VAR_8 && (VAR_8 != VAR_0))
      break;
    VAR_6 = VAR_3 - (int)FUNC_4(FUNC_5(), VAR_5);
    if(VAR_6 <= 0)
      break;
  } while(VAR_7 == -1);

  if(VAR_7)
    VAR_7 = -1;
  return VAR_7;
}
