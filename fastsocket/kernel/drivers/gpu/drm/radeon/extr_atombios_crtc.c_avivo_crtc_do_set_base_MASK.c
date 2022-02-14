
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct radeon_framebuffer {struct drm_gem_object* obj; } ;
struct radeon_device {scalar_t__ family; } ;
struct radeon_crtc {scalar_t__ crtc_id; scalar_t__ crtc_offset; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int bits_per_pixel; int width; int height; int* pitches; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {int hdisplay; int vdisplay; } ;
struct drm_crtc {struct drm_framebuffer* fb; TYPE_1__ mode; struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 struct radeon_bo* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_bo*,int*,int *) ;
 scalar_t__ FUNC_7 (struct radeon_bo*) ;
 int FUNC_8 (struct radeon_bo*,int ,scalar_t__*) ;
 int FUNC_9 (struct radeon_bo*,int) ;
 int FUNC_10 (struct radeon_bo*) ;
 int FUNC_11 (struct radeon_bo*) ;
 struct radeon_crtc* FUNC_12 (struct drm_crtc*) ;
 struct radeon_framebuffer* FUNC_13 (struct drm_framebuffer*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct drm_crtc *VAR_44,
      struct drm_framebuffer *VAR_45,
      int VAR_46, int VAR_47, int VAR_48)
{
 struct radeon_crtc *VAR_49 = FUNC_12(VAR_44);
 struct drm_device *VAR_50 = VAR_44->dev;
 struct radeon_device *VAR_51 = VAR_50->dev_private;
 struct radeon_framebuffer *VAR_52;
 struct drm_gem_object *VAR_53;
 struct radeon_bo *VAR_54;
 struct drm_framebuffer *VAR_55;
 uint64_t VAR_56;
 uint32_t VAR_57, VAR_58, VAR_59;
 u32 VAR_60 = VAR_36;
 u32 VAR_61, VAR_62, VAR_63;
 int VAR_64;


 if (!VAR_48 && !VAR_44->fb) {
  FUNC_0("No FB bound\n");
  return 0;
 }

 if (VAR_48) {
  VAR_52 = FUNC_13(VAR_45);
  VAR_55 = VAR_45;
 }
 else {
  VAR_52 = FUNC_13(VAR_44->fb);
  VAR_55 = VAR_44->fb;
 }

 VAR_53 = VAR_52->obj;
 VAR_54 = FUNC_4(VAR_53);
 VAR_64 = FUNC_9(VAR_54, 0);
 if (FUNC_14(VAR_64 != 0))
  return VAR_64;




 if (VAR_48)
  VAR_56 = FUNC_7(VAR_54);
 else {
  VAR_64 = FUNC_8(VAR_54, VAR_41, &VAR_56);
  if (FUNC_14(VAR_64 != 0)) {
   FUNC_11(VAR_54);
   return -VAR_30;
  }
 }
 FUNC_6(VAR_54, &VAR_59, ((void*)0));
 FUNC_11(VAR_54);

 switch (VAR_55->bits_per_pixel) {
 case 8:
  VAR_57 =
      VAR_7 |
      VAR_4;
  break;
 case 15:
  VAR_57 =
      VAR_5 |
      VAR_1;
  break;
 case 16:
  VAR_57 =
      VAR_5 |
      VAR_2;



  break;
 case 24:
 case 32:
  VAR_57 =
      VAR_6 |
      VAR_3;



  break;
 default:
  FUNC_1("Unsupported screen depth %d\n",
     VAR_55->bits_per_pixel);
  return -VAR_30;
 }

 if (VAR_51->family >= VAR_28) {
  if (VAR_59 & VAR_42)
   VAR_57 |= VAR_32;
  else if (VAR_59 & VAR_43)
   VAR_57 |= VAR_31;
 } else {
  if (VAR_59 & VAR_42)
   VAR_57 |= VAR_10;

  if (VAR_59 & VAR_43)
   VAR_57 |= VAR_17;
 }

 if (VAR_49->crtc_id == 0)
  FUNC_3(VAR_26, 0);
 else
  FUNC_3(VAR_27, 0);

 if (VAR_51->family >= VAR_29) {
  if (VAR_49->crtc_id) {
   FUNC_3(VAR_39, FUNC_15(VAR_56));
   FUNC_3(VAR_40, FUNC_15(VAR_56));
  } else {
   FUNC_3(VAR_37, FUNC_15(VAR_56));
   FUNC_3(VAR_38, FUNC_15(VAR_56));
  }
 }
 FUNC_3(VAR_12 + VAR_49->crtc_offset,
        (u32) VAR_56);
 FUNC_3(VAR_13 +
        VAR_49->crtc_offset, (u32) VAR_56);
 FUNC_3(VAR_0 + VAR_49->crtc_offset, VAR_57);
 if (VAR_51->family >= VAR_28)
  FUNC_3(VAR_33 + VAR_49->crtc_offset, VAR_60);

 FUNC_3(VAR_14 + VAR_49->crtc_offset, 0);
 FUNC_3(VAR_15 + VAR_49->crtc_offset, 0);
 FUNC_3(VAR_19 + VAR_49->crtc_offset, 0);
 FUNC_3(VAR_21 + VAR_49->crtc_offset, 0);
 FUNC_3(VAR_18 + VAR_49->crtc_offset, VAR_55->width);
 FUNC_3(VAR_20 + VAR_49->crtc_offset, VAR_55->height);

 VAR_58 = VAR_55->pitches[0] / (VAR_55->bits_per_pixel / 8);
 FUNC_3(VAR_11 + VAR_49->crtc_offset, VAR_58);
 FUNC_3(VAR_8 + VAR_49->crtc_offset, 1);

 FUNC_3(VAR_22 + VAR_49->crtc_offset,
        VAR_55->height);
 VAR_46 &= ~3;
 VAR_47 &= ~1;
 FUNC_3(VAR_25 + VAR_49->crtc_offset,
        (VAR_46 << 16) | VAR_47);
 VAR_62 = VAR_44->mode.hdisplay;
 VAR_63 = (VAR_44->mode.vdisplay + 1) & ~1;
 FUNC_3(VAR_24 + VAR_49->crtc_offset,
        (VAR_62 << 16) | VAR_63);



 VAR_61 = FUNC_2(VAR_9 + VAR_49->crtc_offset);
 VAR_61 &= ~VAR_16;
 FUNC_3(VAR_9 + VAR_49->crtc_offset, VAR_61);


 FUNC_3(VAR_23 + VAR_49->crtc_offset, 0);

 if (!VAR_48 && VAR_45 && VAR_45 != VAR_44->fb) {
  VAR_52 = FUNC_13(VAR_45);
  VAR_54 = FUNC_4(VAR_52->obj);
  VAR_64 = FUNC_9(VAR_54, 0);
  if (FUNC_14(VAR_64 != 0))
   return VAR_64;
  FUNC_10(VAR_54);
  FUNC_11(VAR_54);
 }


 FUNC_5(VAR_51);

 return 0;
}
