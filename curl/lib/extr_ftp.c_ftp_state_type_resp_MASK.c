
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef scalar_t__ ftpstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct Curl_easy*,char*) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct connectdata*) ;
 int FUNC_5 (struct Curl_easy*,char*,int) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_6,
                                    int VAR_7,
                                    ftpstate VAR_8)
{
  CURLcode VAR_9 = VAR_1;
  struct Curl_easy *VAR_10 = VAR_6->data;

  if(VAR_7/100 != 2) {



    FUNC_0(VAR_10, "Couldn't set desired mode");
    return VAR_0;
  }
  if(VAR_7 != 200)
    FUNC_5(VAR_10, "Got a %03d response code instead of the assumed 200\n",
          VAR_7);

  if(VAR_8 == VAR_5)
    VAR_9 = FUNC_3(VAR_6);
  else if(VAR_8 == VAR_2)
    VAR_9 = FUNC_1(VAR_6);
  else if(VAR_8 == VAR_3)
    VAR_9 = FUNC_2(VAR_6);
  else if(VAR_8 == VAR_4)
    VAR_9 = FUNC_4(VAR_6);

  return VAR_9;
}
