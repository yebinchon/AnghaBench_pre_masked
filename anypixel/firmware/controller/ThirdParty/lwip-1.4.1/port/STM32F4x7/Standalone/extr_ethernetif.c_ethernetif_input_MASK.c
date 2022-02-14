
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int dummy; } ;
struct netif {scalar_t__ (* input ) (struct pbuf*,struct netif*) ;} ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 struct pbuf* FUNC_1 (struct netif*) ;
 int FUNC_2 (struct pbuf*) ;
 scalar_t__ FUNC_3 (struct pbuf*,struct netif*) ;

err_t FUNC_4(struct netif *VAR_3)
{
  err_t VAR_4;
  struct pbuf *VAR_5;


  VAR_5 = FUNC_1(VAR_3);


  if (VAR_5 == ((void*)0)) return VAR_0;


  VAR_4 = VAR_3->input(VAR_5, VAR_3);

  if (VAR_4 != VAR_1)
  {
    FUNC_0(VAR_2, ("ethernetif_input: IP input error\n"));
    FUNC_2(VAR_5);
  }
  return VAR_4;
}
