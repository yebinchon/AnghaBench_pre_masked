
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ subparts; } ;
typedef TYPE_1__ tool_mime ;
struct GlobalConfig {int dummy; } ;
typedef int CURLcode ;
typedef int CURL ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,struct GlobalConfig*,scalar_t__,int) ;

__attribute__((used)) static CURLcode FUNC_5(CURL *VAR_2,
                                      struct GlobalConfig *VAR_3,
                                      tool_mime *VAR_4,
                                      int *VAR_5)
{
  CURLcode VAR_6 = VAR_0;


  *VAR_5 = ++VAR_1;
  FUNC_3("curl_mime *mime%d;", *VAR_5);
  FUNC_2("mime%d = NULL;", *VAR_5);
  FUNC_1("mime%d = curl_mime_init(hnd);", *VAR_5);
  FUNC_0("curl_mime_free(mime%d);", *VAR_5);
  FUNC_0("mime%d = NULL;", *VAR_5);

  if(VAR_4->subparts) {
    FUNC_3("curl_mimepart *part%d;", *VAR_5);
    VAR_6 = FUNC_4(VAR_2, VAR_3,
                                     VAR_4->subparts, *VAR_5);
  }

nomem:
  return VAR_6;
}
