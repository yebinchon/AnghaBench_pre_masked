
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; struct e1000_hw hw; } ;


 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int FUNC_1 (struct igb_adapter*,int ,int,int) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, u16 VAR_1)
{
 struct igb_adapter *VAR_2 = FUNC_2(VAR_0);
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 int VAR_4 = VAR_2->vfs_allocated_count;


 FUNC_1(VAR_2, VAR_1, 1, VAR_4);


 FUNC_0(VAR_3, VAR_1, 1);
}
