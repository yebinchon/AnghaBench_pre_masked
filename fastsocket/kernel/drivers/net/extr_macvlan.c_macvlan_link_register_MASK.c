
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int priv_size; int fill_info; int get_size; int changelink; int policy; int maxtype; int validate; int get_tx_queues; } ;
struct macvlan_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtnl_link_ops*) ;

int FUNC_1(struct rtnl_link_ops *VAR_7)
{

 VAR_7->priv_size = sizeof(struct macvlan_dev);
 VAR_7->get_tx_queues = VAR_4;
 VAR_7->validate = VAR_6;
 VAR_7->maxtype = VAR_0;
 VAR_7->policy = VAR_5;
 VAR_7->changelink = VAR_1;
 VAR_7->get_size = VAR_3;
 VAR_7->fill_info = VAR_2;

 return FUNC_0(VAR_7);
}
