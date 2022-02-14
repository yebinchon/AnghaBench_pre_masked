
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
struct GlobalConfig {scalar_t__ libcurl; } ;
typedef int CURLoption ;
typedef int CURLcode ;
typedef int CURL ;


 int FUNC_0 (char*,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,struct curl_slist*) ;
 int FUNC_2 (struct curl_slist*,int*) ;

CURLcode FUNC_3(CURL *VAR_1, struct GlobalConfig *VAR_2,
                           const char *VAR_3, CURLoption VAR_4,
                           struct curl_slist *VAR_5)
{
  CURLcode VAR_6 = VAR_0;

  VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_5);

  if(VAR_2->libcurl && VAR_5 && !VAR_6) {
    int VAR_7;

    VAR_6 = FUNC_2(VAR_5, &VAR_7);
    if(!VAR_6)
      FUNC_0("curl_easy_setopt(hnd, %s, slist%d);", VAR_3, VAR_7);
  }

 nomem:
  return VAR_6;
}
