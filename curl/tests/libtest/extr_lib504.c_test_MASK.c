
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
typedef int CURLMsg ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,...) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ) ;
 long VAR_6 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int*) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_16 () ;
 int VAR_7 ;

int FUNC_17(char *VAR_8)
{
  CURL *VAR_9 = ((void*)0);
  int VAR_10 = 0;
  CURLM *VAR_11 = ((void*)0);
  fd_set VAR_12, VAR_13, VAR_14;
  int VAR_15;

  FUNC_16();

  FUNC_10(VAR_3);

  FUNC_7(VAR_9);



  if(VAR_6)
    FUNC_8(VAR_9, VAR_0, VAR_6);
  FUNC_8(VAR_9, VAR_1, VAR_8);
  FUNC_8(VAR_9, VAR_2, 1L);

  FUNC_13(VAR_11);

  FUNC_11(VAR_11, VAR_9);

  for(;;) {
    struct timeval VAR_16;
    int VAR_17 = -99;

    VAR_16.tv_sec = 1;
    VAR_16.tv_usec = 0;

    FUNC_9(VAR_7, "curl_multi_perform()\n");

    FUNC_14(VAR_11, &VAR_15);

    FUNC_1();

    if(!VAR_15) {

      int VAR_18;
      CURLMsg *VAR_19 = FUNC_5(VAR_11, &VAR_18);
      FUNC_9(VAR_7, "Expected: not running\n");
      if(VAR_19 && !VAR_18)
        VAR_10 = VAR_5;
      else
        VAR_10 = VAR_4;
      break;
    }
    FUNC_9(VAR_7, "running == %d\n", VAR_15);

    FUNC_0(&VAR_12);
    FUNC_0(&VAR_13);
    FUNC_0(&VAR_14);

    FUNC_9(VAR_7, "curl_multi_fdset()\n");

    FUNC_12(VAR_11, &VAR_12, &VAR_13, &VAR_14, &VAR_17);



    FUNC_15(VAR_17 + 1, &VAR_12, &VAR_13, &VAR_14, &VAR_16);

    FUNC_1();
  }

test_cleanup:



  FUNC_6(VAR_11, VAR_9);
  FUNC_4(VAR_11);
  FUNC_2(VAR_9);
  FUNC_3();

  return VAR_10;
}
