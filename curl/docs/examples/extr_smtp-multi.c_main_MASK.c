
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_status {scalar_t__ lines_read; } ;
struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
struct curl_slist {int dummy; } ;
typedef int fd_set ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 long VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *,int*) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,long*) ;
 struct curl_slist* FUNC_14 (struct curl_slist*,int ) ;
 int FUNC_15 (struct curl_slist*) ;
 int FUNC_16 (int ,char*,...) ;
 long VAR_12 ;
 int FUNC_17 (int,int *,int *,int *,struct timeval*) ;
 int VAR_13 ;
 scalar_t__ FUNC_18 (struct timeval,struct timeval) ;
 struct timeval FUNC_19 () ;

int FUNC_20(void)
{
  CURL *VAR_14;
  CURLM *VAR_15;
  int VAR_16 = 1;
  struct timeval VAR_17;
  struct curl_slist *VAR_18 = ((void*)0);
  struct upload_status VAR_19;

  VAR_19.lines_read = 0;

  FUNC_6(VAR_8);

  VAR_14 = FUNC_3();
  if(!VAR_14)
    return 1;

  VAR_15 = FUNC_10();
  if(!VAR_15)
    return 2;


  FUNC_4(VAR_14, VAR_7, "smtp://mail.example.com");







  FUNC_4(VAR_14, VAR_2, VAR_9);




  VAR_18 = FUNC_14(VAR_18, VAR_11);
  VAR_18 = FUNC_14(VAR_18, VAR_0);
  FUNC_4(VAR_14, VAR_3, VAR_18);




  FUNC_4(VAR_14, VAR_5, VAR_12);
  FUNC_4(VAR_14, VAR_4, &VAR_19);
  FUNC_4(VAR_14, VAR_6, 1L);


  FUNC_7(VAR_15, VAR_14);


  VAR_17 = FUNC_19();


  FUNC_11(VAR_15, &VAR_16);

  while(VAR_16) {
    struct timeval VAR_20;
    fd_set VAR_21;
    fd_set VAR_22;
    fd_set VAR_23;
    int VAR_24 = -1;
    int VAR_25;
    CURLMcode VAR_26;

    long VAR_27 = -1;


    FUNC_0(&VAR_21);
    FUNC_0(&VAR_22);
    FUNC_0(&VAR_23);


    VAR_20.tv_sec = 1;
    VAR_20.tv_usec = 0;

    FUNC_13(VAR_15, &VAR_27);
    if(VAR_27 >= 0) {
      VAR_20.tv_sec = VAR_27 / 1000;
      if(VAR_20.tv_sec > 1)
        VAR_20.tv_sec = 1;
      else
        VAR_20.tv_usec = (VAR_27 % 1000) * 1000;
    }


    VAR_26 = FUNC_9(VAR_15, &VAR_21, &VAR_22, &VAR_23, &VAR_24);

    if(VAR_26 != VAR_1) {
      FUNC_16(VAR_13, "curl_multi_fdset() failed, code %ld.\n", VAR_26);
      break;
    }







    if(VAR_24 == -1) {





      struct timeval VAR_28 = { 0, 100 * 1000 };
      VAR_25 = FUNC_17(0, ((void*)0), ((void*)0), ((void*)0), &VAR_28);

    }
    else {


      VAR_25 = FUNC_17(VAR_24 + 1, &VAR_21, &VAR_22, &VAR_23, &VAR_20);
    }

    if(FUNC_18(FUNC_19(), VAR_17) > VAR_10) {
      FUNC_16(VAR_13,
              "ABORTING: Since it seems that we would have run forever.\n");
      break;
    }

    switch(VAR_25) {
    case -1:
      break;
    case 0:
    default:
      FUNC_11(VAR_15, &VAR_16);
      break;
    }
  }


  FUNC_15(VAR_18);


  FUNC_12(VAR_15, VAR_14);
  FUNC_8(VAR_15);
  FUNC_2(VAR_14);
  FUNC_5();

  return 0;
}
