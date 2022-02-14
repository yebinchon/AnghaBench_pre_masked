
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ath_hw {int curchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
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


 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (int ,char*,int,int) ;

u16 FUNC_5(struct ath_hw *VAR_13,
      u8 VAR_14, int VAR_15,
      u32 VAR_16, u16 VAR_17,
      bool VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 if (VAR_15 == 0)
  return 0;

 switch (VAR_14) {
 case 129:
  VAR_22 = VAR_1 + VAR_0;
  if (VAR_18)
   VAR_22 >>= 1;
  VAR_20 = VAR_16 << 3;
  VAR_23 = VAR_2 + VAR_22 + ((VAR_20 * 1000) / VAR_15);
  break;
 case 128:
  if (VAR_13->curchan && FUNC_2(VAR_13->curchan)) {
   VAR_19 = (VAR_15 * VAR_12) / 1000;
   VAR_20 = VAR_3 + (VAR_16 << 3);
   VAR_21 = FUNC_0(VAR_20, VAR_19);
   VAR_23 = VAR_9
    + VAR_6
    + (VAR_21 * VAR_12);
  } else if (VAR_13->curchan &&
      FUNC_1(VAR_13->curchan)) {
   VAR_19 = (VAR_15 * VAR_11) / 1000;
   VAR_20 = VAR_3 + (VAR_16 << 3);
   VAR_21 = FUNC_0(VAR_20, VAR_19);
   VAR_23 = VAR_8 +
    VAR_5
    + (VAR_21 * VAR_11);
  } else {
   VAR_19 = (VAR_15 * VAR_10) / 1000;
   VAR_20 = VAR_3 + (VAR_16 << 3);
   VAR_21 = FUNC_0(VAR_20, VAR_19);
   VAR_23 = VAR_7 + VAR_4
    + (VAR_21 * VAR_10);
  }
  break;
 default:
  FUNC_4(FUNC_3(VAR_13),
   "Unknown phy %u (rate ix %u)\n", VAR_14, VAR_17);
  VAR_23 = 0;
  break;
 }

 return VAR_23;
}
