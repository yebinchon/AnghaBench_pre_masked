
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int autoneg; } ;
struct e1000_hw {scalar_t__ device_id; TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct igb_adapter *VAR_14)
{
 struct e1000_hw *VAR_15 = &VAR_14->hw;
 u32 VAR_16;
 u16 VAR_17;

 if ((VAR_15->device_id == VAR_3) ||
 (VAR_15->device_id == VAR_1) ||
 (VAR_15->device_id == VAR_0) ||
 (VAR_15->device_id == VAR_2)) {
  u32 VAR_18;


  VAR_18 = FUNC_3(VAR_4);
  VAR_18 = (VAR_18 & VAR_5) |
  VAR_8;
  FUNC_4(VAR_4, VAR_18);

  VAR_18 = FUNC_3(VAR_6);
  VAR_18 &= ~VAR_7;
  FUNC_4(VAR_6, VAR_18);
 }

 VAR_16 = FUNC_3(VAR_9);
 VAR_16 &= ~(VAR_11 | VAR_10);
 FUNC_4(VAR_9, VAR_16);

 VAR_15->mac.autoneg = 1;
 FUNC_1(VAR_15, VAR_13, &VAR_17);
 if (VAR_17 & VAR_12) {
  VAR_17 &= ~VAR_12;
  FUNC_2(VAR_15, VAR_13, VAR_17);
  FUNC_0(VAR_15);
 }
}
