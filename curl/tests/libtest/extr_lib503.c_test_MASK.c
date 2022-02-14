
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ) ;
 long VAR_8 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 () ;

int FUNC_15(char *VAR_9)
{
  CURL *VAR_10 = ((void*)0);
  CURLM *VAR_11 = ((void*)0);
  int VAR_12 = 0;
  int VAR_13;

  FUNC_14();

  FUNC_8(VAR_7);

  FUNC_6(VAR_10);

  FUNC_7(VAR_10, VAR_2, VAR_8);
  FUNC_7(VAR_10, VAR_4, VAR_9);
  FUNC_7(VAR_10, VAR_5, "test:ing");
  FUNC_7(VAR_10, VAR_3, "test:ing");
  FUNC_7(VAR_10, VAR_1, 1L);
  FUNC_7(VAR_10, VAR_0, 1L);
  FUNC_7(VAR_10, VAR_6, 1L);

  FUNC_11(VAR_11);

  FUNC_9(VAR_11, VAR_10);

  for(;;) {
    struct timeval VAR_14;
    fd_set VAR_15, VAR_16, VAR_17;
    int VAR_18 = -99;

    VAR_14.tv_sec = 1;
    VAR_14.tv_usec = 0;

    FUNC_12(VAR_11, &VAR_13);

    FUNC_1();

    if(!VAR_13)
      break;

    FUNC_0(&VAR_15);
    FUNC_0(&VAR_16);
    FUNC_0(&VAR_17);

    FUNC_10(VAR_11, &VAR_15, &VAR_16, &VAR_17, &VAR_18);



    FUNC_13(VAR_18 + 1, &VAR_15, &VAR_16, &VAR_17, &VAR_14);

    FUNC_1();
  }

test_cleanup:



  FUNC_5(VAR_11, VAR_10);
  FUNC_4(VAR_11);
  FUNC_2(VAR_10);
  FUNC_3();

  return VAR_12;
}
