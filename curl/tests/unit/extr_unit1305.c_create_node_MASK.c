
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Curl_dns_entry {int dummy; } ;
struct TYPE_3__ {int addr; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 () ;

__attribute__((used)) static CURLcode FUNC_3(void)
{
  VAR_2 = FUNC_0("%s:%d", "dummy", 0);
  if(!VAR_2)
    return VAR_1;

  VAR_3 = FUNC_1(1, sizeof(struct Curl_dns_entry));
  if(!VAR_3)
    return VAR_1;

  VAR_3->addr = FUNC_2();
  if(!VAR_3->addr)
    return VAR_1;

  return VAR_0;
}
