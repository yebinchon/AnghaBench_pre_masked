
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ vram_start; } ;
struct radeon_device {int num_crtc; int usec_timeout; TYPE_1__ mc; } ;
struct evergreen_mc_save {int vga_hdp_control; int vga_render_control; scalar_t__* crtc_enabled; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__* VAR_23 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct radeon_device *VAR_24, struct evergreen_mc_save *VAR_25)
{
 u32 VAR_26, VAR_27;
 int VAR_28, VAR_29;


 for (VAR_28 = 0; VAR_28 < VAR_24->num_crtc; VAR_28++) {
  FUNC_2(VAR_8 + VAR_23[VAR_28],
         FUNC_6(VAR_24->mc.vram_start));
  FUNC_2(VAR_10 + VAR_23[VAR_28],
         FUNC_6(VAR_24->mc.vram_start));
  FUNC_2(VAR_7 + VAR_23[VAR_28],
         (u32)VAR_24->mc.vram_start);
  FUNC_2(VAR_9 + VAR_23[VAR_28],
         (u32)VAR_24->mc.vram_start);
 }
 FUNC_2(VAR_17, FUNC_6(VAR_24->mc.vram_start));
 FUNC_2(VAR_16, (u32)VAR_24->mc.vram_start);


 for (VAR_28 = 0; VAR_28 < VAR_24->num_crtc; VAR_28++) {
  if (VAR_25->crtc_enabled[VAR_28]) {
   VAR_26 = FUNC_1(VAR_15 + VAR_23[VAR_28]);
   if ((VAR_26 & 0x3) != 0) {
    VAR_26 &= ~0x3;
    FUNC_2(VAR_15 + VAR_23[VAR_28], VAR_26);
   }
   VAR_26 = FUNC_1(VAR_12 + VAR_23[VAR_28]);
   if (VAR_26 & VAR_13) {
    VAR_26 &= ~VAR_13;
    FUNC_2(VAR_12 + VAR_23[VAR_28], VAR_26);
   }
   VAR_26 = FUNC_1(VAR_14 + VAR_23[VAR_28]);
   if (VAR_26 & 1) {
    VAR_26 &= ~1;
    FUNC_2(VAR_14 + VAR_23[VAR_28], VAR_26);
   }
   for (VAR_29 = 0; VAR_29 < VAR_24->usec_timeout; VAR_29++) {
    VAR_26 = FUNC_1(VAR_12 + VAR_23[VAR_28]);
    if ((VAR_26 & VAR_11) == 0)
     break;
    FUNC_5(1);
   }
  }
 }


 VAR_26 = FUNC_1(VAR_20);
 VAR_26 &= ~VAR_1;
 FUNC_2(VAR_20, VAR_26);

 FUNC_2(VAR_0, VAR_18 | VAR_19);

 for (VAR_28 = 0; VAR_28 < VAR_24->num_crtc; VAR_28++) {
  if (VAR_25->crtc_enabled[VAR_28]) {
   if (FUNC_0(VAR_24)) {
    VAR_26 = FUNC_1(VAR_2 + VAR_23[VAR_28]);
    VAR_26 |= VAR_3;
    FUNC_2(VAR_6 + VAR_23[VAR_28], 1);
    FUNC_2(VAR_2 + VAR_23[VAR_28], VAR_26);
    FUNC_2(VAR_6 + VAR_23[VAR_28], 0);
   } else {
    VAR_26 = FUNC_1(VAR_4 + VAR_23[VAR_28]);
    VAR_26 &= ~VAR_5;
    FUNC_2(VAR_6 + VAR_23[VAR_28], 1);
    FUNC_2(VAR_4 + VAR_23[VAR_28], VAR_26);
    FUNC_2(VAR_6 + VAR_23[VAR_28], 0);
   }

   VAR_27 = FUNC_4(VAR_24, VAR_28);
   for (VAR_29 = 0; VAR_29 < VAR_24->usec_timeout; VAR_29++) {
    if (FUNC_4(VAR_24, VAR_28) != VAR_27)
     break;
    FUNC_5(1);
   }
  }
 }

 FUNC_2(VAR_21, VAR_25->vga_hdp_control);
 FUNC_3(1);
 FUNC_2(VAR_22, VAR_25->vga_render_control);
}
