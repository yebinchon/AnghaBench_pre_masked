
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int pop3state ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Curl_easy*,char*,int) ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_3, int VAR_4,
                                     pop3state VAR_5)
{
  CURLcode VAR_6 = VAR_1;
  struct Curl_easy *VAR_7 = VAR_3->data;

  (void)VAR_5;

  if(VAR_4 != '+') {
    FUNC_0(VAR_7, "Authentication failed: %d", VAR_4);
    VAR_6 = VAR_0;
  }
  else

    FUNC_1(VAR_3, VAR_2);

  return VAR_6;
}
