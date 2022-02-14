
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
 long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,char*) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (int ,char*) ;
 long VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int *,int ,...) ;

int FUNC_9(char *VAR_16)
{
  CURL *VAR_17 = ((void*)0);
  CURLcode VAR_18 = VAR_0;

  struct curl_slist *VAR_19 = ((void*)0);
  struct curl_slist *VAR_20 = ((void*)0);

  if(FUNC_4(VAR_12) != VAR_1) {
    FUNC_7(VAR_15, "curl_global_init() failed\n");
    return VAR_13;
  }

  VAR_17 = FUNC_1();
  if(!VAR_17) {
    FUNC_7(VAR_15, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_13;
  }

  VAR_19 = FUNC_5(VAR_19, "User-Agent: Http Agent");
  VAR_20 = FUNC_5(VAR_20, "Proxy-User-Agent: Http Agent2");

  if(!VAR_19) {
    goto test_cleanup;
  }

  FUNC_8(VAR_17, VAR_9, VAR_16);
  FUNC_8(VAR_17, VAR_6, VAR_14);
  FUNC_8(VAR_17, VAR_5, VAR_19);
  FUNC_8(VAR_17, VAR_7, VAR_20);
  FUNC_8(VAR_17, VAR_4, VAR_2);
  FUNC_8(VAR_17, VAR_10, 1L);
  FUNC_8(VAR_17, VAR_8, VAR_11);
  FUNC_8(VAR_17, VAR_3, 1L);

  VAR_18 = FUNC_2(VAR_17);

test_cleanup:

  FUNC_0(VAR_17);
  FUNC_6(VAR_19);
  FUNC_6(VAR_20);
  FUNC_3();

  return (int)VAR_18;
}
