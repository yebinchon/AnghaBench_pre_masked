
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_dns_entry {scalar_t__ inuse; int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct Curl_dns_entry*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
  struct Curl_dns_entry *VAR_1 = (struct Curl_dns_entry *) VAR_0;
  FUNC_1(VAR_1 && (VAR_1->inuse>0));

  VAR_1->inuse--;
  if(VAR_1->inuse == 0) {
    FUNC_0(VAR_1->addr);
    FUNC_2(VAR_1);
  }
}
