
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; long tv_usec; } ;
typedef int fd_set ;
struct TYPE_4__ {int result; } ;
struct TYPE_5__ {scalar_t__ msg; scalar_t__ easy_handle; TYPE_1__ data; } ;
typedef TYPE_2__ CURLMsg ;
typedef int CURLM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *,int*) ;
 TYPE_2__* FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,long*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 () ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,long) ;
 int VAR_11 ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (char*,int,int) ;
 int FUNC_17 () ;
 int FUNC_18 (int,int *,int *,int *,struct timeval*) ;
 long VAR_12 ;
 int FUNC_19 (char*,int *,int) ;
 long VAR_13 ;
 int FUNC_20 () ;
 int VAR_14 ;
 scalar_t__ FUNC_21 (struct timeval,struct timeval) ;
 struct timeval FUNC_22 () ;
 scalar_t__* VAR_15 ;

int FUNC_23(char *VAR_16)
{
  int VAR_17 = 0;
  CURLM *VAR_18 = ((void*)0);
  CURLMsg *VAR_19;
  int VAR_20;
  int VAR_21 = 0;
  int VAR_22 = 0;
  struct timeval VAR_23;

  if(FUNC_15(VAR_10) <= 0)
    goto test_cleanup;

  FUNC_20();

  FUNC_4(VAR_8);

  FUNC_13(VAR_18);

  FUNC_2();

  FUNC_14(VAR_18, VAR_4, 1L);
  FUNC_14(VAR_18, VAR_2, 2L);
  FUNC_14(VAR_18, VAR_3, 3L);
  FUNC_14(VAR_18, VAR_1, 15000L);
  FUNC_14(VAR_18, VAR_0, 10000L);

  FUNC_14(VAR_18, VAR_6, VAR_13);
  FUNC_14(VAR_18, VAR_5, VAR_12);

  VAR_23 = FUNC_22();

  for(;;) {
    struct timeval VAR_24;
    struct timeval VAR_25;
    fd_set VAR_26, VAR_27, VAR_28;
    int VAR_29 = -99;
    long VAR_30;

    VAR_24.tv_sec = 1;
    VAR_24.tv_usec = 0;

    if(VAR_22 < VAR_11) {
      VAR_25 = FUNC_22();
      if(FUNC_21(VAR_25, VAR_23) >= VAR_15[VAR_22]) {
        FUNC_11(VAR_14, "Adding handle %d\n", VAR_22);
        FUNC_19(VAR_16, VAR_18, VAR_22);
        VAR_23 = VAR_25;
        VAR_22++;
      }
    }

    FUNC_8(VAR_18, &VAR_21);

    FUNC_1();


    do {
      VAR_19 = FUNC_7(VAR_18, &VAR_20);
      if(VAR_19 && VAR_19->msg == VAR_7) {
        int VAR_31;


        for(VAR_31 = 0; VAR_31 < VAR_11; VAR_31++) {
          int VAR_32 = (VAR_19->easy_handle == VAR_9[VAR_31]);
          if(VAR_32)
            break;
        }

        FUNC_16("Handle %d Completed with status %d\n", VAR_31, VAR_19->data.result);
        FUNC_9(VAR_18, VAR_9[VAR_31]);
      }
    } while(VAR_19);

    if(VAR_22 == VAR_11 && !VAR_21) {
      break;
    }

    FUNC_0(&VAR_26);
    FUNC_0(&VAR_27);
    FUNC_0(&VAR_28);

    FUNC_6(VAR_18, &VAR_26, &VAR_27, &VAR_28, &VAR_29);



    FUNC_10(VAR_18, &VAR_30);

    if(VAR_30 < 0)
      VAR_30 = 1;

    VAR_24.tv_sec = VAR_30 / 1000;
    VAR_24.tv_usec = (VAR_30 % 1000) * 1000;

    VAR_24.tv_sec = 0;
    VAR_24.tv_usec = 1000;

    FUNC_18(VAR_29 + 1, &VAR_26, &VAR_27, &VAR_28, &VAR_24);

    FUNC_1();
  }

test_cleanup:

  FUNC_17();



  FUNC_5(VAR_18);
  FUNC_3();

  FUNC_12();
  return VAR_17;
}
