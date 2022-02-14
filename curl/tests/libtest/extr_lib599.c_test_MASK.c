
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,double*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,char*,...) ;
 int VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int *,int ,...) ;

int FUNC_10(char *VAR_13)
{
  CURL *VAR_14;
  CURLcode VAR_15 = VAR_0;
  double VAR_16 = 0.0;

  if(FUNC_5(VAR_8) != VAR_0) {
    FUNC_8(&VAR_12, "curl_global_init() failed\n");
    return VAR_9;
  }

  VAR_14 = FUNC_2();
  if(!VAR_14) {
    FUNC_8(&VAR_12, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_9;
  }


  FUNC_9(VAR_14, VAR_6, VAR_13);


  FUNC_9(VAR_14, VAR_4, 0L);
  FUNC_9(VAR_14, VAR_5, VAR_11);


  FUNC_9(VAR_14, VAR_7, 1L);


  FUNC_9(VAR_14, VAR_2, 1L);


  FUNC_9(VAR_14, VAR_3, 1L);


  VAR_15 = FUNC_3(VAR_14);

  if(!VAR_15) {
    FILE *VAR_17;
    VAR_15 = FUNC_1(VAR_14, VAR_1,
                            &VAR_16);
    VAR_17 = FUNC_7(VAR_10, "wb");
    if(VAR_17) {
      FUNC_8(VAR_17, "CL: %.0f\n", VAR_16);
      FUNC_6(VAR_17);
    }
  }

test_cleanup:


  FUNC_0(VAR_14);
  FUNC_4();

  return VAR_15;
}
