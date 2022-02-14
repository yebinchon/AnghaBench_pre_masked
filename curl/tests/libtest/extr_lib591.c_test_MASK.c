
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
typedef int FILE ;
typedef TYPE_2__ CURLMsg ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,...) ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int*) ;
 int FUNC_15 (int *,long*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_18 () ;
 int VAR_12 ;
 char* FUNC_19 (int) ;
 int FUNC_20 (int ,int *,int) ;

int FUNC_21(char *VAR_13)
{
  CURL *VAR_14 = ((void*)0);
  CURLM *VAR_15 = ((void*)0);
  int VAR_16 = 0;
  int VAR_17;
  int VAR_18;
  CURLMsg *VAR_19;
  FILE *VAR_20 = ((void*)0);

  FUNC_18();

  VAR_20 = FUNC_9(VAR_11, "rb");
  if(!VAR_20) {
    FUNC_10(VAR_12, "fopen() failed with error: %d (%s)\n",
            VAR_9, FUNC_19(VAR_9));
    FUNC_10(VAR_12, "Error opening file: (%s)\n", VAR_11);
    return VAR_8;
  }

  FUNC_16(VAR_6);
  if(VAR_16) {
    FUNC_8(VAR_20);
    return VAR_16;
  }

  FUNC_6(VAR_14);


  FUNC_7(VAR_14, VAR_5, 1L);


  FUNC_7(VAR_14, VAR_4, VAR_13);


  FUNC_7(VAR_14, VAR_3, 1L);


  FUNC_7(VAR_14, VAR_2, VAR_20);


  FUNC_7(VAR_14, VAR_1, "-");


  FUNC_7(VAR_14, VAR_0,
              FUNC_20(VAR_10, ((void*)0), 10)*1000);

  FUNC_13(VAR_15);

  FUNC_11(VAR_15, VAR_14);

  for(;;) {
    struct timeval VAR_21;
    fd_set VAR_22;
    fd_set VAR_23;
    fd_set VAR_24;
    long VAR_25 = -99;
    int VAR_26 = -99;

    FUNC_14(VAR_15, &VAR_17);

    FUNC_1();

    if(!VAR_17)
      break;

    FUNC_0(&VAR_22);
    FUNC_0(&VAR_23);
    FUNC_0(&VAR_24);

    FUNC_12(VAR_15, &VAR_22, &VAR_23, &VAR_24, &VAR_26);



    FUNC_15(VAR_15, &VAR_25);



    if(VAR_25 != -1L) {
      int VAR_27 = (VAR_25 > (long)VAR_7) ? VAR_7 : (int)VAR_25;
      VAR_21.tv_sec = VAR_27/1000;
      VAR_21.tv_usec = (VAR_27%1000)*1000;
    }
    else {
      VAR_21.tv_sec = 0;
      VAR_21.tv_usec = 100000L;
    }

    FUNC_17(VAR_26 + 1, &VAR_22, &VAR_23, &VAR_24, &VAR_21);

    FUNC_1();
  }

  VAR_19 = FUNC_5(VAR_15, &VAR_18);
  if(VAR_19)
    VAR_16 = VAR_19->data.result;

test_cleanup:



  FUNC_4(VAR_15);
  FUNC_2(VAR_14);
  FUNC_3();


  FUNC_8(VAR_20);

  return VAR_16;
}
