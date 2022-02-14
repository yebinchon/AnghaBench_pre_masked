
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
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,...) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_12 () ;

int FUNC_13(char *VAR_4)
{
  CURL *VAR_5 = ((void*)0);
  CURLM *VAR_6 = ((void*)0);
  int VAR_7 = 0;

  int VAR_8;

  FUNC_12();





  FUNC_5(VAR_5);


  FUNC_6(VAR_5, VAR_3, VAR_4);
  FUNC_6(VAR_5, VAR_0, 1L);
  FUNC_6(VAR_5, VAR_2, 0L);
  FUNC_6(VAR_5, VAR_1, 0L);


  FUNC_9(VAR_6);


  FUNC_7(VAR_6, VAR_5);


  FUNC_10(VAR_6, &VAR_8);

  FUNC_1();

  while(VAR_8) {
    struct timeval VAR_9;

    fd_set VAR_10;
    fd_set VAR_11;
    fd_set VAR_12;
    int VAR_13 = -99;

    FUNC_0(&VAR_10);
    FUNC_0(&VAR_11);
    FUNC_0(&VAR_12);


    VAR_9.tv_sec = 1;
    VAR_9.tv_usec = 0;


    FUNC_8(VAR_6, &VAR_10, &VAR_11, &VAR_12, &VAR_13);



    FUNC_11(VAR_13 + 1, &VAR_10, &VAR_11, &VAR_12, &VAR_9);

    FUNC_1();


    FUNC_10(VAR_6, &VAR_8);

    FUNC_1();
  }

test_cleanup:



  FUNC_4(VAR_6);
  FUNC_2(VAR_5);
  FUNC_3();

  return VAR_7;
}
