
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ipg_nic_private {int max_rxframe_size; int rxfrag_size; int rxsupport_size; int is_jumbo; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct ipg_nic_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct ipg_nic_private *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;






 FUNC_0("_nic_change_mtu\n");





 if (VAR_2 < 68 || VAR_2 > 10240)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_1->mtu = VAR_2;

 VAR_3->max_rxframe_size = VAR_2;

 VAR_3->rxfrag_size = VAR_2;
 if (VAR_3->rxfrag_size > 4088)
  VAR_3->rxfrag_size = 4088;

 VAR_3->rxsupport_size = VAR_3->max_rxframe_size;

 if (VAR_2 > 0x0600)
  VAR_3->is_jumbo = 1;
 else
  VAR_3->is_jumbo = 0;

 return FUNC_1(VAR_1);
}
