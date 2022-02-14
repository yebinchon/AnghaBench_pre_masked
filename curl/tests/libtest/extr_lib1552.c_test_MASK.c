
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int result; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
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
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int *,int ,int ,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 () ;

int FUNC_14(char *VAR_8)
{
  CURL *VAR_9 = ((void*)0);
  CURLM *VAR_10 = ((void*)0);
  int VAR_11;
  int VAR_12 = 0;
  int VAR_13 = 0;
  CURLMsg *VAR_14;
  int VAR_15 = 3;

  FUNC_13();

  FUNC_8(VAR_5);

  FUNC_10(VAR_10);

  FUNC_6(VAR_9);

  FUNC_7(VAR_9, VAR_2, VAR_8);
  FUNC_7(VAR_9, VAR_1, 1L);
  FUNC_7(VAR_9, VAR_4, 1L);
  FUNC_7(VAR_9, VAR_3, "u:s");

  FUNC_9(VAR_10, VAR_9);

  FUNC_11(VAR_10, &VAR_11);

  FUNC_0();

  while(VAR_11 && VAR_15--) {
    int VAR_16;
    VAR_13 = FUNC_5(VAR_10, ((void*)0), 0, VAR_7, &VAR_16);
    if(VAR_13 != VAR_0) {
      FUNC_12("curl_multi_wait() returned %d\n", VAR_13);
      VAR_13 = VAR_6;
      goto test_cleanup;
    }

    FUNC_0();

    FUNC_11(VAR_10, &VAR_11);

    FUNC_0();
  }

  VAR_14 = FUNC_4(VAR_10, &VAR_11);
  if(VAR_14)


    VAR_12 = VAR_14->data.result;

test_cleanup:



  FUNC_3(VAR_10);
  FUNC_1(VAR_9);
  FUNC_2();

  if(VAR_13)
    VAR_12 = VAR_13;

  return VAR_12;
}
