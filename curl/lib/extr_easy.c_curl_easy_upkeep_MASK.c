
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Curl_easy {TYPE_1__* multi_easy; } ;
struct TYPE_2__ {int conn_cache; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (int *,struct Curl_easy*) ;

CURLcode FUNC_2(struct Curl_easy *VAR_2)
{

  if(!FUNC_0(VAR_2))
    return VAR_0;

  if(VAR_2->multi_easy) {

    return FUNC_1(&VAR_2->multi_easy->conn_cache, VAR_2);
  }
  else {

    return VAR_1;
  }
}
