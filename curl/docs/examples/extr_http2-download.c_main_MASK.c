
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer {int easy; } ;
struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
typedef int fd_set ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int *,int*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,long*) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 (struct transfer*,int) ;
 int VAR_4 ;

int FUNC_15(int VAR_5, char **VAR_6)
{
  struct transfer VAR_7[VAR_3];
  CURLM *VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  int VAR_11;
  if(VAR_5 > 1) {

    VAR_11 = FUNC_2(VAR_6[1]);
    if((VAR_11 < 1) || (VAR_11 > VAR_3))
      VAR_11 = 3;
  }
  else
    VAR_11 = 3;


  VAR_8 = FUNC_7();

  for(VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
    FUNC_14(&VAR_7[VAR_9], VAR_9);


    FUNC_4(VAR_8, VAR_7[VAR_9].easy);
  }

  FUNC_10(VAR_8, VAR_0, VAR_2);


  FUNC_8(VAR_8, &VAR_10);

  while(VAR_10) {
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

    FUNC_11(VAR_8, &VAR_19);
    if(VAR_19 >= 0) {
      VAR_12.tv_sec = VAR_19 / 1000;
      if(VAR_12.tv_sec > 1)
        VAR_12.tv_sec = 1;
      else
        VAR_12.tv_usec = (VAR_19 % 1000) * 1000;
    }


    VAR_14 = FUNC_6(VAR_8, &VAR_15, &VAR_16, &VAR_17, &VAR_18);

    if(VAR_14 != VAR_1) {
      FUNC_12(VAR_4, "curl_multi_fdset() failed, code %ld.\n", VAR_14);
      break;
    }







    if(VAR_18 == -1) {





      struct timeval VAR_20 = { 0, 100 * 1000 };
      VAR_13 = FUNC_13(0, ((void*)0), ((void*)0), ((void*)0), &VAR_20);

    }
    else {


      VAR_13 = FUNC_13(VAR_18 + 1, &VAR_15, &VAR_16, &VAR_17, &VAR_12);
    }

    switch(VAR_13) {
    case -1:

      break;
    case 0:
    default:

      FUNC_8(VAR_8, &VAR_10);
      break;
    }
  }

  for(VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
    FUNC_9(VAR_8, VAR_7[VAR_9].easy);
    FUNC_3(VAR_7[VAR_9].easy);
  }

  FUNC_5(VAR_8);

  return 0;
}
