
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int*) ;
 int FUNC_14 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_15 () ;

int FUNC_16(char *VAR_4)
{
  CURL *VAR_5 = ((void*)0);
  CURL *VAR_6 = ((void*)0);
  CURLM *VAR_7 = ((void*)0);
  int VAR_8 = 0;
  int VAR_9 = 0;

  FUNC_15();

  FUNC_9(VAR_3);

  FUNC_7(VAR_5);

  FUNC_8(VAR_5, VAR_0, VAR_4);
  FUNC_8(VAR_5, VAR_2, 1L);
  FUNC_8(VAR_5, VAR_1, 1L);

  VAR_8 = FUNC_4(VAR_5);
  if(VAR_8)
    goto test_cleanup;

  VAR_8 = FUNC_4(VAR_5);
  if(VAR_8)
    goto test_cleanup;

  VAR_6 = FUNC_3(VAR_5);
  if(!VAR_6)
    goto test_cleanup;
  FUNC_2(VAR_5);
  VAR_5 = VAR_6;

  FUNC_12(VAR_7);

  FUNC_10(VAR_7, VAR_5);

  FUNC_13(VAR_7, &VAR_9);

  FUNC_1();

  while(VAR_9) {
    struct timeval VAR_10;
    fd_set VAR_11;
    fd_set VAR_12;
    fd_set VAR_13;
    int VAR_14 = -99;

    VAR_10.tv_sec = 0;
    VAR_10.tv_usec = 100000L;

    FUNC_0(&VAR_11);
    FUNC_0(&VAR_12);
    FUNC_0(&VAR_13);

    FUNC_11(VAR_7, &VAR_11, &VAR_12, &VAR_13, &VAR_14);



    FUNC_14(VAR_14 + 1, &VAR_11, &VAR_12, &VAR_13, &VAR_10);

    FUNC_1();

    FUNC_13(VAR_7, &VAR_9);

    FUNC_1();
  }

test_cleanup:



  FUNC_6(VAR_7);
  FUNC_2(VAR_5);
  FUNC_5();

  return VAR_8;
}
