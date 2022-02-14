
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_11, ixgbe_link_speed *VAR_12,
     bool *VAR_13, bool VAR_14)
{
 u32 VAR_15, VAR_16;
 u32 VAR_17;


 VAR_16 = FUNC_0(VAR_11, VAR_0);

 VAR_15 = FUNC_0(VAR_11, VAR_0);

 if (VAR_16 != VAR_15) {
  FUNC_1(VAR_11, "LINKS changed from %08X to %08X\n",
         VAR_16, VAR_15);
 }

 if (VAR_14) {
  for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
   if (VAR_15 & VAR_5) {
    *VAR_13 = 1;
    break;
   } else {
    *VAR_13 = 0;
   }
   FUNC_2(100);
   VAR_15 = FUNC_0(VAR_11, VAR_0);
  }
 } else {
  if (VAR_15 & VAR_5)
   *VAR_13 = 1;
  else
   *VAR_13 = 0;
 }

 if ((VAR_15 & VAR_4) ==
     VAR_2)
  *VAR_12 = VAR_7;
 else if ((VAR_15 & VAR_4) ==
   VAR_3)
  *VAR_12 = VAR_8;
 else if ((VAR_15 & VAR_4) ==
   VAR_1)
  *VAR_12 = VAR_6;
 else
  *VAR_12 = VAR_9;

 return 0;
}
