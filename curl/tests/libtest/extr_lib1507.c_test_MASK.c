
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; long tv_usec; } ;
struct curl_slist {int dummy; } ;
typedef int fd_set ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
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
 long VAR_11 ;
 int VAR_12 ;
 long VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *,int*) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,long*) ;
 struct curl_slist* FUNC_10 (struct curl_slist*,int ) ;
 int FUNC_11 (struct curl_slist*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 long VAR_14 ;
 int FUNC_16 (int,int *,int *,int *,struct timeval*) ;
 int VAR_15 ;
 scalar_t__ FUNC_17 (struct timeval,struct timeval) ;
 struct timeval FUNC_18 () ;

int FUNC_19(char *VAR_16)
{
   int VAR_17 = 0;
   CURL *VAR_18 = ((void*)0);
   CURLM *VAR_19 = ((void*)0);
   int VAR_20 = 1;
   struct timeval VAR_21;
   struct curl_slist *VAR_22 = ((void*)0);

   FUNC_4(VAR_8);

   FUNC_12(VAR_18);

   FUNC_15(VAR_19);

   VAR_22 = FUNC_10(VAR_22, VAR_12);




   FUNC_2(VAR_18, VAR_5, VAR_16);




   FUNC_2(VAR_18, VAR_4, 1L);
   FUNC_2(VAR_18, VAR_3, VAR_14);
   FUNC_2(VAR_18, VAR_0, VAR_9);
   FUNC_2(VAR_18, VAR_1, VAR_22);
   FUNC_2(VAR_18, VAR_7, 1L);
   FUNC_14(VAR_19, VAR_18);

   VAR_21 = FUNC_18();


  FUNC_7(VAR_19, &VAR_20);

  while(VAR_20) {
    struct timeval VAR_23;
    int VAR_24;

    fd_set VAR_25;
    fd_set VAR_26;
    fd_set VAR_27;
    int VAR_28 = -1;

    long VAR_29 = -1;

    FUNC_0(&VAR_25);
    FUNC_0(&VAR_26);
    FUNC_0(&VAR_27);


    VAR_23.tv_sec = 1;
    VAR_23.tv_usec = 0;

    FUNC_9(VAR_19, &VAR_29);
    if(VAR_29 >= 0) {
      VAR_23.tv_sec = VAR_29 / 1000;
      if(VAR_23.tv_sec > 1)
        VAR_23.tv_sec = 1;
      else
        VAR_23.tv_usec = (VAR_29 % 1000) * 1000;
    }


    FUNC_6(VAR_19, &VAR_25, &VAR_26, &VAR_27, &VAR_28);







    VAR_24 = FUNC_16(VAR_28 + 1, &VAR_25, &VAR_26, &VAR_27, &VAR_23);

    if(FUNC_17(FUNC_18(), VAR_21) > VAR_10) {
      FUNC_13(VAR_15, "ABORTING TEST, since it seems "
              "that it would have run forever.\n");
      break;
    }

    switch(VAR_24) {
    case -1:

      break;
    case 0:
    default:
      FUNC_7(VAR_19, &VAR_20);
      break;
    }
  }

test_cleanup:

  FUNC_11(VAR_22);
  FUNC_8(VAR_19, VAR_18);
  FUNC_5(VAR_19);
  FUNC_1(VAR_18);
  FUNC_3();

  return VAR_17;
}
