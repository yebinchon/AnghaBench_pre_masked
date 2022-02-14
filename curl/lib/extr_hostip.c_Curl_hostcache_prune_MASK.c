
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int dns_cache_timeout; } ;
struct TYPE_3__ {int hostcache; } ;
struct Curl_easy {scalar_t__ share; TYPE_2__ set; TYPE_1__ dns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int FUNC_1 (struct Curl_easy*,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct Curl_easy *VAR_2)
{
  time_t VAR_3;

  if((VAR_2->set.dns_cache_timeout == -1) || !VAR_2->dns.hostcache)


    return;

  if(VAR_2->share)
    FUNC_0(VAR_2, VAR_1, VAR_0);

  FUNC_3(&VAR_3);


  FUNC_2(VAR_2->dns.hostcache,
                  VAR_2->set.dns_cache_timeout,
                  VAR_3);

  if(VAR_2->share)
    FUNC_1(VAR_2, VAR_1);
}
