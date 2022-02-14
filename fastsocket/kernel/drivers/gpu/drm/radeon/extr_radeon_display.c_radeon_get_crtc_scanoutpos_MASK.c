
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {TYPE_3__** crtcs; } ;
struct radeon_device {TYPE_4__ mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_5__ {int crtc_vdisplay; int crtc_vtotal; } ;
struct TYPE_6__ {TYPE_1__ hwmode; } ;
struct TYPE_7__ {TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct drm_device *VAR_24, int VAR_25, int *VAR_26, int *VAR_27)
{
 u32 VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;
 int VAR_31, VAR_32, VAR_33, VAR_34 = 0;
 bool VAR_35 = 1;

 struct radeon_device *VAR_36 = VAR_24->dev_private;

 if (FUNC_1(VAR_36)) {
  if (VAR_25 == 0) {
   VAR_29 = FUNC_2(VAR_14 +
         VAR_7);
   VAR_30 = FUNC_2(VAR_13 +
       VAR_7);
   VAR_34 |= VAR_6;
  }
  if (VAR_25 == 1) {
   VAR_29 = FUNC_2(VAR_14 +
         VAR_8);
   VAR_30 = FUNC_2(VAR_13 +
       VAR_8);
   VAR_34 |= VAR_6;
  }
  if (VAR_25 == 2) {
   VAR_29 = FUNC_2(VAR_14 +
         VAR_9);
   VAR_30 = FUNC_2(VAR_13 +
       VAR_9);
   VAR_34 |= VAR_6;
  }
  if (VAR_25 == 3) {
   VAR_29 = FUNC_2(VAR_14 +
         VAR_10);
   VAR_30 = FUNC_2(VAR_13 +
       VAR_10);
   VAR_34 |= VAR_6;
  }
  if (VAR_25 == 4) {
   VAR_29 = FUNC_2(VAR_14 +
         VAR_11);
   VAR_30 = FUNC_2(VAR_13 +
       VAR_11);
   VAR_34 |= VAR_6;
  }
  if (VAR_25 == 5) {
   VAR_29 = FUNC_2(VAR_14 +
         VAR_12);
   VAR_30 = FUNC_2(VAR_13 +
       VAR_12);
   VAR_34 |= VAR_6;
  }
 } else if (FUNC_0(VAR_36)) {
  if (VAR_25 == 0) {
   VAR_29 = FUNC_2(VAR_1);
   VAR_30 = FUNC_2(VAR_0);
   VAR_34 |= VAR_6;
  }
  if (VAR_25 == 1) {
   VAR_29 = FUNC_2(VAR_3);
   VAR_30 = FUNC_2(VAR_2);
   VAR_34 |= VAR_6;
  }
 } else {

  if (VAR_25 == 0) {



   VAR_29 = (FUNC_2(VAR_23) &
    VAR_20) >> VAR_21;

   VAR_30 = (FUNC_2(VAR_19) >> 16) & VAR_22;
   VAR_28 = FUNC_2(VAR_18);
   if (!(VAR_28 & 1))
    VAR_35 = 0;

   VAR_34 |= VAR_6;
  }
  if (VAR_25 == 1) {
   VAR_29 = (FUNC_2(VAR_17) &
    VAR_20) >> VAR_21;
   VAR_30 = (FUNC_2(VAR_16) >> 16) & VAR_22;
   VAR_28 = FUNC_2(VAR_15);
   if (!(VAR_28 & 1))
    VAR_35 = 0;

   VAR_34 |= VAR_6;
  }
 }


 *VAR_26 = VAR_30 & 0x1fff;
 *VAR_27 = (VAR_30 >> 16) & 0x1fff;


 if (VAR_29 > 0) {

  VAR_34 |= VAR_4;
  VAR_31 = VAR_29 & 0x1fff;
  VAR_32 = (VAR_29 >> 16) & 0x1fff;
 }
 else {

  VAR_31 = VAR_36->mode_info.crtcs[VAR_25]->base.hwmode.crtc_vdisplay;
  VAR_32 = 0;
 }


 if ((*VAR_26 < VAR_31) && (*VAR_26 >= VAR_32))
  VAR_35 = 0;
 if (VAR_35 && (*VAR_26 >= VAR_31)) {
  VAR_33 = VAR_36->mode_info.crtcs[VAR_25]->base.hwmode.crtc_vtotal;
  *VAR_26 = *VAR_26 - VAR_33;
 }


 *VAR_26 = *VAR_26 - VAR_32;


 if (VAR_35)
  VAR_34 |= VAR_5;

 return VAR_34;
}
