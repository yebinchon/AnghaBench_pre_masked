
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct igb_adapter {int* shadow_vfta; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; struct igb_adapter* back; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct e1000_hw*,int,int) ;
 int FUNC_1 (struct e1000_hw*,int,int) ;

s32 FUNC_2(struct e1000_hw *VAR_6, u32 VAR_7, bool VAR_8)
{
 u32 VAR_9 = (VAR_7 >> VAR_3) & VAR_2;
 u32 VAR_10 = 1 << (VAR_7 & VAR_1);
 u32 VAR_11;
 struct igb_adapter *VAR_12 = VAR_6->back;
 s32 VAR_13 = 0;

 VAR_11 = VAR_12->shadow_vfta[VAR_9];


 if ((!!(VAR_11 & VAR_10)) == VAR_8) {
  VAR_13 = -VAR_0;
 } else {
  if (VAR_8)
   VAR_11 |= VAR_10;
  else
   VAR_11 &= ~VAR_10;
 }
 if ((VAR_6->mac.type == VAR_4) || (VAR_6->mac.type == VAR_5))
  FUNC_1(VAR_6, VAR_9, VAR_11);
 else
  FUNC_0(VAR_6, VAR_9, VAR_11);
 VAR_12->shadow_vfta[VAR_9] = VAR_11;

 return VAR_13;
}
