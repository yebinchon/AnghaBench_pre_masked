
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {int dummy; } ;
typedef int curl_socket_t ;
typedef int CURLcode ;
typedef int CURLINFO ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct Curl_easy*,int *) ;

__attribute__((used)) static CURLcode FUNC_1(struct Curl_easy *VAR_2, CURLINFO VAR_3,
                               curl_socket_t *VAR_4)
{
  switch(VAR_3) {
  case 128:
    *VAR_4 = FUNC_0(VAR_2, ((void*)0));
    break;
  default:
    return VAR_1;
  }

  return VAR_0;
}
