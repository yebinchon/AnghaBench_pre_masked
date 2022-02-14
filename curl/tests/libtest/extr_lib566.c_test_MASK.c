
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,double*) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,int ,...) ;

int FUNC_10(char *VAR_8)
{
  CURLcode VAR_9;
  CURL *VAR_10;

  double VAR_11 = 3;

  if(FUNC_5(VAR_4) != VAR_0) {
    FUNC_8(&VAR_7, "curl_global_init() failed\n");
    return VAR_5;
  }

  VAR_10 = FUNC_2();
  if(!VAR_10) {
    FUNC_8(&VAR_7, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_5;
  }

  FUNC_9(VAR_10, VAR_3, VAR_8);
  FUNC_9(VAR_10, VAR_2, 1L);

  VAR_9 = FUNC_3(VAR_10);

  if(!VAR_9) {
    FILE *VAR_12;
    VAR_9 = FUNC_1(VAR_10, VAR_1,
                            &VAR_11);
    VAR_12 = FUNC_7(VAR_6, "wb");
    if(VAR_12) {
      FUNC_8(VAR_12, "CL: %.0f\n", VAR_11);
      FUNC_6(VAR_12);
    }
  }

test_cleanup:

  FUNC_0(VAR_10);
  FUNC_4();

  return (int)VAR_9;
}
