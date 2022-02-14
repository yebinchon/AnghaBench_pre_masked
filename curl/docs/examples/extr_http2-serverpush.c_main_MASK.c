
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
struct CURLMsg {scalar_t__ msg; int * easy_handle; } ;
typedef int fd_set ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int *,int*) ;
 struct CURLMsg* FUNC_7 (int *,int*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int*) ;
 int FUNC_12 (int *,long*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int,int *,int *,int *,struct timeval*) ;
 int* VAR_6 ;
 scalar_t__ FUNC_15 (int *) ;
 int VAR_7 ;

int FUNC_16(void)
{
  CURL *VAR_8;
  CURLM *VAR_9;
  int VAR_10;
  int VAR_11 = 1;
  struct CURLMsg *VAR_12;


  VAR_9 = FUNC_8();

  VAR_8 = FUNC_3();


  if(FUNC_15(VAR_8)) {
    FUNC_13(VAR_7, "failed\n");
    return 1;
  }


  FUNC_4(VAR_9, VAR_8);

  FUNC_11(VAR_9, VAR_0, VAR_5);
  FUNC_11(VAR_9, VAR_2, VAR_6);
  FUNC_11(VAR_9, VAR_1, &VAR_11);


  FUNC_9(VAR_9, &VAR_10);

  do {
    struct timeval VAR_13;
    int VAR_14;
    CURLMcode VAR_15;

    fd_set VAR_16;
    fd_set VAR_17;
    fd_set VAR_18;
    int VAR_19 = -1;

    long VAR_20 = -1;

    FUNC_0(&VAR_16);
    FUNC_0(&VAR_17);
    FUNC_0(&VAR_18);


    VAR_13.tv_sec = 1;
    VAR_13.tv_usec = 0;

    FUNC_12(VAR_9, &VAR_20);
    if(VAR_20 >= 0) {
      VAR_13.tv_sec = VAR_20 / 1000;
      if(VAR_13.tv_sec > 1)
        VAR_13.tv_sec = 1;
      else
        VAR_13.tv_usec = (VAR_20 % 1000) * 1000;
    }


    VAR_15 = FUNC_6(VAR_9, &VAR_16, &VAR_17, &VAR_18, &VAR_19);

    if(VAR_15 != VAR_4) {
      FUNC_13(VAR_7, "curl_multi_fdset() failed, code %ld.\n", VAR_15);
      break;
    }







    if(VAR_19 == -1) {





      struct timeval VAR_21 = { 0, 100 * 1000 };
      VAR_14 = FUNC_14(0, ((void*)0), ((void*)0), ((void*)0), &VAR_21);

    }
    else {


      VAR_14 = FUNC_14(VAR_19 + 1, &VAR_16, &VAR_17, &VAR_18, &VAR_13);
    }

    switch(VAR_14) {
    case -1:

      break;
    case 0:
    default:

      FUNC_9(VAR_9, &VAR_10);
      break;
    }







    do {
      int VAR_22 = 0;;
      VAR_12 = FUNC_7(VAR_9, &VAR_22);
      if(VAR_12 && (VAR_12->msg == VAR_3)) {
        CURL *VAR_23 = VAR_12->easy_handle;
        VAR_11--;
        FUNC_10(VAR_9, VAR_23);
        FUNC_2(VAR_23);
      }
    } while(VAR_12);

  } while(VAR_11);

  FUNC_5(VAR_9);


  return 0;
}
