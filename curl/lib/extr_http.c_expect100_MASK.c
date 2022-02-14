
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int httpversion; } ;
struct TYPE_2__ {int expect100header; } ;
struct Curl_easy {TYPE_1__ state; } ;
typedef int Curl_send_buffer ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int **,char*) ;
 char* FUNC_1 (struct connectdata*,char*) ;
 int FUNC_2 (char const*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct Curl_easy*,struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_4(struct Curl_easy *VAR_3,
                          struct connectdata *VAR_4,
                          Curl_send_buffer *VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  VAR_3->state.expect100header = VAR_1;

  if(FUNC_3(VAR_3, VAR_4) &&
     (VAR_4->httpversion < 20)) {



    const char *VAR_7 = FUNC_1(VAR_4, "Expect");
    if(VAR_7) {
      VAR_3->state.expect100header =
        FUNC_2(VAR_7, "Expect:", "100-continue");
    }
    else {
      VAR_6 = FUNC_0(&VAR_5,
                                "Expect: 100-continue\r\n");
      if(!VAR_6)
        VAR_3->state.expect100header = VAR_2;
    }
  }

  return VAR_6;
}
