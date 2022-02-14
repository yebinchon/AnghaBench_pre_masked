
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
typedef int fd_set ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *,int*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,long*) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 long VAR_4 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int VAR_5 ;

int FUNC_14(void)
{
  CURL *VAR_6;
  CURLM *VAR_7;

  int VAR_8 = 0;

  VAR_6 = FUNC_3();


  FUNC_4(VAR_6, VAR_2, "https://www.example.com/");

  FUNC_4(VAR_6, VAR_1, VAR_4);
  FUNC_4(VAR_6, VAR_3, 1L);


  VAR_7 = FUNC_8();


  FUNC_5(VAR_7, VAR_6);


  FUNC_9(VAR_7, &VAR_8);

  while(VAR_8) {
    struct timeval VAR_9;
    int VAR_10;
    CURLMcode VAR_11;

    fd_set VAR_12;
    fd_set VAR_13;
    fd_set VAR_14;
    int VAR_15 = -1;

    long VAR_16 = -1;

    FUNC_0(&VAR_12);
    FUNC_0(&VAR_13);
    FUNC_0(&VAR_14);


    VAR_9.tv_sec = 1;
    VAR_9.tv_usec = 0;

    FUNC_10(VAR_7, &VAR_16);
    if(VAR_16 >= 0) {
      VAR_9.tv_sec = VAR_16 / 1000;
      if(VAR_9.tv_sec > 1)
        VAR_9.tv_sec = 1;
      else
        VAR_9.tv_usec = (VAR_16 % 1000) * 1000;
    }


    VAR_11 = FUNC_7(VAR_7, &VAR_12, &VAR_13, &VAR_14, &VAR_15);

    if(VAR_11 != VAR_0) {
      FUNC_11(VAR_5, "curl_multi_fdset() failed, code %ld.\n", VAR_11);
      break;
    }







    if(VAR_15 == -1) {





      struct timeval VAR_17 = { 0, 100 * 1000 };
      VAR_10 = FUNC_13(0, ((void*)0), ((void*)0), ((void*)0), &VAR_17);

    }
    else {


      VAR_10 = FUNC_13(VAR_15 + 1, &VAR_12, &VAR_13, &VAR_14, &VAR_9);
    }

    switch(VAR_10) {
    case -1:

      VAR_8 = 0;
      FUNC_12("select() returns error, this is badness\n");
      break;
    case 0:
    default:

      FUNC_9(VAR_7, &VAR_8);
      break;
    }
  }

  FUNC_6(VAR_7);

  FUNC_2(VAR_6);

  return 0;
}
