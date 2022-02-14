
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct Curl_easy**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

struct Curl_easy *FUNC_4(void)
{
  CURLcode VAR_3;
  struct Curl_easy *VAR_4;


  if(!VAR_1) {
    VAR_3 = FUNC_2(VAR_0);
    if(VAR_3) {

      FUNC_1(FUNC_3(VAR_2, "Error: curl_global_init failed\n"));
      return ((void*)0);
    }
  }


  VAR_3 = FUNC_0(&VAR_4);
  if(VAR_3) {
    FUNC_1(FUNC_3(VAR_2, "Error: Curl_open failed\n"));
    return ((void*)0);
  }

  return VAR_4;
}
