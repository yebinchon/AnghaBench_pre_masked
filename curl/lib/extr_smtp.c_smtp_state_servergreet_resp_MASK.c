
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int smtpstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,char*,int) ;
 int FUNC_1 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_2,
                                            int VAR_3,
                                            smtpstate VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct Curl_easy *VAR_6 = VAR_2->data;

  (void)VAR_4;

  if(VAR_3/100 != 2) {
    FUNC_0(VAR_6, "Got unexpected smtp-server response: %d", VAR_3);
    VAR_5 = VAR_1;
  }
  else
    VAR_5 = FUNC_1(VAR_2);

  return VAR_5;
}
