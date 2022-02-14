
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,int*,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_11,
          ixgbe_link_speed VAR_12,
          bool VAR_13)
{
 bool VAR_14 = 0;
 s32 VAR_15 = 0;
 ixgbe_link_speed VAR_16 = VAR_10;
 u32 VAR_17 = FUNC_0(VAR_11, VAR_0);
 u32 VAR_18 = VAR_17;
 u32 VAR_19 = VAR_18 & VAR_6;


 FUNC_2(VAR_11, &VAR_16, &VAR_14);
 VAR_12 &= VAR_16;

 if (VAR_12 == VAR_10)
  VAR_15 = VAR_7;


 else if (VAR_19 == VAR_4 ||
          VAR_19 == VAR_5) {
  VAR_18 &= ~VAR_1;
  if (VAR_12 & VAR_8)
   VAR_18 |= VAR_2;
  if (VAR_12 & VAR_9)
   VAR_18 |= VAR_3;
  if (VAR_18 != VAR_17)
   FUNC_1(VAR_11, VAR_0, VAR_18);
 }

 if (VAR_15 == 0) {





  VAR_15 = FUNC_3(VAR_11,
          VAR_13);
 }

 return VAR_15;
}
