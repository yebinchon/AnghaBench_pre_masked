
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
struct WriteThis {scalar_t__ counter; } ;
typedef int CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,char*) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (int ,char*) ;
 long VAR_16 ;
 long VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int *,int ,...) ;

int FUNC_9(char *VAR_19)
{
  CURL *VAR_20;
  CURLcode VAR_21 = VAR_1;
  struct curl_slist *VAR_22 = ((void*)0);
  struct WriteThis VAR_23;
  VAR_23.counter = 0;

  if(FUNC_4(VAR_14) != VAR_1) {
    FUNC_7(VAR_18, "curl_global_init() failed\n");
    return VAR_15;
  }

  VAR_20 = FUNC_1();
  if(!VAR_20) {
    FUNC_7(VAR_18, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_15;
  }

  VAR_22 = FUNC_5(VAR_22, "Transfer-Encoding: chunked");
  if(VAR_22 == ((void*)0)) {
    FUNC_7(VAR_18, "curl_slist_append() failed\n");
    FUNC_0(VAR_20);
    FUNC_3();
    return VAR_15;
  }


  FUNC_8(VAR_20, VAR_11, VAR_19);


  FUNC_8(VAR_20, VAR_6, 1L);







  FUNC_8(VAR_20, VAR_9, VAR_17);


  FUNC_8(VAR_20, VAR_8, &VAR_23);


  FUNC_8(VAR_20, VAR_13, 1L);


  FUNC_8(VAR_20, VAR_2, 1L);


  FUNC_8(VAR_20, VAR_4, VAR_22);

  FUNC_8(VAR_20, VAR_3, (long)VAR_0);
  FUNC_8(VAR_20, VAR_12, "foo:bar");


  FUNC_8(VAR_20, VAR_5, 0L);
  FUNC_8(VAR_20, VAR_7, VAR_16);


  VAR_21 = FUNC_2(VAR_20);

test_cleanup:


  if(VAR_22)
    FUNC_6(VAR_22);


  FUNC_0(VAR_20);
  FUNC_3();

  return VAR_21;
}
