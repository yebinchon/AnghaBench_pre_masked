
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ sfp_type; scalar_t__ multispeed_fiber; } ;
struct TYPE_3__ {int orig_autoc; scalar_t__ orig_link_settings_stored; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


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
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_16,
                                             ixgbe_link_speed *VAR_17,
          bool *VAR_18)
{
 s32 VAR_19 = 0;
 u32 VAR_20 = 0;


 if (VAR_16->phy.sfp_type == VAR_10 ||
     VAR_16->phy.sfp_type == VAR_11 ||
     VAR_16->phy.sfp_type == VAR_12 ||
     VAR_16->phy.sfp_type == VAR_13 ||
     VAR_16->phy.sfp_type == VAR_14 ||
     VAR_16->phy.sfp_type == VAR_15) {
  *VAR_17 = VAR_8;
  *VAR_18 = 1;
  goto out;
 }






 if (VAR_16->mac.orig_link_settings_stored)
  VAR_20 = VAR_16->mac.orig_autoc;
 else
  VAR_20 = FUNC_0(VAR_16, VAR_0);

 switch (VAR_20 & VAR_4) {
 case 132:
  *VAR_17 = VAR_8;
  *VAR_18 = 0;
  break;

 case 135:
  *VAR_17 = VAR_7;
  *VAR_18 = 0;
  break;

 case 133:
  *VAR_17 = VAR_8;
  *VAR_18 = 1;
  break;

 case 134:
  *VAR_17 = VAR_7;
  *VAR_18 = 0;
  break;

 case 131:
 case 130:
  *VAR_17 = VAR_9;
  if (VAR_20 & VAR_1)
   *VAR_17 |= VAR_7;
  if (VAR_20 & VAR_2)
   *VAR_17 |= VAR_7;
  if (VAR_20 & VAR_3)
   *VAR_17 |= VAR_8;
  *VAR_18 = 1;
  break;

 case 129:
  *VAR_17 = VAR_6;
  if (VAR_20 & VAR_1)
   *VAR_17 |= VAR_7;
  if (VAR_20 & VAR_2)
   *VAR_17 |= VAR_7;
  if (VAR_20 & VAR_3)
   *VAR_17 |= VAR_8;
  *VAR_18 = 1;
  break;

 case 128:
  *VAR_17 = VAR_8 | VAR_6;
  *VAR_18 = 0;
  break;

 default:
  VAR_19 = VAR_5;
  goto out;
  break;
 }

 if (VAR_16->phy.multispeed_fiber) {
  *VAR_17 |= VAR_7 |
            VAR_8;
  *VAR_18 = 1;
 }

out:
 return VAR_19;
}
