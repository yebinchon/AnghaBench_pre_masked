
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
typedef int fd_set ;
typedef char* curl_off_t ;
struct TYPE_4__ {int result; } ;
struct TYPE_5__ {scalar_t__ msg; TYPE_1__ data; } ;
typedef TYPE_2__ CURLMsg ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *,int*) ;
 TYPE_2__* FUNC_10 (int *,int*) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int *,long*) ;
 int FUNC_14 (int ,char*,scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_18 () ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_19(char *VAR_10)
{
  CURL *VAR_11;
  CURLM *VAR_12;
  int VAR_13;
  CURLMsg *VAR_14;
  int VAR_15;
  int VAR_16 = VAR_0;

  FUNC_18();

  FUNC_15(VAR_6);


  VAR_11 = FUNC_4();


  VAR_12 = FUNC_11();


  FUNC_7(VAR_12, VAR_11);


  FUNC_5(VAR_11, VAR_5, VAR_10);
  FUNC_5(VAR_11, VAR_4,
                   (curl_off_t)VAR_9);
  FUNC_5(VAR_11, VAR_3, VAR_8);


  FUNC_12(VAR_12, &VAR_13);

  FUNC_2();

  do {
    struct timeval VAR_17;
    int VAR_18;
    CURLMcode VAR_19;

    fd_set VAR_20;
    fd_set VAR_21;
    fd_set VAR_22;
    int VAR_23 = -1;

    long VAR_24 = -1;

    FUNC_0(&VAR_20);
    FUNC_0(&VAR_21);
    FUNC_0(&VAR_22);


    VAR_17.tv_sec = 1;
    VAR_17.tv_usec = 0;

    FUNC_13(VAR_12, &VAR_24);
    if(VAR_24 >= 0) {
      VAR_17.tv_sec = VAR_24 / 1000;
      if(VAR_17.tv_sec > 1)
        VAR_17.tv_sec = 1;
      else
        VAR_17.tv_usec = (VAR_24 % 1000) * 1000;
    }


    VAR_19 = FUNC_9(VAR_12, &VAR_20, &VAR_21, &VAR_22, &VAR_23);

    if(VAR_19 != VAR_2) {
      FUNC_14(VAR_7, "curl_multi_fdset() failed, code %ld.\n", VAR_19);
      break;
    }







    if(VAR_23 == -1) {





      struct timeval VAR_25 = { 0, 100 * 1000 };
      VAR_18 = FUNC_17(0, ((void*)0), ((void*)0), ((void*)0), &VAR_25);

    }
    else {


      VAR_18 = FUNC_17(VAR_23 + 1, &VAR_20, &VAR_21, &VAR_22, &VAR_17);
    }

    switch(VAR_18) {
    case -1:

      break;
    case 0:
    default:
      FUNC_12(VAR_12, &VAR_13);
      break;
    }

    FUNC_2();
  } while(VAR_13);


  do {
    VAR_14 = FUNC_10(VAR_12, &VAR_15);
    if(VAR_14 && VAR_14->msg == VAR_1) {
      FUNC_16("HTTP transfer completed with status %d\n", VAR_14->data.result);
      break;
    }

    FUNC_2();
  } while(VAR_14);

test_cleanup:
  FUNC_8(VAR_12);


  FUNC_3(VAR_11);
  FUNC_6();

  return VAR_16;
}
