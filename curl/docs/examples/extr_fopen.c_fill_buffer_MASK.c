
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; long tv_usec; int member_1; int member_0; } ;
typedef int fd_set ;
struct TYPE_3__ {size_t buffer_pos; scalar_t__ still_running; } ;
typedef TYPE_1__ URL_FILE ;
typedef int CURLMcode ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int *,int *,int*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,long*) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_6 (int,int *,int *,int *,struct timeval*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(URL_FILE *VAR_3, size_t VAR_4)
{
  fd_set VAR_5;
  fd_set VAR_6;
  fd_set VAR_7;
  struct timeval VAR_8;
  int VAR_9;
  CURLMcode VAR_10;




  if((!VAR_3->still_running) || (VAR_3->buffer_pos > VAR_4))
    return 0;


  do {
    int VAR_11 = -1;
    long VAR_12 = -1;

    FUNC_0(&VAR_5);
    FUNC_0(&VAR_6);
    FUNC_0(&VAR_7);


    VAR_8.tv_sec = 60;
    VAR_8.tv_usec = 0;

    FUNC_4(VAR_1, &VAR_12);
    if(VAR_12 >= 0) {
      VAR_8.tv_sec = VAR_12 / 1000;
      if(VAR_8.tv_sec > 1)
        VAR_8.tv_sec = 1;
      else
        VAR_8.tv_usec = (VAR_12 % 1000) * 1000;
    }


    VAR_10 = FUNC_2(VAR_1, &VAR_5, &VAR_6, &VAR_7, &VAR_11);

    if(VAR_10 != VAR_0) {
      FUNC_5(VAR_2, "curl_multi_fdset() failed, code %d.\n", VAR_10);
      break;
    }







    if(VAR_11 == -1) {





      struct timeval VAR_13 = { 0, 100 * 1000 };
      VAR_9 = FUNC_6(0, ((void*)0), ((void*)0), ((void*)0), &VAR_13);

    }
    else {


      VAR_9 = FUNC_6(VAR_11 + 1, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
    }

    switch(VAR_9) {
    case -1:

      break;

    case 0:
    default:

      FUNC_3(VAR_1, &VAR_3->still_running);
      break;
    }
  } while(VAR_3->still_running && (VAR_3->buffer_pos < VAR_4));
  return 1;
}
