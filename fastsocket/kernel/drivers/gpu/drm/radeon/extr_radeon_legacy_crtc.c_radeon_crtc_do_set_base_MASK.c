
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct radeon_framebuffer {struct drm_gem_object* obj; } ;
struct TYPE_2__ {int vram_start; } ;
struct radeon_device {TYPE_1__ mc; } ;
struct radeon_crtc {int legacy_display_base_addr; int crtc_id; int crtc_offset; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int bits_per_pixel; int* pitches; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_framebuffer* fb; struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
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
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 struct radeon_bo* FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_bo*,int*,int *) ;
 int FUNC_8 (struct radeon_bo*,int ,int,int*) ;
 int FUNC_9 (struct radeon_bo*,int) ;
 int FUNC_10 (struct radeon_bo*) ;
 int FUNC_11 (struct radeon_bo*) ;
 struct radeon_crtc* FUNC_12 (struct drm_crtc*) ;
 struct radeon_framebuffer* FUNC_13 (struct drm_framebuffer*) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct drm_crtc *VAR_18,
    struct drm_framebuffer *VAR_19,
    int VAR_20, int VAR_21, int VAR_22)
{
 struct drm_device *VAR_23 = VAR_18->dev;
 struct radeon_device *VAR_24 = VAR_23->dev_private;
 struct radeon_crtc *VAR_25 = FUNC_12(VAR_18);
 struct radeon_framebuffer *VAR_26;
 struct drm_framebuffer *VAR_27;
 struct drm_gem_object *VAR_28;
 struct radeon_bo *VAR_29;
 uint64_t VAR_30;
 uint32_t VAR_31, VAR_32, VAR_33 = 0;
 uint32_t VAR_34, VAR_35;
 uint32_t VAR_36;
 int VAR_37;
 uint32_t VAR_38, VAR_39;
 int VAR_40;

 FUNC_1("\n");

 if (!VAR_22 && !VAR_18->fb) {
  FUNC_1("No FB bound\n");
  return 0;
 }

 if (VAR_22) {
  VAR_26 = FUNC_13(VAR_19);
  VAR_27 = VAR_19;
 }
 else {
  VAR_26 = FUNC_13(VAR_18->fb);
  VAR_27 = VAR_18->fb;
 }

 switch (VAR_27->bits_per_pixel) {
 case 8:
  VAR_37 = 2;
  break;
 case 15:
  VAR_37 = 3;
  break;
 case 16:
  VAR_37 = 4;
  break;
 case 24:
  VAR_37 = 5;
  break;
 case 32:
  VAR_37 = 6;
  break;
 default:
  return 0;
 }


 VAR_28 = VAR_26->obj;
 VAR_29 = FUNC_5(VAR_28);
 VAR_40 = FUNC_9(VAR_29, 0);
 if (FUNC_14(VAR_40 != 0))
  return VAR_40;

 VAR_40 = FUNC_8(VAR_29, VAR_15, 1 << 27,
         &VAR_30);
 if (FUNC_14(VAR_40 != 0)) {
  FUNC_11(VAR_29);
  return -VAR_0;
 }
 FUNC_7(VAR_29, &VAR_36, ((void*)0));
 FUNC_11(VAR_29);
 if (VAR_36 & VAR_17)
  FUNC_2("trying to scanout microtiled buffer\n");



 VAR_25->legacy_display_base_addr = VAR_24->mc.vram_start;

 VAR_30 -= VAR_25->legacy_display_base_addr;

 VAR_32 = 0;

 VAR_35 = VAR_27->pitches[0] / (VAR_27->bits_per_pixel / 8);
 VAR_34 = (((VAR_35 * VAR_27->bits_per_pixel) +
   ((VAR_27->bits_per_pixel * 8) - 1)) /
         (VAR_27->bits_per_pixel * 8));
 VAR_34 |= VAR_34 << 16;

 VAR_32 |= VAR_8;
 if (VAR_36 & VAR_16) {
  if (FUNC_0(VAR_24))
   VAR_32 |= (VAR_5 |
          VAR_3 |
          VAR_2);
  else
   VAR_32 |= VAR_12;
 } else {
  if (FUNC_0(VAR_24))
   VAR_32 &= ~(VAR_5 |
           VAR_3 |
           VAR_2);
  else
   VAR_32 &= ~VAR_12;
 }

 if (VAR_36 & VAR_16) {
  if (FUNC_0(VAR_24)) {
   VAR_33 = VAR_20 | (VAR_21 << 16);
   VAR_30 &= ~0x7ff;
  } else {
   int VAR_41 = VAR_27->bits_per_pixel >> 4;
   int VAR_42 = (((VAR_21 >> 3) * VAR_35 + VAR_20) >> (8 - VAR_41)) << 11;
   VAR_30 += VAR_42 + ((VAR_20 << VAR_41) % 256) + ((VAR_21 % 8) << 8);
   VAR_32 |= (VAR_21 % 16);
  }
 } else {
  int VAR_43 = VAR_21 * VAR_35 + VAR_20;
  switch (VAR_27->bits_per_pixel) {
  case 8:
   VAR_43 *= 1;
   break;
  case 15:
  case 16:
   VAR_43 *= 2;
   break;
  case 24:
   VAR_43 *= 3;
   break;
  case 32:
   VAR_43 *= 4;
   break;
  default:
   return 0;
  }
  VAR_30 += VAR_43;
 }

 VAR_30 &= ~7;

 if (VAR_25->crtc_id == 1)
  VAR_38 = VAR_6;
 else
  VAR_38 = VAR_7;

 VAR_39 = FUNC_3(VAR_38);
 VAR_39 &= ~(0xf << 8);
 VAR_39 |= (VAR_37 << 8);
 VAR_39 &= ~VAR_13;
 FUNC_4(VAR_38, VAR_39);

 VAR_31 = (u32)VAR_30;

 FUNC_4(VAR_14 + VAR_25->crtc_offset, VAR_25->legacy_display_base_addr);

 if (FUNC_0(VAR_24)) {
  if (VAR_25->crtc_id)
   FUNC_4(VAR_1, VAR_33);
  else
   FUNC_4(VAR_4, VAR_33);
 }
 FUNC_4(VAR_10 + VAR_25->crtc_offset, VAR_32);
 FUNC_4(VAR_9 + VAR_25->crtc_offset, VAR_31);
 FUNC_4(VAR_11 + VAR_25->crtc_offset, VAR_34);

 if (!VAR_22 && VAR_19 && VAR_19 != VAR_18->fb) {
  VAR_26 = FUNC_13(VAR_19);
  VAR_29 = FUNC_5(VAR_26->obj);
  VAR_40 = FUNC_9(VAR_29, 0);
  if (FUNC_14(VAR_40 != 0))
   return VAR_40;
  FUNC_10(VAR_29);
  FUNC_11(VAR_29);
 }


 FUNC_6(VAR_24);

 return 0;
}
