
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {int dummy; } ;
struct TYPE_2__ {int connect_only; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef scalar_t__ curl_socket_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,struct connectdata**) ;
 int FUNC_1 (struct Curl_easy*,char*) ;

__attribute__((used)) static CURLcode FUNC_2(struct Curl_easy *VAR_4,
                                curl_socket_t *VAR_5,
                                struct connectdata **VAR_6)
{
  if(VAR_4 == ((void*)0))
    return VAR_0;


  if(!VAR_4->set.connect_only) {
    FUNC_1(VAR_4, "CONNECT_ONLY is required!");
    return VAR_2;
  }

  *VAR_5 = FUNC_0(VAR_4, VAR_6);

  if(*VAR_5 == VAR_3) {
    FUNC_1(VAR_4, "Failed to get recent socket");
    return VAR_2;
  }

  return VAR_1;
}
