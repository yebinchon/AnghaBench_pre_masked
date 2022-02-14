
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
struct TYPE_4__ {int result; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ CURLMsg ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
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
 int FUNC_13 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_14 () ;

int FUNC_15(char *VAR_3)
{
  CURL *VAR_4 = ((void*)0);
  CURLM *VAR_5 = ((void*)0);
  int VAR_6;
  int VAR_7 = -1;
  int VAR_8 = 0;
  CURLMsg *VAR_9;

  FUNC_14();

  FUNC_8(VAR_2);

  FUNC_11(VAR_5);

  FUNC_6(VAR_4);

  FUNC_7(VAR_4, VAR_1, VAR_3);
  FUNC_7(VAR_4, VAR_0, 1L);

  FUNC_9(VAR_5, VAR_4);

  FUNC_12(VAR_5, &VAR_6);

  FUNC_1();

  while(VAR_6) {
    struct timeval VAR_10;
    fd_set VAR_11;
    fd_set VAR_12;
    fd_set VAR_13;
    int VAR_14 = -99;

    FUNC_0(&VAR_11);
    FUNC_0(&VAR_12);
    FUNC_0(&VAR_13);
    VAR_10.tv_sec = 1;
    VAR_10.tv_usec = 0;

    FUNC_10(VAR_5, &VAR_11, &VAR_12, &VAR_13, &VAR_14);



    FUNC_13(VAR_14 + 1, &VAR_11, &VAR_12, &VAR_13, &VAR_10);

    FUNC_1();

    FUNC_12(VAR_5, &VAR_6);

    FUNC_1();
  }

  VAR_9 = FUNC_5(VAR_5, &VAR_6);
  if(VAR_9)


    VAR_7 = VAR_9->data.result;

test_cleanup:



  FUNC_4(VAR_5);
  FUNC_2(VAR_4);
  FUNC_3();

  if(VAR_8)
    VAR_7 = VAR_8;

  return VAR_7;
}
