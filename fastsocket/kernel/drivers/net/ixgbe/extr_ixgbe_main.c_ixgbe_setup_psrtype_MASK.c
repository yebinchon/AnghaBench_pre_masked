
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int num_rx_pools; TYPE_2__* ring_feature; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int indices; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 int VAR_9 = VAR_7->ring_feature[VAR_5].indices;
 int VAR_10;


 u32 VAR_11 = VAR_3 |
        VAR_4 |
        VAR_0 |
        VAR_2 |
        VAR_1;

 if (VAR_8->mac.type == VAR_6)
  return;

 if (VAR_9 > 3)
  VAR_11 |= 2 << 29;
 else if (VAR_9 > 1)
  VAR_11 |= 1 << 29;

 for (VAR_10 = 0; VAR_10 < VAR_7->num_rx_pools; VAR_10++)
  FUNC_1(VAR_8, FUNC_0(FUNC_2(VAR_10)),
    VAR_11);
}
