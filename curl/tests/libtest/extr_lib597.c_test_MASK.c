
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;
struct TYPE_4__ {int result; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ CURLMsg ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,long*) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_16 () ;

int FUNC_17(char *VAR_6)
{
  CURL *VAR_7 = ((void*)0);
  CURLM *VAR_8 = ((void*)0);
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11;
  CURLMsg *VAR_12;

  FUNC_16();

  FUNC_8(VAR_3);

  FUNC_6(VAR_7);

  FUNC_11(VAR_8);


  FUNC_7(VAR_7, VAR_2, 1L);


  FUNC_7(VAR_7, VAR_1, VAR_6);

  FUNC_7(VAR_7, VAR_0, 1L);

  FUNC_9(VAR_8, VAR_7);

  for(;;) {
    struct timeval VAR_13;
    fd_set VAR_14;
    fd_set VAR_15;
    fd_set VAR_16;
    long VAR_17 = -99;
    int VAR_18 = -99;

    FUNC_12(VAR_8, &VAR_10);

    FUNC_1();

    if(!VAR_10)
      break;

    FUNC_0(&VAR_14);
    FUNC_0(&VAR_15);
    FUNC_0(&VAR_16);

    FUNC_10(VAR_8, &VAR_14, &VAR_15, &VAR_16, &VAR_18);



    FUNC_14(VAR_8, &VAR_17);




    if(VAR_17 != -1L) {
      int VAR_19 = (VAR_17 > (long)VAR_4) ? VAR_4 : (int)VAR_17;
      VAR_13.tv_sec = VAR_19/1000;
      VAR_13.tv_usec = (VAR_19%1000)*1000;
    }
    else {
      VAR_13.tv_sec = VAR_5/1000 + 1;
      VAR_13.tv_usec = 0;
    }

    FUNC_15(VAR_18 + 1, &VAR_14, &VAR_15, &VAR_16, &VAR_13);

    FUNC_1();
  }

  VAR_12 = FUNC_5(VAR_8, &VAR_11);
  if(VAR_12)
    VAR_9 = VAR_12->data.result;

  FUNC_13(VAR_8, VAR_7);

test_cleanup:



  FUNC_4(VAR_8);
  FUNC_2(VAR_7);
  FUNC_3();

  return VAR_9;
}
