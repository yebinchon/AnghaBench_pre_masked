
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
typedef int fd_set ;
struct TYPE_4__ {int result; } ;
struct TYPE_5__ {scalar_t__ msg; TYPE_1__ data; int * easy_handle; } ;
typedef TYPE_2__ CURLMsg ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

 int VAR_4 ;

 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *,int*) ;
 TYPE_2__* FUNC_8 (int *,int*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *,long*) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int,int *,int *,int *,struct timeval*) ;
 int VAR_5 ;

int FUNC_15(void)
{
  CURL *VAR_6[VAR_4];
  CURLM *VAR_7;

  int VAR_8 = 0;
  int VAR_9;

  CURLMsg *VAR_10;
  int VAR_11;


  for(VAR_9 = 0; VAR_9<VAR_4; VAR_9++)
    VAR_6[VAR_9] = FUNC_3();


  FUNC_4(VAR_6[128], VAR_3, "https://example.com");

  FUNC_4(VAR_6[129], VAR_3, "ftp://example.com");
  FUNC_4(VAR_6[129], VAR_2, 1L);


  VAR_7 = FUNC_9();


  for(VAR_9 = 0; VAR_9<VAR_4; VAR_9++)
    FUNC_5(VAR_7, VAR_6[VAR_9]);


  FUNC_10(VAR_7, &VAR_8);

  while(VAR_8) {
    struct timeval VAR_12;
    int VAR_13;
    CURLMcode VAR_14;

    fd_set VAR_15;
    fd_set VAR_16;
    fd_set VAR_17;
    int VAR_18 = -1;

    long VAR_19 = -1;

    FUNC_0(&VAR_15);
    FUNC_0(&VAR_16);
    FUNC_0(&VAR_17);


    VAR_12.tv_sec = 1;
    VAR_12.tv_usec = 0;

    FUNC_11(VAR_7, &VAR_19);
    if(VAR_19 >= 0) {
      VAR_12.tv_sec = VAR_19 / 1000;
      if(VAR_12.tv_sec > 1)
        VAR_12.tv_sec = 1;
      else
        VAR_12.tv_usec = (VAR_19 % 1000) * 1000;
    }


    VAR_14 = FUNC_7(VAR_7, &VAR_15, &VAR_16, &VAR_17, &VAR_18);

    if(VAR_14 != VAR_1) {
      FUNC_12(VAR_5, "curl_multi_fdset() failed, code %ld.\n", VAR_14);
      break;
    }







    if(VAR_18 == -1) {





      struct timeval VAR_20 = { 0, 100 * 1000 };
      VAR_13 = FUNC_14(0, ((void*)0), ((void*)0), ((void*)0), &VAR_20);

    }
    else {


      VAR_13 = FUNC_14(VAR_18 + 1, &VAR_15, &VAR_16, &VAR_17, &VAR_12);
    }

    switch(VAR_13) {
    case -1:

      break;
    case 0:
    default:
      FUNC_10(VAR_7, &VAR_8);
      break;
    }
  }


  while((VAR_10 = FUNC_8(VAR_7, &VAR_11))) {
    if(VAR_10->msg == VAR_0) {
      int VAR_21;


      for(VAR_21 = 0; VAR_21<VAR_4; VAR_21++) {
        int VAR_22 = (VAR_10->easy_handle == VAR_6[VAR_21]);
        if(VAR_22)
          break;
      }

      switch(VAR_21) {
      case 128:
        FUNC_13("HTTP transfer completed with status %d\n", VAR_10->data.result);
        break;
      case 129:
        FUNC_13("FTP transfer completed with status %d\n", VAR_10->data.result);
        break;
      }
    }
  }

  FUNC_6(VAR_7);


  for(VAR_9 = 0; VAR_9<VAR_4; VAR_9++)
    FUNC_2(VAR_6[VAR_9]);

  return 0;
}
