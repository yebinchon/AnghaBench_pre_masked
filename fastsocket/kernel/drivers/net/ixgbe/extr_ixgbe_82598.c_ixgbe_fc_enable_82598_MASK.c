
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int low_water; int* high_water; int pause_time; int requested_mode; int current_mode; } ;
struct TYPE_4__ {int (* check_link ) (struct ixgbe_hw*,scalar_t__*,int*,int) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 int VAR_13 ;
 int FUNC_5 (struct ixgbe_hw*,char*) ;
 int FUNC_6 (struct ixgbe_hw*) ;




 int FUNC_7 (struct ixgbe_hw*,scalar_t__*,int*,int) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_14)
{
 s32 VAR_15 = 0;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21 = 0;
 int VAR_22;
 bool VAR_23;






 if (!VAR_14->fc.low_water ||
     !VAR_14->fc.high_water[0] ||
     !VAR_14->fc.pause_time) {
  FUNC_5(VAR_14, "Invalid water mark configuration\n");
  VAR_15 = VAR_1;
  goto out;
 }






 VAR_14->mac.ops.check_link(VAR_14, &VAR_21, &VAR_23, 0);
 if (VAR_23 && VAR_21 == VAR_9) {
  switch (VAR_14->fc.requested_mode) {
  case 131:
   VAR_14->fc.requested_mode = 128;
   break;
  case 129:
   VAR_14->fc.requested_mode = 130;
   break;
  default:

   break;
  }
 }


 FUNC_6(VAR_14);


 VAR_16 = FUNC_3(VAR_14, VAR_5);
 VAR_16 &= ~(VAR_7 | VAR_8);

 VAR_17 = FUNC_3(VAR_14, VAR_10);
 VAR_17 &= ~(VAR_12 | VAR_11);
 switch (VAR_14->fc.current_mode) {
 case 130:




  break;
 case 129:
  VAR_16 |= VAR_7;
  break;
 case 128:




  VAR_17 |= VAR_11;
  break;
 case 131:

  VAR_16 |= VAR_7;
  VAR_17 |= VAR_11;
  break;
 default:
  FUNC_5(VAR_14, "Flow control param set incorrectly\n");
  VAR_15 = VAR_0;
  goto out;
  break;
 }


 VAR_16 |= VAR_6;
 FUNC_4(VAR_14, VAR_5, VAR_16);
 FUNC_4(VAR_14, VAR_10, VAR_17);

 VAR_19 = (VAR_14->fc.low_water << 10) | VAR_3;


 for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++) {
  if ((VAR_14->fc.current_mode & 128) &&
      VAR_14->fc.high_water[VAR_22]) {
   VAR_20 = (VAR_14->fc.high_water[VAR_22] << 10) | VAR_2;
   FUNC_4(VAR_14, FUNC_1(VAR_22), VAR_19);
   FUNC_4(VAR_14, FUNC_0(VAR_22), VAR_20);
  } else {
   FUNC_4(VAR_14, FUNC_1(VAR_22), 0);
   FUNC_4(VAR_14, FUNC_0(VAR_22), 0);
  }

 }


 VAR_18 = VAR_14->fc.pause_time * 0x00010001;
 for (VAR_22 = 0; VAR_22 < (VAR_13 / 2); VAR_22++)
  FUNC_4(VAR_14, FUNC_2(VAR_22), VAR_18);


 FUNC_4(VAR_14, VAR_4, VAR_14->fc.pause_time / 2);

out:
 return VAR_15;
}
