
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {scalar_t__ use_ssl; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef int imapstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Curl_easy*,char*) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_4,
                                         int VAR_5,
                                         imapstate VAR_6)
{
  CURLcode VAR_7 = VAR_0;
  struct Curl_easy *VAR_8 = VAR_4->data;

  (void)VAR_6;

  if(VAR_5 != VAR_3) {
    if(VAR_8->set.use_ssl != VAR_2) {
      FUNC_0(VAR_8, "STARTTLS denied");
      VAR_7 = VAR_1;
    }
    else
      VAR_7 = FUNC_1(VAR_4);
  }
  else
    VAR_7 = FUNC_2(VAR_4);

  return VAR_7;
}
