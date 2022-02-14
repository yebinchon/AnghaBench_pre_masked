
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 () ;

int FUNC_15(char *VAR_2)
{
  CURL *VAR_3 = ((void*)0);
  CURLM *VAR_4 = ((void*)0);
  int VAR_5 = 0;
  int VAR_6;

  FUNC_14();

  FUNC_8(VAR_1);

  FUNC_6(VAR_3);

  FUNC_7(VAR_3, VAR_0, VAR_2);

  FUNC_11(VAR_4);

  FUNC_9(VAR_4, VAR_3);

  for(;;) {
    struct timeval VAR_7;
    fd_set VAR_8, VAR_9, VAR_10;
    int VAR_11 = -99;

    VAR_7.tv_sec = 0;
    VAR_7.tv_usec = 100000L;

    FUNC_12(VAR_4, &VAR_6);

    FUNC_1();

    if(!VAR_6)
      break;

    FUNC_0(&VAR_8);
    FUNC_0(&VAR_9);
    FUNC_0(&VAR_10);

    FUNC_10(VAR_4, &VAR_8, &VAR_9, &VAR_10, &VAR_11);



    FUNC_13(VAR_11 + 1, &VAR_8, &VAR_9, &VAR_10, &VAR_7);

    FUNC_1();
  }

test_cleanup:



  FUNC_5(VAR_4, VAR_3);
  FUNC_4(VAR_4);
  FUNC_2(VAR_3);
  FUNC_3();

  return VAR_5;
}
