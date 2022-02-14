
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int imapstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Curl_easy*,char*,int) ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_4,
                                      int VAR_5,
                                      imapstate VAR_6)
{
  CURLcode VAR_7 = VAR_1;
  struct Curl_easy *VAR_8 = VAR_4->data;

  (void)VAR_6;

  if(VAR_5 != VAR_2) {
    FUNC_0(VAR_8, "Access denied. %c", VAR_5);
    VAR_7 = VAR_0;
  }
  else

    FUNC_1(VAR_4, VAR_3);

  return VAR_7;
}
