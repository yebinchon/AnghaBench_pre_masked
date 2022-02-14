
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {int size; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct Curl_easy*,int ) ;
 int FUNC_1 (struct Curl_easy*,int) ;
 int FUNC_2 (struct Curl_easy*,int ) ;
 int FUNC_3 (struct Curl_easy*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct connectdata*,int) ;
 scalar_t__ FUNC_5 (struct connectdata*,int*,int*) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_2,
                                      bool *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  bool VAR_5 = VAR_1;
  struct Curl_easy *VAR_6 = VAR_2->data;


  VAR_6->req.size = -1;


  FUNC_2(VAR_6, 0);
  FUNC_0(VAR_6, 0);
  FUNC_3(VAR_6, -1);
  FUNC_1(VAR_6, -1);


  VAR_4 = FUNC_5(VAR_2, &VAR_5, VAR_3);


  if(!VAR_4 && *VAR_3)
    VAR_4 = FUNC_4(VAR_2, VAR_5);

  return VAR_4;
}
