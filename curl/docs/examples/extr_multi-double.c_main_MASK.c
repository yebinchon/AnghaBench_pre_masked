
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *,int*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,long*) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int,int *,int *,int *,struct timeval*) ;
 int VAR_2 ;

int FUNC_13(void)
{
  CURL *VAR_3;
  CURL *VAR_4;
  CURLM *VAR_5;

  int VAR_6 = 0;

  VAR_3 = FUNC_3();
  VAR_4 = FUNC_3();


  FUNC_4(VAR_3, VAR_1, "https://www.example.com/");


  FUNC_4(VAR_4, VAR_1, "http://localhost/");


  VAR_5 = FUNC_8();


  FUNC_5(VAR_5, VAR_3);
  FUNC_5(VAR_5, VAR_4);


  FUNC_9(VAR_5, &VAR_6);

  while(VAR_6) {
    struct timeval VAR_7;
    int VAR_8;
    CURLMcode VAR_9;

    fd_set VAR_10;
    fd_set VAR_11;
    fd_set VAR_12;
    int VAR_13 = -1;

    long VAR_14 = -1;

    FUNC_0(&VAR_10);
    FUNC_0(&VAR_11);
    FUNC_0(&VAR_12);


    VAR_7.tv_sec = 1;
    VAR_7.tv_usec = 0;

    FUNC_10(VAR_5, &VAR_14);
    if(VAR_14 >= 0) {
      VAR_7.tv_sec = VAR_14 / 1000;
      if(VAR_7.tv_sec > 1)
        VAR_7.tv_sec = 1;
      else
        VAR_7.tv_usec = (VAR_14 % 1000) * 1000;
    }


    VAR_9 = FUNC_7(VAR_5, &VAR_10, &VAR_11, &VAR_12, &VAR_13);

    if(VAR_9 != VAR_0) {
      FUNC_11(VAR_2, "curl_multi_fdset() failed, code %ld.\n", VAR_9);
      break;
    }







    if(VAR_13 == -1) {





      struct timeval VAR_15 = { 0, 100 * 1000 };
      VAR_8 = FUNC_12(0, ((void*)0), ((void*)0), ((void*)0), &VAR_15);

    }
    else {


      VAR_8 = FUNC_12(VAR_13 + 1, &VAR_10, &VAR_11, &VAR_12, &VAR_7);
    }

    switch(VAR_8) {
    case -1:

      break;
    case 0:
    default:

      FUNC_9(VAR_5, &VAR_6);
      break;
    }
  }

  FUNC_6(VAR_5);

  FUNC_2(VAR_3);
  FUNC_2(VAR_4);

  return 0;
}
