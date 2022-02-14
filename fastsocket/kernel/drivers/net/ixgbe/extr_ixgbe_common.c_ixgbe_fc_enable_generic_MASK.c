
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int low_water; int* high_water; int pause_time; int current_mode; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int VAR_12 ;
 int FUNC_6 (struct ixgbe_hw*,char*) ;
 int FUNC_7 (struct ixgbe_hw*) ;





s32 FUNC_8(struct ixgbe_hw *VAR_13)
{
 s32 VAR_14 = 0;
 u32 VAR_15, VAR_16;
 u32 VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20;






 if (!VAR_13->fc.low_water ||
     !VAR_13->fc.high_water[0] ||
     !VAR_13->fc.pause_time) {
  FUNC_6(VAR_13, "Invalid water mark configuration\n");
  VAR_14 = VAR_1;
  goto out;
 }


 FUNC_7(VAR_13);


 VAR_15 = FUNC_3(VAR_13, VAR_8);
 VAR_15 &= ~(VAR_11 | VAR_10);

 VAR_16 = FUNC_3(VAR_13, VAR_2);
 VAR_16 &= ~(VAR_3 | VAR_4);
 switch (VAR_13->fc.current_mode) {
 case 130:




  break;
 case 129:
  VAR_15 |= VAR_10;
  break;
 case 128:




  VAR_16 |= VAR_3;
  break;
 case 131:

  VAR_15 |= VAR_10;
  VAR_16 |= VAR_3;
  break;
 default:
  FUNC_6(VAR_13, "Flow control param set incorrectly\n");
  VAR_14 = VAR_0;
  goto out;
  break;
 }


 VAR_15 |= VAR_9;
 FUNC_5(VAR_13, VAR_8, VAR_15);
 FUNC_5(VAR_13, VAR_2, VAR_16);

 VAR_18 = (VAR_13->fc.low_water << 10) | VAR_6;


 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  if ((VAR_13->fc.current_mode & 128) &&
      VAR_13->fc.high_water[VAR_20]) {
   FUNC_5(VAR_13, FUNC_1(VAR_20), VAR_18);
   VAR_19 = (VAR_13->fc.high_water[VAR_20] << 10) | VAR_5;
  } else {
   FUNC_5(VAR_13, FUNC_1(VAR_20), 0);






   VAR_19 = FUNC_3(VAR_13, FUNC_4(VAR_20)) - 32;
  }

  FUNC_5(VAR_13, FUNC_0(VAR_20), VAR_19);
 }


 VAR_17 = VAR_13->fc.pause_time * 0x00010001;
 for (VAR_20 = 0; VAR_20 < (VAR_12 / 2); VAR_20++)
  FUNC_5(VAR_13, FUNC_2(VAR_20), VAR_17);

 FUNC_5(VAR_13, VAR_7, VAR_13->fc.pause_time / 2);

out:
 return VAR_14;
}
