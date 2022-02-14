
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_size; } ;
typedef TYPE_1__ struct_stat ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
typedef char* curl_off_t ;
typedef char FILE ;
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
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int VAR_10 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 char* VAR_11 ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int *,int *,int*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_19 () ;
 int VAR_12 ;
 char* FUNC_20 (int) ;

int FUNC_21(char *VAR_13)
{
  int VAR_14 = 0;
  CURL *VAR_15 = ((void*)0);
  FILE *VAR_16 = ((void*)0);
  int VAR_17;
  struct_stat VAR_18;
  CURLM *VAR_19 = ((void*)0);
  int VAR_20;

  FUNC_19();

  if(!VAR_11) {





    FUNC_11(VAR_12, "Usage: lib525 [url] [uploadfile]\n");

    return VAR_9;
  }

  VAR_16 = FUNC_10(VAR_11, "rb");
  if(((void*)0) == VAR_16) {
    FUNC_11(VAR_12, "fopen failed with error: %d (%s)\n",
            VAR_10, FUNC_20(VAR_10));
    FUNC_11(VAR_12, "Error opening file: (%s)\n", VAR_11);
    return VAR_7;
  }


  VAR_17 = FUNC_12(FUNC_9(VAR_16), &VAR_18);
  if(VAR_17 == -1) {

    FUNC_11(VAR_12, "fstat() failed with error: %d (%s)\n",
            VAR_10, FUNC_20(VAR_10));
    FUNC_11(VAR_12, "ERROR: cannot open file (%s)\n", VAR_11);
    FUNC_8(VAR_16);
    return VAR_8;
  }

  FUNC_17(VAR_6);
  if(VAR_14) {
    FUNC_8(VAR_16);
    return VAR_14;
  }

  FUNC_6(VAR_15);


  FUNC_7(VAR_15, VAR_3, 1L);


  FUNC_7(VAR_15, VAR_4, VAR_13);


  FUNC_7(VAR_15, VAR_5, 1L);


  FUNC_7(VAR_15, VAR_0, "-");


  FUNC_7(VAR_15, VAR_2, VAR_16);
  FUNC_7(VAR_15, VAR_1, (curl_off_t)VAR_18.st_size);

  FUNC_15(VAR_19);

  FUNC_13(VAR_19, VAR_15);

  for(;;) {
    struct timeval VAR_21;
    fd_set VAR_22, VAR_23, VAR_24;
    int VAR_25 = -99;

    VAR_21.tv_sec = 1;
    VAR_21.tv_usec = 0;

    FUNC_16(VAR_19, &VAR_20);

    FUNC_1();

    if(!VAR_20)
      break;

    FUNC_0(&VAR_22);
    FUNC_0(&VAR_23);
    FUNC_0(&VAR_24);

    FUNC_14(VAR_19, &VAR_22, &VAR_23, &VAR_24, &VAR_25);



    FUNC_18(VAR_25 + 1, &VAR_22, &VAR_23, &VAR_24, &VAR_21);

    FUNC_1();
  }

test_cleanup:
  FUNC_5(VAR_19, VAR_15);
  FUNC_2(VAR_15);
  FUNC_4(VAR_19);
  FUNC_3();



  FUNC_8(VAR_16);

  return VAR_14;
}
