
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int flags; int max_frame_size; struct e1000_hw hw; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_20, u32 VAR_21)
{
 struct e1000_hw *VAR_22 = &VAR_20->hw;
 u32 VAR_23;
 u16 VAR_24;

 if (VAR_22->mac.type > VAR_18) {
  if (VAR_20->flags & VAR_15) {
   u32 VAR_25;


   FUNC_1(VAR_8, 0);





   VAR_24 = 64 * VAR_21 - VAR_20->max_frame_size / 16;
   if (VAR_24 < 64 * (VAR_21 - 6))
    VAR_24 = 64 * (VAR_21 - 6);
   VAR_25 = FUNC_0(VAR_9);
   VAR_25 &= ~VAR_10;
   VAR_25 |= ((VAR_24 << VAR_11)
    & VAR_10);
   FUNC_1(VAR_9, VAR_25);




   VAR_23 = VAR_21 - VAR_20->max_frame_size / 512;
   if (VAR_23 < VAR_21 - 10)
    VAR_23 = VAR_21 - 10;
   VAR_25 = FUNC_0(VAR_0);
   VAR_25 &= ~VAR_2;
   VAR_25 |= ((VAR_23 << VAR_3)
    & VAR_2);


   VAR_25 |= (VAR_4 | VAR_5);


   VAR_25 |= (1000 >> 5);


   if (VAR_22->mac.type != VAR_19)
    VAR_25 &= ~VAR_1;

   FUNC_1(VAR_0, VAR_25);




   FUNC_1(VAR_6, 0);

   VAR_25 = (VAR_14 | 0x4);

   FUNC_1(VAR_7, VAR_25);




   FUNC_1(VAR_8, (VAR_16 -
        (VAR_17 + VAR_20->max_frame_size)) >> 6);




   VAR_25 = FUNC_0(VAR_12);
   VAR_25 &= ~VAR_13;
   FUNC_1(VAR_12, VAR_25);
  }
 } else if (VAR_22->mac.type == VAR_18) {
  u32 VAR_26 = FUNC_0(VAR_12);
  FUNC_1(VAR_12, VAR_26 & ~VAR_13);
  FUNC_1(VAR_0, 0);
 }
}
