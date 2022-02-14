
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {scalar_t__ use_ssl; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef int pop3state ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct Curl_easy*,char*) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3,
                                         int VAR_4,
                                         pop3state VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  struct Curl_easy *VAR_7 = VAR_3->data;

  (void)VAR_5;

  if(VAR_4 != '+') {
    if(VAR_7->set.use_ssl != VAR_2) {
      FUNC_0(VAR_7, "STARTTLS denied");
      VAR_6 = VAR_1;
    }
    else
      VAR_6 = FUNC_1(VAR_3);
  }
  else
    VAR_6 = FUNC_2(VAR_3);

  return VAR_6;
}
