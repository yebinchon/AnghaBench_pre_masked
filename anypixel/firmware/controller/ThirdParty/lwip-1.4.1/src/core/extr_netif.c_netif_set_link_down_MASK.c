
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct netif*) ;

void FUNC_1(struct netif *VAR_1 )
{
  if (VAR_1->flags & VAR_0) {
    VAR_1->flags &= ~VAR_0;
    FUNC_0(VAR_1);
  }
}
