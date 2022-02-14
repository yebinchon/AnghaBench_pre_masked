
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef char curl_slist ;
typedef int redirect ;
typedef int fd_set ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,...) ;
 int FUNC_11 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (char*,int,char*,int ,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int *,int *,int*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_19 () ;
 int VAR_8 ;

int FUNC_20(char *VAR_9)
{
  CURL *VAR_10 = ((void*)0);
  CURL *VAR_11;
  CURLM *VAR_12 = ((void*)0);
  int VAR_13;
  int VAR_14 = 0;

  char VAR_15[160];


  struct curl_slist *VAR_16;

  FUNC_12(VAR_15, sizeof(VAR_15), "google.com:%s:%s", VAR_6,
            VAR_7);

  FUNC_19();

  VAR_16 = FUNC_7(((void*)0), VAR_15);
  if(!VAR_16) {
    FUNC_11(VAR_8, "curl_slist_append() failed\n");
    return VAR_5;
  }

  FUNC_17(VAR_4);
  if(VAR_14) {
    FUNC_8(VAR_16);
    return VAR_14;
  }

  FUNC_9(VAR_10);

  FUNC_10(VAR_10, VAR_3, VAR_9);
  FUNC_10(VAR_10, VAR_1, 1L);
  FUNC_10(VAR_10, VAR_2, VAR_16);

  VAR_11 = FUNC_3(VAR_10);
  if(VAR_11) {
    FUNC_2(VAR_10);
    VAR_10 = VAR_11;
  }
  else {
    FUNC_8(VAR_16);
    FUNC_2(VAR_10);
    return VAR_0;
  }

  FUNC_15(VAR_12);

  FUNC_13(VAR_12, VAR_10);

  FUNC_16(VAR_12, &VAR_13);

  FUNC_1();

  while(VAR_13) {
    struct timeval VAR_17;
    fd_set VAR_18;
    fd_set VAR_19;
    fd_set VAR_20;
    int VAR_21 = -99;

    FUNC_0(&VAR_18);
    FUNC_0(&VAR_19);
    FUNC_0(&VAR_20);
    VAR_17.tv_sec = 1;
    VAR_17.tv_usec = 0;

    FUNC_14(VAR_12, &VAR_18, &VAR_19, &VAR_20, &VAR_21);



    FUNC_18(VAR_21 + 1, &VAR_18, &VAR_19, &VAR_20, &VAR_17);

    FUNC_1();

    FUNC_16(VAR_12, &VAR_13);

    FUNC_1();
  }

test_cleanup:
  FUNC_8(VAR_16);

  return VAR_14;
}
