
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int flags; int ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netif*) ;
 int FUNC_1 (struct netif*) ;
 int FUNC_2 (struct netif*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct netif *VAR_4)
{
  if (!(VAR_4->flags & VAR_3)) {
    VAR_4->flags |= VAR_3;





    FUNC_0(VAR_4);

    if (VAR_4->flags & VAR_2) {
    }
  }
}
