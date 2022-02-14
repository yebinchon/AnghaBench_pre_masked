
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
 int FUNC_0 (int *) ;
 long VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,...) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 () ;
 int VAR_4 ;
 long FUNC_15 (struct timeval,struct timeval) ;
 struct timeval FUNC_16 () ;

int FUNC_17(char *VAR_5)
{
  CURL *VAR_6 = ((void*)0);
  CURLM *VAR_7 = ((void*)0);
  int VAR_8 = 0;
  int VAR_9 = 0;

  FUNC_14();

  FUNC_8(VAR_2);

  FUNC_5(VAR_6);

  FUNC_6(VAR_6, VAR_0, VAR_5);
  FUNC_6(VAR_6, VAR_1, 1L);

  FUNC_11(VAR_7);

  FUNC_9(VAR_7, VAR_6);

  FUNC_12(VAR_7, &VAR_9);

  FUNC_1();

  while(VAR_9) {
    struct timeval VAR_10;
    fd_set VAR_11;
    fd_set VAR_12;
    fd_set VAR_13;
    int VAR_14 = -99;
    struct timeval VAR_15;
    struct timeval VAR_16;
    long VAR_17;

    VAR_10.tv_sec = 0;
    VAR_10.tv_usec = 100000L;

    FUNC_0(&VAR_11);
    FUNC_0(&VAR_12);
    FUNC_0(&VAR_13);

    FUNC_10(VAR_7, &VAR_11, &VAR_12, &VAR_13, &VAR_14);



    FUNC_13(VAR_14 + 1, &VAR_11, &VAR_12, &VAR_13, &VAR_10);

    FUNC_1();

    FUNC_7(VAR_4, "ping\n");
    VAR_15 = FUNC_16();

    FUNC_12(VAR_7, &VAR_9);

    FUNC_1();

    VAR_16 = FUNC_16();
    VAR_17 = FUNC_15(VAR_16, VAR_15);
    FUNC_7(VAR_4, "pong = %ld\n", VAR_17);

    if(VAR_17 > VAR_3) {
      VAR_8 = 100;
      break;
    }
  }

test_cleanup:



  FUNC_4(VAR_7);
  FUNC_2(VAR_6);
  FUNC_3();

  return VAR_8;
}
