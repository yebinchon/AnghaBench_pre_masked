
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int vfs_allocated_count; int vf_rate_link_speed; TYPE_1__* vf_data; int link_speed; struct e1000_hw hw; } ;
struct TYPE_3__ {scalar_t__ tx_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_hw*,int,int,int) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, int VAR_6, int VAR_7)
{
 struct igb_adapter *VAR_8 = FUNC_2(VAR_5);
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 int VAR_10;

 if (VAR_9->mac.type != VAR_4)
  return -VAR_3;

 VAR_10 = FUNC_0(VAR_8->link_speed);
 if ((VAR_6 >= VAR_8->vfs_allocated_count) ||
     (!(FUNC_3(VAR_0) & VAR_1)) ||
     (VAR_7 < 0) || (VAR_7 > VAR_10))
  return -VAR_2;

 VAR_8->vf_rate_link_speed = VAR_10;
 VAR_8->vf_data[VAR_6].tx_rate = (u16)VAR_7;
 FUNC_1(VAR_9, VAR_6, VAR_7, VAR_10);

 return 0;
}
