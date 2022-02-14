
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_adapter {int flags; TYPE_1__* ring_feature; int atr_sample_rate; } ;
struct ethtool_channels {int combined_count; void* other_count; void* max_other; int max_combined; } ;
struct TYPE_2__ {int indices; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5,
          struct ethtool_channels *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_2(VAR_5);


 VAR_6->max_combined = FUNC_0(VAR_7);


 if (VAR_7->flags & VAR_0) {
  VAR_6->max_other = VAR_2;
  VAR_6->other_count = VAR_2;
 }


 VAR_6->combined_count = VAR_7->ring_feature[VAR_4].indices;


 if (VAR_6->combined_count == 1)
  return;


 if (VAR_7->flags & VAR_1)
  return;


 if (FUNC_1(VAR_5) > 1)
  return;


 if (!VAR_7->atr_sample_rate)
  return;


 VAR_6->combined_count = VAR_7->ring_feature[VAR_3].indices;
}
