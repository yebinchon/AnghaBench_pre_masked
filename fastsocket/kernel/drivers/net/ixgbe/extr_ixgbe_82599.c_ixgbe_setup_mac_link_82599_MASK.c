
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_6__ {int orig_autoc; int cached_autoc; TYPE_2__ ops; scalar_t__ orig_link_settings_stored; } ;
struct TYPE_4__ {int smart_speed_active; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int*,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static s32 FUNC_9(struct ixgbe_hw *VAR_26,
          ixgbe_link_speed VAR_27,
          bool VAR_28)
{
 s32 VAR_29 = 0;
 u32 VAR_30, VAR_31, VAR_32, VAR_33;
 u32 VAR_34 = FUNC_0(VAR_26, VAR_1);
 u32 VAR_35 = 0;
 u32 VAR_36 = VAR_34 & VAR_2;
 u32 VAR_37;
 u32 VAR_38;
 ixgbe_link_speed VAR_39 = VAR_25;
 bool VAR_40 = 0;
 bool VAR_41 = 0;


 VAR_29 = VAR_26->mac.ops.get_link_capabilities(VAR_26, &VAR_39,
         &VAR_41);
 if (VAR_29 != 0)
  goto out;

 VAR_27 &= VAR_39;

 if (VAR_27 == VAR_25) {
  VAR_29 = VAR_19;
  goto out;
 }


 if (VAR_26->mac.orig_link_settings_stored)
  VAR_30 = VAR_26->mac.orig_autoc;
 else
  VAR_30 = FUNC_0(VAR_26, VAR_0);

 VAR_35 = VAR_30;
 VAR_33 = VAR_26->mac.cached_autoc;
 VAR_32 = VAR_30 & VAR_16;
 VAR_31 = VAR_30 & VAR_4;

 if (VAR_32 == VAR_13 ||
     VAR_32 == VAR_14 ||
     VAR_32 == VAR_15) {

  VAR_30 &= ~(VAR_7 | VAR_6);
  if (VAR_27 & VAR_23) {
   if (VAR_35 & VAR_8)
    VAR_30 |= VAR_8;
   if ((VAR_35 & VAR_6) &&
       (VAR_26->phy.smart_speed_active == 0))
    VAR_30 |= VAR_6;
  }
  if (VAR_27 & VAR_24)
   VAR_30 |= VAR_9;
 } else if ((VAR_31 == VAR_5) &&
            (VAR_32 == VAR_12 ||
             VAR_32 == VAR_11)) {

  if ((VAR_27 == VAR_23) &&
      (VAR_36 == VAR_3)) {
   VAR_30 &= ~VAR_16;
   VAR_30 |= VAR_10;
  }
 } else if ((VAR_36 == VAR_3) &&
            (VAR_32 == VAR_10)) {

  if ((VAR_27 == VAR_24) &&
      (VAR_31 == VAR_5)) {
   VAR_30 &= ~VAR_16;
   if (VAR_41)
    VAR_30 |= VAR_11;
   else
    VAR_30 |= VAR_12;
  }
 }

 if (VAR_30 != VAR_33) {




  if (FUNC_4(VAR_26)) {
   VAR_29 = VAR_26->mac.ops.acquire_swfw_sync(VAR_26,
       VAR_20);
   if (VAR_29 != 0)
    goto out;

   VAR_40 = 1;
  }


  FUNC_1(VAR_26, VAR_0, VAR_30);
  VAR_26->mac.cached_autoc = VAR_30;
  FUNC_3(VAR_26);

  if (VAR_40)
   VAR_26->mac.ops.release_swfw_sync(VAR_26,
            VAR_20);


  if (VAR_28) {
   if (VAR_32 == VAR_13 ||
       VAR_32 == VAR_14 ||
       VAR_32 == VAR_15) {
    VAR_37 = 0;
    for (VAR_38 = 0; VAR_38 < VAR_17; VAR_38++) {
     VAR_37 =
            FUNC_0(VAR_26, VAR_21);
     if (VAR_37 & VAR_22)
      break;
     FUNC_5(100);
    }
    if (!(VAR_37 & VAR_22)) {
     VAR_29 =
             VAR_18;
     FUNC_2(VAR_26, "Autoneg did not "
            "complete.\n");
    }
   }
  }


  FUNC_5(50);
 }

out:
 return VAR_29;
}
