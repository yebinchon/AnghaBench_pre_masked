
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int num_crtc; int usec_timeout; } ;
struct evergreen_mc_save {int vga_render_control; int vga_hdp_control; int* crtc_enabled; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__* VAR_14 ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct radeon_device *VAR_15, struct evergreen_mc_save *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;

 VAR_16->vga_render_control = FUNC_1(VAR_13);
 VAR_16->vga_hdp_control = FUNC_1(VAR_12);


 FUNC_2(VAR_13, 0);

 for (VAR_21 = 0; VAR_21 < VAR_15->num_crtc; VAR_21++) {
  VAR_17 = FUNC_1(VAR_4 + VAR_14[VAR_21]) & VAR_6;
  if (VAR_17) {
   VAR_16->crtc_enabled[VAR_21] = 1;
   if (FUNC_0(VAR_15)) {
    VAR_18 = FUNC_1(VAR_2 + VAR_14[VAR_21]);
    if (!(VAR_18 & VAR_3)) {
     FUNC_5(VAR_15, VAR_21);
     FUNC_2(VAR_7 + VAR_14[VAR_21], 1);
     VAR_18 |= VAR_3;
     FUNC_2(VAR_2 + VAR_14[VAR_21], VAR_18);
    }
   } else {
    VAR_18 = FUNC_1(VAR_4 + VAR_14[VAR_21]);
    if (!(VAR_18 & VAR_5)) {
     FUNC_5(VAR_15, VAR_21);
     FUNC_2(VAR_7 + VAR_14[VAR_21], 1);
     VAR_18 |= VAR_5;
     FUNC_2(VAR_4 + VAR_14[VAR_21], VAR_18);
     FUNC_2(VAR_7 + VAR_14[VAR_21], 0);
    }
   }

   VAR_19 = FUNC_3(VAR_15, VAR_21);
   for (VAR_22 = 0; VAR_22 < VAR_15->usec_timeout; VAR_22++) {
    if (FUNC_3(VAR_15, VAR_21) != VAR_19)
     break;
    FUNC_6(1);
   }


   FUNC_2(VAR_7 + VAR_14[VAR_21], 1);
   VAR_18 = FUNC_1(VAR_4 + VAR_14[VAR_21]);
   VAR_18 &= ~VAR_6;
   FUNC_2(VAR_4 + VAR_14[VAR_21], VAR_18);
   FUNC_2(VAR_7 + VAR_14[VAR_21], 0);
   VAR_16->crtc_enabled[VAR_21] = 0;

  } else {
   VAR_16->crtc_enabled[VAR_21] = 0;
  }
 }

 FUNC_4(VAR_15);

 VAR_20 = FUNC_1(VAR_11);
 if ((VAR_20 & VAR_1) != 1) {

  FUNC_2(VAR_0, 0);

  VAR_20 &= ~VAR_1;
  FUNC_2(VAR_11, VAR_20 | 1);
 }

 FUNC_6(100);


 for (VAR_21 = 0; VAR_21 < VAR_15->num_crtc; VAR_21++) {
  if (VAR_16->crtc_enabled[VAR_21]) {
   VAR_18 = FUNC_1(VAR_8 + VAR_14[VAR_21]);
   if (!(VAR_18 & VAR_9)) {
    VAR_18 |= VAR_9;
    FUNC_2(VAR_8 + VAR_14[VAR_21], VAR_18);
   }
   VAR_18 = FUNC_1(VAR_10 + VAR_14[VAR_21]);
   if (!(VAR_18 & 1)) {
    VAR_18 |= 1;
    FUNC_2(VAR_10 + VAR_14[VAR_21], VAR_18);
   }
  }
 }
}
