
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_13)
{
 s32 VAR_14 = 0;
 u16 VAR_15 = 0;
 u32 VAR_16;
 u16 VAR_17;

 if (VAR_13->mac.type != VAR_12)
  return 0;


 VAR_14 = FUNC_0(VAR_13, VAR_4, &VAR_15);
 if (VAR_14)
  return VAR_14;

 if ((VAR_15 & (VAR_6 | VAR_5))
     == (VAR_6 | VAR_5)) {
  VAR_16 = FUNC_2(VAR_3);
  VAR_16 &= ~VAR_2;

  VAR_14 = FUNC_0(VAR_13, VAR_10, &VAR_17);
  if (VAR_14)
   return VAR_14;

  if (VAR_15 & VAR_7) {
   u16 VAR_18;

   VAR_16 |= VAR_1;
   VAR_17 &= ~VAR_11;

   VAR_14 = FUNC_0(VAR_13, VAR_8, &VAR_18);
   if (VAR_14)
    return VAR_14;
   VAR_18 &= ~VAR_9;
   VAR_14 = FUNC_1(VAR_13, VAR_8, VAR_18);
   if (VAR_14)
    return VAR_14;
  } else {
   VAR_16 |= VAR_0;
   VAR_17 |= VAR_11;
  }
  FUNC_3(VAR_3, VAR_16);
  VAR_14 = FUNC_1(VAR_13, VAR_10, VAR_17);
 }

 return VAR_14;
}
