
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int mtu; int flags; int hwaddr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct netif *VAR_5)
{

    VAR_5->hwaddr_len = VAR_0;


    VAR_5->mtu = 1500;



    VAR_5->flags = VAR_1 | VAR_2 | VAR_4;






}
