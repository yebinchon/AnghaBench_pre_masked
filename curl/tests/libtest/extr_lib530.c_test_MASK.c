
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_url ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int,char*,char*,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int*) ;
 int FUNC_15 (int *,int ,long) ;
 int FUNC_16 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_17 () ;
 int VAR_6 ;

int FUNC_18(char *VAR_7)
{
  int VAR_8 = 0;
  CURL *VAR_9[VAR_5];
  int VAR_10;
  CURLM *VAR_11 = ((void*)0);
  int VAR_12;
  char VAR_13[256];
  int VAR_14 = 0;

  for(VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
    VAR_9[VAR_12] = ((void*)0);

  FUNC_17();

  FUNC_9(VAR_4);

  FUNC_13(VAR_11);


  for(VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {

    FUNC_6(VAR_9[VAR_12]);

    FUNC_10(VAR_13, sizeof(VAR_13), "%s%04i", VAR_7, VAR_12 + 1);
    VAR_13[sizeof(VAR_13) - 1] = '\0';
    FUNC_7(VAR_9[VAR_12], VAR_2, VAR_13);

    FUNC_7(VAR_9[VAR_12], VAR_3, 1L);

    FUNC_7(VAR_9[VAR_12], VAR_1, 1L);
  }




  FUNC_11(VAR_11, VAR_9[VAR_14++]);

  FUNC_15(VAR_11, VAR_0, 1L);

  FUNC_8(VAR_6, "Start at URL 0\n");

  for(;;) {
    struct timeval VAR_15;
    fd_set VAR_16, VAR_17, VAR_18;
    int VAR_19 = -99;

    VAR_15.tv_sec = 1;
    VAR_15.tv_usec = 0;

    FUNC_14(VAR_11, &VAR_10);

    FUNC_1();

    if(!VAR_10) {
      if(VAR_14 >= VAR_5)
        break;



      while(VAR_14 < VAR_5)
        FUNC_11(VAR_11, VAR_9[VAR_14++]);
    }

    FUNC_0(&VAR_16);
    FUNC_0(&VAR_17);
    FUNC_0(&VAR_18);

    FUNC_12(VAR_11, &VAR_16, &VAR_17, &VAR_18, &VAR_19);



    FUNC_16(VAR_19 + 1, &VAR_16, &VAR_17, &VAR_18, &VAR_15);

    FUNC_1();
  }

test_cleanup:



  for(VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
    FUNC_5(VAR_11, VAR_9[VAR_12]);
    FUNC_2(VAR_9[VAR_12]);
  }

  FUNC_4(VAR_11);
  FUNC_3();

  return VAR_8;
}
