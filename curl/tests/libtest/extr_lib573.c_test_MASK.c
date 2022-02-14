
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {long tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
struct TYPE_2__ {int nohex; int tracetime; } ;
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
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,double*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,...) ;
 int FUNC_9 (int ,char*,double,double) ;
 int FUNC_10 (int ) ;
 long VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int*) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_16 () ;
 int VAR_10 ;

int FUNC_17(char *VAR_11)
{
  CURL *VAR_12 = ((void*)0);
  CURLM *VAR_13 = ((void*)0);
  int VAR_14 = 0;
  int VAR_15 = 1;
  double VAR_16 = 0.0;
  double VAR_17;

  VAR_17 = 1.0;
  do {
    VAR_17 /= 2.0;
  } while((double)(1.0 + (VAR_17/2.0)) > (double)1.0);

  FUNC_16();

  FUNC_10(VAR_6);

  FUNC_7(VAR_12);

  FUNC_8(VAR_12, VAR_3, 1L);
  FUNC_8(VAR_12, VAR_4, VAR_11);

  VAR_9.nohex = 1;
  VAR_9.tracetime = 1;
  FUNC_8(VAR_12, VAR_1, &VAR_9);
  FUNC_8(VAR_12, VAR_2, VAR_8);
  FUNC_8(VAR_12, VAR_5, 1L);

  FUNC_13(VAR_13);

  FUNC_11(VAR_13, VAR_12);

  while(VAR_15) {
    struct timeval VAR_18;
    fd_set VAR_19, VAR_20, VAR_21;
    int VAR_22 = -99;

    VAR_18.tv_sec = 0;
    VAR_18.tv_usec = 100000L;

    FUNC_14(VAR_13, &VAR_15);

    FUNC_1();

    if(!VAR_15)
      break;

    FUNC_0(&VAR_19);
    FUNC_0(&VAR_20);
    FUNC_0(&VAR_21);

    FUNC_12(VAR_13, &VAR_19, &VAR_20, &VAR_21, &VAR_22);



    FUNC_15(VAR_22 + 1, &VAR_19, &VAR_20, &VAR_21, &VAR_18);

    FUNC_1();
  }

  FUNC_3(VAR_12, VAR_0, &VAR_16);
  if(VAR_16 < VAR_17) {
    FUNC_9(VAR_10, "connect time %e is < epsilon %e\n",
            VAR_16, VAR_17);
    VAR_14 = VAR_7;
  }

test_cleanup:



  FUNC_6(VAR_13, VAR_12);
  FUNC_5(VAR_13);
  FUNC_2(VAR_12);
  FUNC_4();

  return VAR_14;
}
