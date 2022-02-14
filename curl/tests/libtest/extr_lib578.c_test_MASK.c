
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 long VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int ,char*) ;
 long VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int *,int ,...) ;

int FUNC_7(char *VAR_16)
{
  CURL *VAR_17;
  CURLcode VAR_18 = VAR_0;

  if(FUNC_4(VAR_10) != VAR_0) {
    FUNC_5(VAR_15, "curl_global_init() failed\n");
    return VAR_11;
  }

  VAR_17 = FUNC_1();
  if(!VAR_17) {
    FUNC_5(VAR_15, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_11;
  }


  FUNC_6(VAR_17, VAR_8, VAR_16);


  FUNC_6(VAR_17, VAR_3, 1L);







  FUNC_6(VAR_17, VAR_5, (long)VAR_13);
  FUNC_6(VAR_17, VAR_4, VAR_12);


  FUNC_6(VAR_17, VAR_2, 0L);
  FUNC_6(VAR_17, VAR_6, VAR_14);




  FUNC_6(VAR_17, VAR_9, 1L);


  FUNC_6(VAR_17, VAR_1, 1L);


  VAR_18 = FUNC_2(VAR_17);

test_cleanup:


  FUNC_0(VAR_17);
  FUNC_3();

  return VAR_18;
}
