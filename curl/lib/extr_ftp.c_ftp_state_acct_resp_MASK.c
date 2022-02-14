
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,char*,int) ;
 int FUNC_1 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_2,
                                    int VAR_3)
{
  CURLcode VAR_4 = VAR_1;
  struct Curl_easy *VAR_5 = VAR_2->data;
  if(VAR_3 != 230) {
    FUNC_0(VAR_5, "ACCT rejected by server: %03d", VAR_3);
    VAR_4 = VAR_0;
  }
  else
    VAR_4 = FUNC_1(VAR_2);

  return VAR_4;
}
