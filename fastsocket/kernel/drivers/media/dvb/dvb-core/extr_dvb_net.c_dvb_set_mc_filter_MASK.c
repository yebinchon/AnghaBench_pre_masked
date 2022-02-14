
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dvb_net_priv {size_t multi_num; int * multi_macs; } ;
struct dev_mc_list {int dmi_addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct dvb_net_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2 (struct net_device *VAR_2, struct dev_mc_list *VAR_3)
{
 struct dvb_net_priv *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->multi_num == VAR_0)
  return -VAR_1;

 FUNC_0(VAR_4->multi_macs[VAR_4->multi_num], VAR_3->dmi_addr, 6);

 VAR_4->multi_num++;
 return 0;
}
