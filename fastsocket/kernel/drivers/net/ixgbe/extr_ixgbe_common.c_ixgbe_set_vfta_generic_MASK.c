
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 int FUNC_5 (struct ixgbe_hw*,int) ;

s32 FUNC_6(struct ixgbe_hw *VAR_4, u32 VAR_5, u32 VAR_6,
                           bool VAR_7)
{
 s32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 bool VAR_14 = 0;

 if (VAR_5 > 4095)
  return VAR_0;
 VAR_8 = (VAR_5 >> 5) & 0x7F;
 VAR_9 = VAR_5 & 0x1F;
 VAR_13 = (1 << VAR_9);
 VAR_10 = FUNC_0(VAR_4, FUNC_1(VAR_8));

 if (VAR_7) {
  if (!(VAR_10 & VAR_13)) {
   VAR_10 |= VAR_13;
   VAR_14 = 1;
  }
 } else {
  if ((VAR_10 & VAR_13)) {
   VAR_10 &= ~VAR_13;
   VAR_14 = 1;
  }
 }
 VAR_12 = FUNC_0(VAR_4, VAR_2);
 if (VAR_12 & VAR_3) {
  s32 VAR_15;

  VAR_15 = FUNC_5(VAR_4, VAR_5);
  if (VAR_15 < 0)
   return VAR_15;

  if (VAR_7) {

   if (VAR_6 < 32) {
    VAR_11 = FUNC_0(VAR_4,
      FUNC_3(VAR_15*2));
    VAR_11 |= (1 << VAR_6);
    FUNC_4(VAR_4,
      FUNC_3(VAR_15*2),
      VAR_11);
   } else {
    VAR_11 = FUNC_0(VAR_4,
      FUNC_3((VAR_15*2)+1));
    VAR_11 |= (1 << (VAR_6-32));
    FUNC_4(VAR_4,
      FUNC_3((VAR_15*2)+1),
      VAR_11);
   }
  } else {

   if (VAR_6 < 32) {
    VAR_11 = FUNC_0(VAR_4,
      FUNC_3(VAR_15*2));
    VAR_11 &= ~(1 << VAR_6);
    FUNC_4(VAR_4,
      FUNC_3(VAR_15*2),
      VAR_11);
    VAR_11 |= FUNC_0(VAR_4,
      FUNC_3((VAR_15*2)+1));
   } else {
    VAR_11 = FUNC_0(VAR_4,
      FUNC_3((VAR_15*2)+1));
    VAR_11 &= ~(1 << (VAR_6-32));
    FUNC_4(VAR_4,
      FUNC_3((VAR_15*2)+1),
      VAR_11);
    VAR_11 |= FUNC_0(VAR_4,
      FUNC_3(VAR_15*2));
   }
  }
  if (VAR_11) {
   FUNC_4(VAR_4, FUNC_2(VAR_15),
     (VAR_1 | VAR_5));
   if (!VAR_7) {



    VAR_14 = 0;
   }
  }
  else
   FUNC_4(VAR_4, FUNC_2(VAR_15), 0);
 }

 if (VAR_14)
  FUNC_4(VAR_4, FUNC_1(VAR_8), VAR_10);

 return 0;
}
