
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
struct Curl_easy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int FUNC_1 (struct Curl_easy*,int ) ;
 struct curl_slist* FUNC_2 (struct Curl_easy*) ;

struct curl_slist *FUNC_3(struct Curl_easy *VAR_2)
{
  struct curl_slist *VAR_3;
  FUNC_0(VAR_2, VAR_1, VAR_0);
  VAR_3 = FUNC_2(VAR_2);
  FUNC_1(VAR_2, VAR_1);
  return VAR_3;
}
