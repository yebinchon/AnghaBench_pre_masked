
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct radeon_framebuffer {struct drm_gem_object* obj; } ;
struct TYPE_9__ {int tile_config; } ;
struct TYPE_8__ {int tile_config; } ;
struct TYPE_7__ {int tile_config; } ;
struct TYPE_10__ {TYPE_4__ evergreen; TYPE_3__ cayman; TYPE_2__ si; } ;
struct radeon_device {scalar_t__ family; TYPE_5__ config; } ;
struct radeon_crtc {int crtc_id; scalar_t__ crtc_offset; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int bits_per_pixel; int width; int height; int* pitches; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_6__ {int hdisplay; int vdisplay; } ;
struct drm_crtc {struct drm_framebuffer* fb; TYPE_1__ mode; struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ VAR_17 ;
 int FUNC_5 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_25 ;
 int FUNC_7 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_11 (scalar_t__) ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 struct radeon_bo* FUNC_15 (struct drm_gem_object*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_bo*,int*,int *) ;
 scalar_t__ FUNC_18 (struct radeon_bo*) ;
 int FUNC_19 (struct radeon_bo*,int ,scalar_t__*) ;
 int FUNC_20 (struct radeon_bo*,int) ;
 int FUNC_21 (struct radeon_bo*) ;
 int FUNC_22 (struct radeon_bo*) ;
 struct radeon_crtc* FUNC_23 (struct drm_crtc*) ;
 struct radeon_framebuffer* FUNC_24 (struct drm_framebuffer*) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (scalar_t__) ;

__attribute__((used)) static int FUNC_27(struct drm_crtc *VAR_52,
     struct drm_framebuffer *VAR_53,
     int VAR_54, int VAR_55, int VAR_56)
{
 struct radeon_crtc *VAR_57 = FUNC_23(VAR_52);
 struct drm_device *VAR_58 = VAR_52->dev;
 struct radeon_device *VAR_59 = VAR_58->dev_private;
 struct radeon_framebuffer *VAR_60;
 struct drm_framebuffer *VAR_61;
 struct drm_gem_object *VAR_62;
 struct radeon_bo *VAR_63;
 uint64_t VAR_64;
 uint32_t VAR_65, VAR_66, VAR_67;
 unsigned VAR_68, VAR_69, VAR_70, VAR_71;
 u32 VAR_72 = FUNC_6(VAR_24);
 u32 VAR_73, VAR_74, VAR_75;
 int VAR_76;


 if (!VAR_56 && !VAR_52->fb) {
  FUNC_0("No FB bound\n");
  return 0;
 }

 if (VAR_56) {
  VAR_60 = FUNC_24(VAR_53);
  VAR_61 = VAR_53;
 }
 else {
  VAR_60 = FUNC_24(VAR_52->fb);
  VAR_61 = VAR_52->fb;
 }




 VAR_62 = VAR_60->obj;
 VAR_63 = FUNC_15(VAR_62);
 VAR_76 = FUNC_20(VAR_63, 0);
 if (FUNC_25(VAR_76 != 0))
  return VAR_76;

 if (VAR_56)
  VAR_64 = FUNC_18(VAR_63);
 else {
  VAR_76 = FUNC_19(VAR_63, VAR_47, &VAR_64);
  if (FUNC_25(VAR_76 != 0)) {
   FUNC_22(VAR_63);
   return -VAR_6;
  }
 }

 FUNC_17(VAR_63, &VAR_67, ((void*)0));
 FUNC_22(VAR_63);

 switch (VAR_61->bits_per_pixel) {
 case 8:
  VAR_65 = (FUNC_5(VAR_20) |
        FUNC_7(VAR_29));
  break;
 case 15:
  VAR_65 = (FUNC_5(VAR_18) |
        FUNC_7(VAR_26));
  break;
 case 16:
  VAR_65 = (FUNC_5(VAR_18) |
        FUNC_7(VAR_27));



  break;
 case 24:
 case 32:
  VAR_65 = (FUNC_5(VAR_19) |
        FUNC_7(VAR_28));



  break;
 default:
  FUNC_1("Unsupported screen depth %d\n",
     VAR_61->bits_per_pixel);
  return -VAR_6;
 }

 if (VAR_67 & VAR_48) {
  if (VAR_59->family >= VAR_4)
   VAR_73 = VAR_59->config.si.tile_config;
  else if (VAR_59->family >= VAR_2)
   VAR_73 = VAR_59->config.cayman.tile_config;
  else
   VAR_73 = VAR_59->config.evergreen.tile_config;

  switch ((VAR_73 & 0xf0) >> 4) {
  case 0:
   VAR_65 |= FUNC_9(VAR_8);
   break;
  case 1:
  default:
   VAR_65 |= FUNC_9(VAR_9);
   break;
  case 2:
   VAR_65 |= FUNC_9(VAR_7);
   break;
  }

  VAR_65 |= FUNC_2(VAR_16);

  FUNC_14(VAR_67, &VAR_68, &VAR_69, &VAR_70, &VAR_71);
  VAR_65 |= FUNC_10(VAR_71);
  VAR_65 |= FUNC_4(VAR_68);
  VAR_65 |= FUNC_3(VAR_69);
  VAR_65 |= FUNC_8(VAR_70);
 } else if (VAR_67 & VAR_49)
  VAR_65 |= FUNC_2(VAR_15);

 if ((VAR_59->family == VAR_4) ||
     (VAR_59->family == VAR_3))
  VAR_65 |= FUNC_12(VAR_51);
 else if (VAR_59->family == VAR_5)
  VAR_65 |= FUNC_12(VAR_50);

 switch (VAR_57->crtc_id) {
 case 0:
  FUNC_13(VAR_0, 0);
  break;
 case 1:
  FUNC_13(VAR_1, 0);
  break;
 case 2:
  FUNC_13(VAR_10, 0);
  break;
 case 3:
  FUNC_13(VAR_11, 0);
  break;
 case 4:
  FUNC_13(VAR_12, 0);
  break;
 case 5:
  FUNC_13(VAR_13, 0);
  break;
 default:
  break;
 }

 FUNC_13(VAR_32 + VAR_57->crtc_offset,
        FUNC_26(VAR_64));
 FUNC_13(VAR_34 + VAR_57->crtc_offset,
        FUNC_26(VAR_64));
 FUNC_13(VAR_31 + VAR_57->crtc_offset,
        (u32)VAR_64 & VAR_35);
 FUNC_13(VAR_33 + VAR_57->crtc_offset,
        (u32) VAR_64 & VAR_35);
 FUNC_13(VAR_17 + VAR_57->crtc_offset, VAR_65);
 FUNC_13(VAR_39 + VAR_57->crtc_offset, VAR_72);

 FUNC_13(VAR_36 + VAR_57->crtc_offset, 0);
 FUNC_13(VAR_37 + VAR_57->crtc_offset, 0);
 FUNC_13(VAR_41 + VAR_57->crtc_offset, 0);
 FUNC_13(VAR_43 + VAR_57->crtc_offset, 0);
 FUNC_13(VAR_40 + VAR_57->crtc_offset, VAR_61->width);
 FUNC_13(VAR_42 + VAR_57->crtc_offset, VAR_61->height);

 VAR_66 = VAR_61->pitches[0] / (VAR_61->bits_per_pixel / 8);
 FUNC_13(VAR_30 + VAR_57->crtc_offset, VAR_66);
 FUNC_13(VAR_21 + VAR_57->crtc_offset, 1);

 FUNC_13(VAR_14 + VAR_57->crtc_offset,
        VAR_61->height);
 VAR_54 &= ~3;
 VAR_55 &= ~1;
 FUNC_13(VAR_46 + VAR_57->crtc_offset,
        (VAR_54 << 16) | VAR_55);
 VAR_74 = VAR_52->mode.hdisplay;
 VAR_75 = (VAR_52->mode.vdisplay + 1) & ~1;
 FUNC_13(VAR_45 + VAR_57->crtc_offset,
        (VAR_74 << 16) | VAR_75);



 VAR_73 = FUNC_11(VAR_25 + VAR_57->crtc_offset);
 VAR_73 &= ~VAR_38;
 FUNC_13(VAR_25 + VAR_57->crtc_offset, VAR_73);


 FUNC_13(VAR_44 + VAR_57->crtc_offset, 0);

 if (!VAR_56 && VAR_53 && VAR_53 != VAR_52->fb) {
  VAR_60 = FUNC_24(VAR_53);
  VAR_63 = FUNC_15(VAR_60->obj);
  VAR_76 = FUNC_20(VAR_63, 0);
  if (FUNC_25(VAR_76 != 0))
   return VAR_76;
  FUNC_21(VAR_63);
  FUNC_22(VAR_63);
 }


 FUNC_16(VAR_59);

 return 0;
}
