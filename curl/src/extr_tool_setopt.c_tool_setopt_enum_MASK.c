
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct GlobalConfig {scalar_t__ libcurl; } ;
struct TYPE_3__ {long name; long value; } ;
typedef TYPE_1__ NameValue ;
typedef int CURLoption ;
typedef int CURLcode ;
typedef int CURL ;


 int FUNC_0 (char*,char const*,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,long) ;

CURLcode FUNC_2(CURL *VAR_3, struct GlobalConfig *VAR_4,
                          const char *VAR_5, CURLoption VAR_6,
                          const NameValue *VAR_7, long VAR_8)
{
  CURLcode VAR_9 = VAR_0;
  bool VAR_10 = VAR_1;

  VAR_9 = FUNC_1(VAR_3, VAR_6, VAR_8);
  if(!VAR_8)
    VAR_10 = VAR_2;

  if(VAR_4->libcurl && !VAR_10 && !VAR_9) {

    const NameValue *VAR_11 = ((void*)0);
    for(VAR_11 = VAR_7; VAR_11->name; VAR_11++) {
      if(VAR_11->value == VAR_8) break;
    }
    if(! VAR_11->name) {



      FUNC_0("curl_easy_setopt(hnd, %s, %ldL);", VAR_5, VAR_8);
    }
    else {
      FUNC_0("curl_easy_setopt(hnd, %s, (long)%s);", VAR_5, VAR_11->name);
    }
  }

 nomem:
  return VAR_9;
}
