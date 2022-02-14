
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {scalar_t__ sizeleft; int readptr; } ;
typedef int CURLcode ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (int ,char*) ;
 long VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,...) ;

int FUNC_8(char *VAR_14)
{
  CURL *VAR_15;
  CURLcode VAR_16 = VAR_0;

  struct WriteThis VAR_17;

  VAR_17.readptr = VAR_11;
  VAR_17.sizeleft = FUNC_6(VAR_11);

  if(FUNC_4(VAR_9)) {
    FUNC_5(VAR_13, "curl_global_init() failed\n");
    return VAR_10;
  }

  VAR_15 = FUNC_1();
  if(!VAR_15) {
    FUNC_5(VAR_13, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_10;
  }


  FUNC_7(VAR_15, VAR_7, VAR_14);


  FUNC_7(VAR_15, VAR_2, 1L);







  FUNC_7(VAR_15, VAR_3, (long)VAR_17.sizeleft);


  FUNC_7(VAR_15, VAR_5, VAR_12);


  FUNC_7(VAR_15, VAR_4, &VAR_17);


  FUNC_7(VAR_15, VAR_8, 1L);


  FUNC_7(VAR_15, VAR_1, 1L);






  VAR_16 = FUNC_2(VAR_15);

test_cleanup:


  FUNC_0(VAR_15);
  FUNC_3();

  return VAR_16;
}
