
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connectdata {TYPE_2__* data; } ;
struct Curl_dns_entry {int dummy; } ;
struct TYPE_3__ {scalar_t__ doh; } ;
struct TYPE_4__ {TYPE_1__ set; } ;
typedef int CURLcode ;


 int FUNC_0 (struct connectdata*,struct Curl_dns_entry**) ;
 int FUNC_1 (struct connectdata*,struct Curl_dns_entry**) ;

CURLcode FUNC_2(struct connectdata *VAR_0,
                           struct Curl_dns_entry **VAR_1)
{
  if(VAR_0->data->set.doh)
    return FUNC_0(VAR_0, VAR_1);
  return FUNC_1(VAR_0, VAR_1);
}
