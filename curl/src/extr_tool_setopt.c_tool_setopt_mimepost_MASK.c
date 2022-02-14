
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct GlobalConfig {TYPE_1__* current; scalar_t__ libcurl; } ;
typedef int curl_mime ;
struct TYPE_2__ {int mimeroot; } ;
typedef int CURLoption ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,struct GlobalConfig*,int ,int*) ;

CURLcode FUNC_3(CURL *VAR_0, struct GlobalConfig *VAR_1,
                              const char *VAR_2, CURLoption VAR_3,
                              curl_mime *VAR_4)
{
  CURLcode VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4);
  int VAR_6 = 0;

  if(!VAR_5 && VAR_1->libcurl) {
    VAR_5 = FUNC_2(VAR_0, VAR_1,
                                VAR_1->current->mimeroot, &VAR_6);

    if(!VAR_5)
      FUNC_0("curl_easy_setopt(hnd, %s, mime%d);", VAR_2, VAR_6);
  }

nomem:
  return VAR_5;
}
