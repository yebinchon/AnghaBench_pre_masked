
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int dummy; } ;
struct netif {int (* input ) (struct pbuf*,struct netif*) ;} ;


 struct pbuf* FUNC_0 (struct netif*) ;
 int FUNC_1 (struct pbuf*,struct netif*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
  struct pbuf *VAR_1;
  struct netif *VAR_2 = (struct netif *)VAR_0;

  while (1) {
    VAR_1 = FUNC_0(VAR_2);
    VAR_2->input(VAR_1, VAR_2);
  }
}
