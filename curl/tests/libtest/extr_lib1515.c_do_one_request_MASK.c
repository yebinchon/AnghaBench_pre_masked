
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct curl_slist {int dummy; } ;
typedef int fd_set ;
struct TYPE_4__ {int result; } ;
struct TYPE_5__ {scalar_t__ msg; TYPE_1__ data; int * easy_handle; } ;
typedef TYPE_2__ CURLMsg ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int *) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,char*) ;
 int FUNC_6 (struct curl_slist*) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,...) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int*) ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int FUNC_13(CURLM *VAR_8, char *VAR_9, char *VAR_10)
{
  CURL *VAR_11;
  struct curl_slist *VAR_12 = ((void*)0);
  int VAR_13;
  int VAR_14 = 0;
  CURLMsg *VAR_15;
  int VAR_16;

  VAR_12 = FUNC_5(VAR_12, VAR_10);

  FUNC_7(VAR_11);

  FUNC_8(VAR_11, VAR_4, VAR_9);
  FUNC_8(VAR_11, VAR_3, VAR_12);
  FUNC_8(VAR_11, VAR_1, VAR_7);
  FUNC_8(VAR_11, VAR_5, 1);
  FUNC_8(VAR_11, VAR_2, VAR_6);

  FUNC_9(VAR_8, VAR_11);
  FUNC_11(VAR_8, &VAR_13);

  FUNC_1();

  while(VAR_13) {
    struct timeval VAR_17;
    fd_set VAR_18, VAR_19, VAR_20;
    int VAR_21 = -99;

    FUNC_0(&VAR_18);
    FUNC_0(&VAR_19);
    FUNC_0(&VAR_20);
    VAR_17.tv_sec = 1;
    VAR_17.tv_usec = 0;

    FUNC_10(VAR_8, &VAR_18, &VAR_19, &VAR_20, &VAR_21);
    FUNC_12(VAR_21 + 1, &VAR_18, &VAR_19, &VAR_20, &VAR_17);

    FUNC_1();
    FUNC_11(VAR_8, &VAR_13);

    FUNC_1();
  }

  do {
    VAR_15 = FUNC_3(VAR_8, &VAR_16);
    if(VAR_15 && VAR_15->msg == VAR_0 && VAR_15->easy_handle == VAR_11) {
      VAR_14 = VAR_15->data.result;
      break;
    }
  } while(VAR_15);

test_cleanup:

  FUNC_4(VAR_8, VAR_11);
  FUNC_2(VAR_11);
  FUNC_6(VAR_12);

  return VAR_14;
}
