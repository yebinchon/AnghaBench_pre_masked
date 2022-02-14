
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_adapter {int num_vfs; int vf_rate_link_speed; TYPE_1__* vfinfo; int link_up; } ;
struct TYPE_2__ {int tx_rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*,int) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;


 if (VAR_2 >= VAR_4->num_vfs)
  return -VAR_0;


 if (!VAR_4->link_up)
  return -VAR_0;


 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 != 10000)
  return -VAR_0;


 if (VAR_3 && ((VAR_3 <= 10) || (VAR_3 > VAR_5)))
  return -VAR_0;


 VAR_4->vf_rate_link_speed = VAR_5;
 VAR_4->vfinfo[VAR_2].tx_rate = VAR_3;


 FUNC_1(VAR_4, VAR_2);

 return 0;
}
