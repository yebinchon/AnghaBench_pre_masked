
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int netmask; int ip_addr; struct netif* next; } ;
struct ip_addr {int dummy; } ;


 scalar_t__ FUNC_0 (struct ip_addr*,int *,int *) ;
 struct netif* VAR_0 ;
 struct netif* VAR_1 ;

struct netif *
FUNC_1(struct ip_addr *VAR_2)
{
  struct netif *VAR_3;


  for(VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {

    if (FUNC_0(VAR_2, &(VAR_3->ip_addr), &(VAR_3->netmask))) {

      return VAR_3;
    }
  }

  return VAR_0;
}
