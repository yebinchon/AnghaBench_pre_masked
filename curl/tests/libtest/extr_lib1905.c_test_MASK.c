
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef int fd_set ;
typedef char CURLSH ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int *,int*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,long*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 () ;
 int FUNC_14 (char*,int ,int ) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;

int FUNC_16(char *VAR_7)
{
  CURLSH *VAR_8 = ((void*)0);
  CURL *VAR_9 = ((void*)0);
  int VAR_10;

  CURLM *VAR_11 = FUNC_8();
  if(!VAR_11)
    return 1;
  VAR_8 = FUNC_13();
  if(!VAR_8)
    goto cleanup;

  FUNC_14(VAR_8, VAR_5, VAR_6);
  FUNC_14(VAR_8, VAR_5, VAR_6);

  VAR_9 = FUNC_2();
  if(!VAR_9)
    goto cleanup;

  FUNC_3(VAR_9, VAR_3, VAR_8);
  FUNC_3(VAR_9, VAR_4, VAR_7);
  FUNC_3(VAR_9, VAR_0, "log/cookies1905");
  FUNC_3(VAR_9, VAR_1, "log/cookies1905");

  FUNC_5(VAR_11, VAR_9);

  VAR_10 = 1;
  while(VAR_10) {
    int VAR_12 = 0;
    long VAR_13;
    fd_set VAR_14, VAR_15, VAR_16;
    struct timeval VAR_17;

    FUNC_0(&VAR_14);
    FUNC_0(&VAR_15);
    FUNC_0(&VAR_16);
    FUNC_9(VAR_11, &VAR_10);

    FUNC_7(VAR_11, &VAR_14, &VAR_15, &VAR_16, &VAR_12);
    FUNC_11(VAR_11, &VAR_13);

    if(VAR_13 > 0) {
      VAR_17.tv_sec = VAR_13 / 1000;
      VAR_17.tv_usec = (VAR_13 % 1000) * 1000;
    }
    else {
      VAR_17.tv_sec = 0;
      VAR_17.tv_usec = 1000;
    }

    FUNC_15(VAR_12 + 1, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
  }

  FUNC_3(VAR_9, VAR_2, "FLUSH");
  FUNC_3(VAR_9, VAR_3, ((void*)0));

  FUNC_10(VAR_11, VAR_9);
  cleanup:
  FUNC_1(VAR_9);
  FUNC_12(VAR_8);
  FUNC_6(VAR_11);
  FUNC_4();

  return 0;
}
