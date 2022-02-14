
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int dummy; } ;
struct netif {int dummy; } ;
struct ip_addr {int dummy; } ;
typedef int err_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct netif*,struct ip_addr*,struct pbuf*) ;

__attribute__((used)) static err_t FUNC_3(struct netif *VAR_1,struct pbuf *VAR_2,struct ip_addr *VAR_3)
{
 FUNC_0(VAR_0,("__bba_start_tx(%p)\n",FUNC_1()));
 return FUNC_2(VAR_1,VAR_3,VAR_2);
}
