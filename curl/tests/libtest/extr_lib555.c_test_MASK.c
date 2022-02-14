
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ) ;
 long VAR_16 ;
 long VAR_17 ;
 long VAR_18 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*) ;
 long VAR_19 ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ) ;
 int VAR_20 ;

int FUNC_17(char *VAR_21)
{
  int VAR_22 = 0;
  CURL *VAR_23 = ((void*)0);
  int VAR_24 = 0;
  CURLM *VAR_25 = ((void*)0);
  int VAR_26 = 1;

  FUNC_15();

  FUNC_8(VAR_15);

  FUNC_6(VAR_23);

  FUNC_7(VAR_23, VAR_13, VAR_21);
  FUNC_7(VAR_23, VAR_14, 1L);
  FUNC_7(VAR_23, VAR_3, 1L);


  FUNC_7(VAR_23, VAR_5, VAR_16);
  FUNC_7(VAR_23, VAR_4, &VAR_24);
  FUNC_7(VAR_23, VAR_12, VAR_19);
  FUNC_7(VAR_23, VAR_11, &VAR_24);


  FUNC_7(VAR_23, VAR_7, (long)FUNC_16(VAR_20));

  FUNC_7(VAR_23, VAR_6, 1L);
  FUNC_7(VAR_23, VAR_8, VAR_17);
  FUNC_7(VAR_23, VAR_10, VAR_18);
  FUNC_7(VAR_23, VAR_9,
                   (long) (VAR_2 | VAR_1 | VAR_0) );

  FUNC_11(VAR_25);

  FUNC_9(VAR_25, VAR_23);

  while(VAR_26) {
    struct timeval VAR_27;
    fd_set VAR_28, VAR_29, VAR_30;
    int VAR_31 = -99;

    VAR_27.tv_sec = 0;
    VAR_27.tv_usec = 100000L;

    FUNC_12(VAR_25, &VAR_26);

    FUNC_1();





    if(!VAR_26)
      break;

    FUNC_0(&VAR_28);
    FUNC_0(&VAR_29);
    FUNC_0(&VAR_30);

    FUNC_10(VAR_25, &VAR_28, &VAR_29, &VAR_30, &VAR_31);



    FUNC_13(VAR_31 + 1, &VAR_28, &VAR_29, &VAR_30, &VAR_27);

    FUNC_1();
  }

test_cleanup:



  FUNC_5(VAR_25, VAR_23);
  FUNC_4(VAR_25);
  FUNC_2(VAR_23);
  FUNC_3();

  return VAR_22;
}
