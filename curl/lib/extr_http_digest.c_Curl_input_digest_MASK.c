
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct digestdata {int dummy; } ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {struct digestdata digest; struct digestdata proxydigest; } ;
struct Curl_easy {TYPE_1__ state; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct digestdata*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;

CURLcode FUNC_4(struct connectdata *VAR_1,
                           bool VAR_2,
                           const char *VAR_3)

{
  struct Curl_easy *VAR_4 = VAR_1->data;


  struct digestdata *VAR_5;

  if(VAR_2) {
    VAR_5 = &VAR_4->state.proxydigest;
  }
  else {
    VAR_5 = &VAR_4->state.digest;
  }

  if(!FUNC_2("Digest", VAR_3))
    return VAR_0;

  VAR_3 += FUNC_3("Digest");
  while(*VAR_3 && FUNC_1(*VAR_3))
    VAR_3++;

  return FUNC_0(VAR_3, VAR_5);
}
