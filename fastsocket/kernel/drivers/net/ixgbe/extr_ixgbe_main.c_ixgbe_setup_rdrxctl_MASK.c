
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;




__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_8)
{
 struct ixgbe_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10 = FUNC_0(VAR_9, VAR_0);

 switch (VAR_9->mac.type) {
 case 130:
  VAR_10 |= VAR_3;
  break;
 case 129:
 case 128:

  FUNC_1(VAR_9, VAR_6,
     (VAR_7 | FUNC_0(VAR_9, VAR_6)));
  VAR_10 &= ~VAR_5;

  VAR_10 |= (VAR_4 | VAR_2);
  VAR_10 |= VAR_1;
  break;
 default:

  return;
 }

 FUNC_1(VAR_9, VAR_0, VAR_10);
}
