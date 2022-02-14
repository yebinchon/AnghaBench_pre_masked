
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,...) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int*) ;
 int FUNC_15 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_16 () ;
 int VAR_4 ;

int FUNC_17(char *VAR_5)
{
  int VAR_6 = 0;
  CURL *VAR_7[VAR_3];
  int VAR_8;
  CURLM *VAR_9 = ((void*)0);
  int VAR_10 = 0;
  int VAR_11;

  for(VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
    VAR_7[VAR_11] = ((void*)0);

  FUNC_16();

  FUNC_10(VAR_2);


  for(VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
    FUNC_7(VAR_7[VAR_11]);

    FUNC_8(VAR_7[VAR_11], VAR_0, VAR_5);

    FUNC_8(VAR_7[VAR_11], VAR_1, 1L);
  }

  FUNC_13(VAR_9);

  FUNC_11(VAR_9, VAR_7[VAR_10]);

  FUNC_9(VAR_4, "Start at URL 0\n");

  for(;;) {
    struct timeval VAR_12;
    fd_set VAR_13, VAR_14, VAR_15;
    int VAR_16 = -99;

    VAR_12.tv_sec = 1;
    VAR_12.tv_usec = 0;

    FUNC_14(VAR_9, &VAR_8);

    FUNC_1();

    if(!VAR_8) {







      if(++VAR_10 < VAR_3) {
        FUNC_9(VAR_4, "Advancing to URL %d\n", VAR_10);
        FUNC_11(VAR_9, VAR_7[VAR_10]);

      }
      else {
        break;
      }
    }

    FUNC_0(&VAR_13);
    FUNC_0(&VAR_14);
    FUNC_0(&VAR_15);

    FUNC_12(VAR_9, &VAR_13, &VAR_14, &VAR_15, &VAR_16);



    FUNC_15(VAR_16 + 1, &VAR_13, &VAR_14, &VAR_15, &VAR_12);

    FUNC_1();
  }

test_cleanup:
  return VAR_6;
}
