
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netif {int mtu; int flags; int l2_buffer_free_notify; int hwaddr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct netif *VAR_6)
{

  VAR_6->hwaddr_len = VAR_0;




  VAR_6->mtu = 1500;



  VAR_6->flags = VAR_1 | VAR_2 | VAR_4;
    VAR_6->l2_buffer_free_notify = VAR_5;

}
