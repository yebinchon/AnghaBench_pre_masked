
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {int bit_6_swizzle_x; int bit_6_swizzle_y; } ;
struct TYPE_5__ {TYPE_1__ mm; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_6__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 scalar_t__ FUNC_8 (struct drm_device*) ;
 scalar_t__ FUNC_9 (struct drm_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_10(struct drm_device *VAR_18)
{
 drm_i915_private_t *VAR_19 = VAR_18->dev_private;
 uint32_t VAR_20 = VAR_13;
 uint32_t VAR_21 = VAR_13;

 if (FUNC_9(VAR_18)) {
  VAR_20 = VAR_12;
  VAR_21 = VAR_12;
 } else if (FUNC_3(VAR_18)->gen >= 6) {
  uint32_t VAR_22, VAR_23;
  VAR_22 = FUNC_1(VAR_16);
  VAR_23 = FUNC_1(VAR_17);
  VAR_22 &= VAR_14 | VAR_15;
  VAR_23 &= VAR_14 | VAR_15;





  if (VAR_22 == VAR_23) {
   VAR_20 = VAR_7;
   VAR_21 = VAR_6;
  } else {
   VAR_20 = VAR_12;
   VAR_21 = VAR_12;
  }
 } else if (FUNC_7(VAR_18)) {



  VAR_20 = VAR_7;
  VAR_21 = VAR_6;
 } else if (FUNC_5(VAR_18)) {



  VAR_20 = VAR_12;
  VAR_21 = VAR_12;
 } else if (FUNC_8(VAR_18) || (FUNC_6(VAR_18) && !FUNC_4(VAR_18))) {
  uint32_t VAR_24;
  VAR_24 = FUNC_1(VAR_2);
  switch (VAR_24 & VAR_3) {
  case 128:
  case 130:
   VAR_20 = VAR_12;
   VAR_21 = VAR_12;
   break;
  case 129:
   if (VAR_24 & VAR_5) {



    VAR_20 = VAR_7;
    VAR_21 = VAR_6;
   } else if ((VAR_24 & VAR_4) == 0) {

    VAR_20 = VAR_8;
    VAR_21 = VAR_10;
   } else {

    VAR_20 = VAR_9;
    VAR_21 = VAR_11;
   }
   break;
  }
  if (VAR_24 == 0xffffffff) {
   FUNC_0("Couldn't read from MCHBAR.  "
      "Disabling tiling.\n");
   VAR_20 = VAR_13;
   VAR_21 = VAR_13;
  }
 } else {
  if (FUNC_2(VAR_0) != FUNC_2(VAR_1)) {
   VAR_20 = VAR_12;
   VAR_21 = VAR_12;
  } else {
   VAR_20 = VAR_7;
   VAR_21 = VAR_6;
  }
 }

 VAR_19->mm.bit_6_swizzle_x = VAR_20;
 VAR_19->mm.bit_6_swizzle_y = VAR_21;
}
