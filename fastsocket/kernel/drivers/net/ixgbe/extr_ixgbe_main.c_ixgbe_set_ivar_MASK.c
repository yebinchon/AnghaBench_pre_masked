
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;




__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_2, s8 VAR_3,
      u8 VAR_4, u8 VAR_5)
{
 u32 VAR_6, VAR_7;
 struct ixgbe_hw *VAR_8 = &VAR_2->hw;
 switch (VAR_8->mac.type) {
 case 130:
  VAR_5 |= VAR_0;
  if (VAR_3 == -1)
   VAR_3 = 0;
  VAR_7 = (((VAR_3 * 64) + VAR_4) >> 2) & 0x1F;
  VAR_6 = FUNC_1(VAR_8, FUNC_0(VAR_7));
  VAR_6 &= ~(0xFF << (8 * (VAR_4 & 0x3)));
  VAR_6 |= (VAR_5 << (8 * (VAR_4 & 0x3)));
  FUNC_2(VAR_8, FUNC_0(VAR_7), VAR_6);
  break;
 case 129:
 case 128:
  if (VAR_3 == -1) {

   VAR_5 |= VAR_0;
   VAR_7 = ((VAR_4 & 1) * 8);
   VAR_6 = FUNC_1(&VAR_2->hw, VAR_1);
   VAR_6 &= ~(0xFF << VAR_7);
   VAR_6 |= (VAR_5 << VAR_7);
   FUNC_2(&VAR_2->hw, VAR_1, VAR_6);
   break;
  } else {

   VAR_5 |= VAR_0;
   VAR_7 = ((16 * (VAR_4 & 1)) + (8 * VAR_3));
   VAR_6 = FUNC_1(VAR_8, FUNC_0(VAR_4 >> 1));
   VAR_6 &= ~(0xFF << VAR_7);
   VAR_6 |= (VAR_5 << VAR_7);
   FUNC_2(VAR_8, FUNC_0(VAR_4 >> 1), VAR_6);
   break;
  }
 default:
  break;
 }
}
