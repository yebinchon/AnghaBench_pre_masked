
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int flags; } ;
struct drm_crtc {int fb; struct drm_display_mode mode; int dev; } ;
struct nouveau_crtc {int index; struct drm_crtc base; } ;
struct nouveau_connector {int scaling_mode; scalar_t__ underscan; int underscan_hborder; int underscan_vborder; scalar_t__ edid; struct drm_display_mode* native_mode; } ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,struct nv50_mast*) ;
 int FUNC_3 (int*,int,int) ;
 int* FUNC_4 (struct nv50_mast*,int) ;
 int FUNC_5 (int,int) ;
 struct nouveau_connector* FUNC_6 (struct nouveau_crtc*) ;
 int FUNC_7 (struct drm_crtc*,int ,int *,int) ;
 int FUNC_8 (struct drm_crtc*) ;
 struct nv50_mast* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct nv50_mast*) ;

__attribute__((used)) static int
FUNC_11(struct nouveau_crtc *VAR_5, bool VAR_6)
{
 struct nv50_mast *VAR_7 = FUNC_9(VAR_5->base.dev);
 struct drm_display_mode *VAR_8, *VAR_9 = &VAR_5->base.mode;
 struct drm_crtc *VAR_10 = &VAR_5->base;
 struct nouveau_connector *VAR_11;
 int VAR_12 = VAR_1;
 u32 VAR_13, VAR_14, *VAR_15;




 VAR_11 = FUNC_6(VAR_5);
 if (VAR_11 && VAR_11->native_mode)
  VAR_12 = VAR_11->scaling_mode;

 if (VAR_12 != VAR_1)
  VAR_8 = VAR_11->native_mode;
 else
  VAR_8 = VAR_9;

 VAR_13 = VAR_8->hdisplay;
 VAR_14 = VAR_8->vdisplay;
 if (VAR_8->flags & VAR_0)
  VAR_14 *= 2;





 if (VAR_11 && ( VAR_11->underscan == VAR_4 ||
        (VAR_11->underscan == VAR_3 &&
         VAR_11->edid &&
         FUNC_0(VAR_11->edid)))) {
  u32 VAR_16 = VAR_11->underscan_hborder;
  u32 VAR_17 = VAR_11->underscan_vborder;
  u32 VAR_18 = (VAR_14 << 19) / VAR_13;

  if (VAR_16) {
   VAR_13 -= (VAR_16 * 2);
   if (VAR_17) VAR_14 -= (VAR_17 * 2);
   else VAR_14 = ((VAR_13 * VAR_18) + (VAR_18 / 2)) >> 19;
  } else {
   VAR_13 -= (VAR_13 >> 4) + 32;
   if (VAR_17) VAR_14 -= (VAR_17 * 2);
   else VAR_14 = ((VAR_13 * VAR_18) + (VAR_18 / 2)) >> 19;
  }
 }




 switch (VAR_12) {
 case 128:
  VAR_13 = FUNC_5((u32)VAR_9->hdisplay, VAR_13);
  VAR_14 = FUNC_5((u32)VAR_9->vdisplay, VAR_14);

 case 129:
  if (VAR_14 < VAR_13) {
   u32 VAR_19 = (VAR_9->hdisplay << 19) / VAR_9->vdisplay;
   VAR_13 = ((VAR_14 * VAR_19) + (VAR_19 / 2)) >> 19;
  } else {
   u32 VAR_20 = (VAR_9->vdisplay << 19) / VAR_9->hdisplay;
   VAR_14 = ((VAR_13 * VAR_20) + (VAR_20 / 2)) >> 19;
  }
  break;
 default:
  break;
 }

 VAR_15 = FUNC_4(VAR_7, 8);
 if (VAR_15) {
  if (FUNC_10(VAR_7) < VAR_2) {

   FUNC_3(VAR_15, 0x08d8 + (VAR_5->index * 0x400), 2);
   FUNC_1(VAR_15, (VAR_14 << 16) | VAR_13);
   FUNC_1(VAR_15, (VAR_14 << 16) | VAR_13);
   FUNC_3(VAR_15, 0x08a4 + (VAR_5->index * 0x400), 1);
   FUNC_1(VAR_15, 0x00000000);
   FUNC_3(VAR_15, 0x08c8 + (VAR_5->index * 0x400), 1);
   FUNC_1(VAR_15, VAR_9->vdisplay << 16 | VAR_9->hdisplay);
  } else {
   FUNC_3(VAR_15, 0x04c0 + (VAR_5->index * 0x300), 3);
   FUNC_1(VAR_15, (VAR_14 << 16) | VAR_13);
   FUNC_1(VAR_15, (VAR_14 << 16) | VAR_13);
   FUNC_1(VAR_15, (VAR_14 << 16) | VAR_13);
   FUNC_3(VAR_15, 0x0494 + (VAR_5->index * 0x300), 1);
   FUNC_1(VAR_15, 0x00000000);
   FUNC_3(VAR_15, 0x04b8 + (VAR_5->index * 0x300), 1);
   FUNC_1(VAR_15, VAR_9->vdisplay << 16 | VAR_9->hdisplay);
  }

  FUNC_2(VAR_15, VAR_7);

  if (VAR_6) {
   FUNC_8(VAR_10);
   FUNC_7(VAR_10, VAR_10->fb, ((void*)0), 1);
  }
 }

 return 0;
}
