
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
struct input {int hnd; } ;
typedef int fd_set ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int *,int*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,long) ;
 int FUNC_11 (int *,long*) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 (struct input*,int,char const*) ;
 int VAR_5 ;

int FUNC_15(int VAR_6, char **VAR_7)
{
  struct input VAR_8[VAR_4];
  CURLM *VAR_9;
  int VAR_10;
  int VAR_11 = 0;
  const char *VAR_12 = "index.html";
  int VAR_13;

  if(VAR_6 > 1) {

    VAR_13 = FUNC_2(VAR_7[1]);

    if(!VAR_13 || (VAR_13 > VAR_4))
      VAR_13 = 3;

    if(VAR_6 > 2)

      VAR_12 = VAR_7[2];
  }
  else
    VAR_13 = 3;


  VAR_9 = FUNC_7();

  for(VAR_10 = 0; VAR_10<VAR_13; VAR_10++) {
    FUNC_14(&VAR_8[VAR_10], VAR_10, VAR_12);


    FUNC_4(VAR_9, VAR_8[VAR_10].hnd);
  }

  FUNC_10(VAR_9, VAR_1, VAR_3);


  FUNC_10(VAR_9, VAR_0, 1L);


  FUNC_8(VAR_9, &VAR_11);

  while(VAR_11) {
    struct timeval VAR_14;
    int VAR_15;
    CURLMcode VAR_16;

    fd_set VAR_17;
    fd_set VAR_18;
    fd_set VAR_19;
    int VAR_20 = -1;

    long VAR_21 = -1;

    FUNC_0(&VAR_17);
    FUNC_0(&VAR_18);
    FUNC_0(&VAR_19);


    VAR_14.tv_sec = 1;
    VAR_14.tv_usec = 0;

    FUNC_11(VAR_9, &VAR_21);
    if(VAR_21 >= 0) {
      VAR_14.tv_sec = VAR_21 / 1000;
      if(VAR_14.tv_sec > 1)
        VAR_14.tv_sec = 1;
      else
        VAR_14.tv_usec = (VAR_21 % 1000) * 1000;
    }


    VAR_16 = FUNC_6(VAR_9, &VAR_17, &VAR_18, &VAR_19, &VAR_20);

    if(VAR_16 != VAR_2) {
      FUNC_12(VAR_5, "curl_multi_fdset() failed, code %ld.\n", VAR_16);
      break;
    }







    if(VAR_20 == -1) {





      struct timeval VAR_22 = { 0, 100 * 1000 };
      VAR_15 = FUNC_13(0, ((void*)0), ((void*)0), ((void*)0), &VAR_22);

    }
    else {


      VAR_15 = FUNC_13(VAR_20 + 1, &VAR_17, &VAR_18, &VAR_19, &VAR_14);
    }

    switch(VAR_15) {
    case -1:

      break;
    case 0:
    default:

      FUNC_8(VAR_9, &VAR_11);
      break;
    }
  }

  FUNC_5(VAR_9);

  for(VAR_10 = 0; VAR_10<VAR_13; VAR_10++) {
    FUNC_9(VAR_9, VAR_8[VAR_10].hnd);
    FUNC_3(VAR_8[VAR_10].hnd);
  }

  return 0;
}
