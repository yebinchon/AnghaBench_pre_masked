
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ has_fwsm; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct e1000_hw *VAR_14)
{
 u32 VAR_15;
 u32 VAR_16, VAR_17;

 VAR_15 = FUNC_1(VAR_9);

 if (!(VAR_15 & VAR_4))
  return 0;

 if (VAR_14->mac.has_fwsm) {
  VAR_16 = FUNC_1(VAR_8);
  VAR_17 = FUNC_1(VAR_7);

  if (!(VAR_17 & VAR_0) &&
      ((VAR_16 & VAR_1) ==
       (VAR_13 << VAR_2)))
   return 1;
 } else if ((VAR_14->mac.type == VAR_11) ||
     (VAR_14->mac.type == VAR_12)) {
  u16 VAR_18;

  VAR_17 = FUNC_1(VAR_7);
  FUNC_0(VAR_14, VAR_10, 1, &VAR_18);

  if (!(VAR_17 & VAR_0) &&
      ((VAR_18 & VAR_6) ==
       (VAR_13 << 13)))
   return 1;
 } else if ((VAR_15 & VAR_5) &&
     !(VAR_15 & VAR_3)) {
  return 1;
 }

 return 0;
}
