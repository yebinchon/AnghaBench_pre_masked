
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
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
 int VAR_16 ;
 long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,char*) ;
 int FUNC_6 (struct curl_slist*) ;
 int VAR_20 ;
 int FUNC_7 (int ,char*) ;
 long VAR_21 ;
 long VAR_22 ;
 long VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,...) ;

int FUNC_10(char *VAR_25)
{
  CURL *VAR_26 = ((void*)0);
  CURLcode VAR_27 = VAR_0;

  struct curl_slist *VAR_28 = ((void*)0);

  if(FUNC_4(VAR_18) != VAR_1) {
    FUNC_7(VAR_24, "curl_global_init() failed\n");
    return VAR_19;
  }

  VAR_26 = FUNC_1();
  if(!VAR_26) {
    FUNC_7(VAR_24, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_19;
  }

  VAR_28 = FUNC_5(VAR_28, "User-Agent: Http Agent");

  if(!VAR_28) {
    goto test_cleanup;
  }

  FUNC_9(VAR_26, VAR_14, VAR_25);
  FUNC_9(VAR_26, VAR_9, VAR_22);
  FUNC_9(VAR_26, VAR_5, VAR_28);
  FUNC_9(VAR_26, VAR_10, VAR_28);
  FUNC_9(VAR_26, VAR_4, VAR_2);
  FUNC_9(VAR_26, VAR_8, 0L);
  FUNC_9(VAR_26, VAR_13, 1L);
  FUNC_9(VAR_26, VAR_15, 1L);
  FUNC_9(VAR_26, VAR_11, VAR_17);
  FUNC_9(VAR_26, VAR_3, 1L);
  FUNC_9(VAR_26, VAR_16, VAR_21);
  FUNC_9(VAR_26, VAR_12, VAR_23);
  FUNC_9(VAR_26, VAR_6, 1L);
  FUNC_9(VAR_26, VAR_7, (long)FUNC_8(VAR_20));

  VAR_27 = FUNC_2(VAR_26);

test_cleanup:

  FUNC_0(VAR_26);

  FUNC_6(VAR_28);

  FUNC_3();

  return (int)VAR_27;
}
