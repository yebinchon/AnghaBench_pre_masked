
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_easy {scalar_t__ share; } ;
struct Curl_dns_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int FUNC_1 (struct Curl_easy*,int ) ;
 int FUNC_2 (struct Curl_dns_entry*) ;

void FUNC_3(struct Curl_easy *VAR_2, struct Curl_dns_entry *VAR_3)
{
  if(VAR_2 && VAR_2->share)
    FUNC_0(VAR_2, VAR_1, VAR_0);

  FUNC_2(VAR_3);

  if(VAR_2 && VAR_2->share)
    FUNC_1(VAR_2, VAR_1);
}
