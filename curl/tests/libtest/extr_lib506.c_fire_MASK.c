
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
struct Tdata {char* url; char* share; } ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_8(void *VAR_6)
{
  CURLcode VAR_7;
  struct curl_slist *VAR_8;
  struct Tdata *VAR_9 = (struct Tdata*)VAR_6;
  CURL *VAR_10;

  VAR_10 = FUNC_1();
  if(!VAR_10) {
    FUNC_5(VAR_5, "curl_easy_init() failed\n");
    return ((void*)0);
  }

  VAR_8 = FUNC_7(((void*)0));
  FUNC_3(VAR_10, VAR_4, 1L);
  FUNC_3(VAR_10, VAR_1, VAR_8);
  FUNC_3(VAR_10, VAR_3, VAR_9->url);
  FUNC_3(VAR_10, VAR_0, "");
  FUNC_6("CURLOPT_SHARE\n");
  FUNC_3(VAR_10, VAR_2, VAR_9->share);

  FUNC_6("PERFORM\n");
  VAR_7 = FUNC_2(VAR_10);
  if(VAR_7) {
    int VAR_11 = 0;
    FUNC_5(VAR_5, "perform url '%s' repeat %d failed, curlcode %d\n",
            VAR_9->url, VAR_11, (int)VAR_7);
  }

  FUNC_6("CLEANUP\n");
  FUNC_0(VAR_10);
  FUNC_4(VAR_8);

  return ((void*)0);
}
