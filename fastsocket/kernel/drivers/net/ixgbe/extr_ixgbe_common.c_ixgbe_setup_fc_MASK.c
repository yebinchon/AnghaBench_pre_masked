
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_10__ {int media_type; TYPE_4__ ops; } ;
struct TYPE_7__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_6__ {int requested_mode; scalar_t__ strict_ieee; } ;
struct ixgbe_hw {TYPE_5__ phy; TYPE_3__ mac; TYPE_1__ fc; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ixgbe_hw*,char*,...) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int VAR_15 ;




 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;




 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;
 int FUNC_9 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static s32 FUNC_10(struct ixgbe_hw *VAR_18)
{
 s32 VAR_19 = 0;
 u32 VAR_20 = 0, VAR_21 = 0;
 u16 VAR_22 = 0;
 bool VAR_23 = 0;





 if (VAR_18->fc.strict_ieee && VAR_18->fc.requested_mode == 133) {
  FUNC_2(VAR_18, "ixgbe_fc_rx_pause not valid in strict IEEE mode\n");
  VAR_19 = VAR_4;
  goto out;
 }





 if (VAR_18->fc.requested_mode == VAR_15)
  VAR_18->fc.requested_mode = 135;






 switch (VAR_18->phy.media_type) {
 case 128:
 case 129:
 case 131:
  VAR_20 = FUNC_0(VAR_18, VAR_6);
  VAR_21 = FUNC_0(VAR_18, VAR_0);
  break;
 case 130:
  VAR_18->phy.ops.read_reg(VAR_18, VAR_13,
     VAR_14, &VAR_22);
  break;
 default:
  break;
 }
 switch (VAR_18->fc.requested_mode) {
 case 134:

  VAR_20 &= ~(VAR_8 | VAR_7);
  if (VAR_18->phy.media_type == 131)
   VAR_21 &= ~(VAR_2 |
        VAR_1);
  else if (VAR_18->phy.media_type == 130)
   VAR_22 &= ~(VAR_12 | VAR_11);
  break;
 case 132:




  VAR_20 |= VAR_7;
  VAR_20 &= ~VAR_8;
  if (VAR_18->phy.media_type == 131) {
   VAR_21 |= VAR_1;
   VAR_21 &= ~VAR_2;
  } else if (VAR_18->phy.media_type == 130) {
   VAR_22 |= VAR_11;
   VAR_22 &= ~VAR_12;
  }
  break;
 case 133:
 case 135:

  VAR_20 |= VAR_8 | VAR_7;
  if (VAR_18->phy.media_type == 131)
   VAR_21 |= VAR_2 |
      VAR_1;
  else if (VAR_18->phy.media_type == 130)
   VAR_22 |= VAR_12 | VAR_11;
  break;
 default:
  FUNC_2(VAR_18, "Flow control param set incorrectly\n");
  VAR_19 = VAR_3;
  goto out;
  break;
 }

 if (VAR_18->mac.type != VAR_17) {




  FUNC_1(VAR_18, VAR_6, VAR_20);
  VAR_20 = FUNC_0(VAR_18, VAR_9);


  if (VAR_18->fc.strict_ieee)
   VAR_20 &= ~VAR_10;

  FUNC_1(VAR_18, VAR_9, VAR_20);
  FUNC_2(VAR_18, "Set up FC; PCS1GLCTL = 0x%08X\n", VAR_20);
 }






 if (VAR_18->phy.media_type == 131) {




  if ((VAR_18->mac.type == VAR_16) &&
      FUNC_5(VAR_18)) {
   VAR_19 = VAR_18->mac.ops.acquire_swfw_sync(VAR_18,
       VAR_5);
   if (VAR_19)
    goto out;

   VAR_23 = 1;
  }

  FUNC_1(VAR_18, VAR_0, VAR_21);

  if (VAR_18->mac.type == VAR_16)
   FUNC_4(VAR_18);

  if (VAR_23)
   VAR_18->mac.ops.release_swfw_sync(VAR_18,
            VAR_5);

 } else if ((VAR_18->phy.media_type == 130) &&
      FUNC_3(VAR_18)) {
  VAR_18->phy.ops.write_reg(VAR_18, VAR_13,
          VAR_14, VAR_22);
 }

 FUNC_2(VAR_18, "Set up FC; IXGBE_AUTOC = 0x%08X\n", VAR_20);
out:
 return VAR_19;
}
