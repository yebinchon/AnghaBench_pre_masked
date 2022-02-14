
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
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *,int*) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,long*) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (struct timeval,struct timeval) ;
 struct timeval FUNC_17 () ;

int FUNC_18(void)
{
  CURL *VAR_7;
  CURLM *VAR_8;
  int VAR_9 = 1;
  struct timeval VAR_10;

  FUNC_6(VAR_4);

  VAR_7 = FUNC_3();
  if(!VAR_7)
    return 1;

  VAR_8 = FUNC_10();
  if(!VAR_8)
    return 2;


  FUNC_4(VAR_7, VAR_3, "user");
  FUNC_4(VAR_7, VAR_1, "secret");


  FUNC_4(VAR_7, VAR_2, "pop3://pop.example.com/1");


  FUNC_7(VAR_8, VAR_7);


  VAR_10 = FUNC_17();


  FUNC_11(VAR_8, &VAR_9);

  while(VAR_9) {
    struct timeval VAR_11;
    fd_set VAR_12;
    fd_set VAR_13;
    fd_set VAR_14;
    int VAR_15 = -1;
    int VAR_16;
    CURLMcode VAR_17;

    long VAR_18 = -1;


    FUNC_0(&VAR_12);
    FUNC_0(&VAR_13);
    FUNC_0(&VAR_14);


    VAR_11.tv_sec = 1;
    VAR_11.tv_usec = 0;

    FUNC_13(VAR_8, &VAR_18);
    if(VAR_18 >= 0) {
      VAR_11.tv_sec = VAR_18 / 1000;
      if(VAR_11.tv_sec > 1)
        VAR_11.tv_sec = 1;
      else
        VAR_11.tv_usec = (VAR_18 % 1000) * 1000;
    }


    VAR_17 = FUNC_9(VAR_8, &VAR_12, &VAR_13, &VAR_14, &VAR_15);

    if(VAR_17 != VAR_0) {
      FUNC_14(VAR_6, "curl_multi_fdset() failed, code %ld.\n", VAR_17);
      break;
    }







    if(VAR_15 == -1) {





      struct timeval VAR_19 = { 0, 100 * 1000 };
      VAR_16 = FUNC_15(0, ((void*)0), ((void*)0), ((void*)0), &VAR_19);

    }
    else {


      VAR_16 = FUNC_15(VAR_15 + 1, &VAR_12, &VAR_13, &VAR_14, &VAR_11);
    }

    if(FUNC_16(FUNC_17(), VAR_10) > VAR_5) {
      FUNC_14(VAR_6,
              "ABORTING: Since it seems that we would have run forever.\n");
      break;
    }

    switch(VAR_16) {
    case -1:
      break;
    case 0:
    default:
      FUNC_11(VAR_8, &VAR_9);
      break;
    }
  }


  FUNC_12(VAR_8, VAR_7);
  FUNC_8(VAR_8);
  FUNC_2(VAR_7);
  FUNC_5();

  return 0;
}
