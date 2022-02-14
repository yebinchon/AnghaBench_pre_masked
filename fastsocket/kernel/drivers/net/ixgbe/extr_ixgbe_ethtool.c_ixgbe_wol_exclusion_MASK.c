
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int subsystem_device_id; int device_id; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_wolinfo {scalar_t__ supported; } ;


 int FUNC_0 (struct ixgbe_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ixgbe_adapter *VAR_0,
                               struct ethtool_wolinfo *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_0->hw;
 int VAR_3 = 0;


 if (!FUNC_0(VAR_0, VAR_2->device_id,
     VAR_2->subsystem_device_id)) {
  VAR_3 = 1;
  VAR_1->supported = 0;
 }

 return VAR_3;
}
