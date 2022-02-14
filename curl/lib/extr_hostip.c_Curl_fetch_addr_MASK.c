
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; } ;
struct Curl_easy {scalar_t__ share; } ;
struct Curl_dns_entry {int inuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int FUNC_1 (struct Curl_easy*,int ) ;
 struct Curl_dns_entry* FUNC_2 (struct connectdata*,char const*,int) ;

struct Curl_dns_entry *
FUNC_3(struct connectdata *VAR_2,
                const char *VAR_3,
                int VAR_4)
{
  struct Curl_easy *VAR_5 = VAR_2->data;
  struct Curl_dns_entry *VAR_6 = ((void*)0);

  if(VAR_5->share)
    FUNC_0(VAR_5, VAR_1, VAR_0);

  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);

  if(VAR_6)
    VAR_6->inuse++;

  if(VAR_5->share)
    FUNC_1(VAR_5, VAR_1);

  return VAR_6;
}
