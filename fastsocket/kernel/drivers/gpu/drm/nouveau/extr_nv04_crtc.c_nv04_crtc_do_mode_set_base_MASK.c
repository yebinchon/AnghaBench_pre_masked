
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct nv04_crtc_reg {int* CRTC; int fb_start; int ramdac_gen_ctrl; } ;
struct nouveau_framebuffer {TYPE_8__* nvbo; } ;
struct nouveau_drm {int device; } ;
struct TYPE_13__ {int offset; } ;
struct TYPE_12__ {scalar_t__ depth; } ;
struct nouveau_crtc {size_t index; TYPE_4__ fb; TYPE_3__ lut; } ;
struct drm_framebuffer {scalar_t__ depth; int* pitches; int bits_per_pixel; } ;
struct drm_device {int dummy; } ;
struct TYPE_14__ {int clock; } ;
struct drm_crtc {TYPE_5__ mode; struct drm_framebuffer* fb; struct drm_device* dev; } ;
struct TYPE_11__ {int offset; } ;
struct TYPE_17__ {TYPE_2__ bo; } ;
struct TYPE_10__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_16__ {TYPE_1__ mode_reg; } ;
struct TYPE_15__ {scalar_t__ card_type; } ;


 int FUNC_0 (struct drm_device*,size_t,int ,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (struct nouveau_drm*,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct drm_crtc*,struct nv04_crtc_reg*,size_t) ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (struct drm_device*,int ,int,int*,int*) ;
 struct nouveau_crtc* FUNC_7 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_8 (struct drm_device*) ;
 struct nouveau_framebuffer* FUNC_9 (struct drm_framebuffer*) ;
 TYPE_7__* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_crtc*) ;
 TYPE_6__* FUNC_12 (int ) ;
 int FUNC_13 (struct drm_device*,size_t,int) ;

__attribute__((used)) static int
FUNC_14(struct drm_crtc *VAR_13,
      struct drm_framebuffer *VAR_14,
      int VAR_15, int VAR_16, bool VAR_17)
{
 struct nouveau_crtc *VAR_18 = FUNC_7(VAR_13);
 struct drm_device *VAR_19 = VAR_13->dev;
 struct nouveau_drm *VAR_20 = FUNC_8(VAR_19);
 struct nv04_crtc_reg *VAR_21 = &FUNC_10(VAR_19)->mode_reg.crtc_reg[VAR_18->index];
 struct drm_framebuffer *VAR_22;
 struct nouveau_framebuffer *VAR_23;
 int VAR_24, VAR_25;
 int VAR_26;

 FUNC_1(VAR_20, "index %d\n", VAR_18->index);


 if (!VAR_17 && !VAR_13->fb) {
  FUNC_1(VAR_20, "No FB bound\n");
  return 0;
 }






 if (VAR_17) {
  VAR_22 = VAR_14;
  VAR_23 = FUNC_9(VAR_14);
 } else {
  VAR_22 = VAR_13->fb;
  VAR_23 = FUNC_9(VAR_13->fb);



  VAR_26 = FUNC_4(VAR_23->nvbo, VAR_12);
  if (VAR_26)
   return VAR_26;

  if (VAR_14) {
   struct nouveau_framebuffer *VAR_27 = FUNC_9(VAR_14);
   FUNC_5(VAR_27->nvbo);
  }
 }

 VAR_18->fb.offset = VAR_23->nvbo->bo.offset;

 if (VAR_18->lut.depth != VAR_22->depth) {
  VAR_18->lut.depth = VAR_22->depth;
  FUNC_11(VAR_13);
 }


 VAR_21->CRTC[VAR_6] &= ~3;
 VAR_21->CRTC[VAR_6] |= (VAR_13->fb->depth + 1) / 8;
 VAR_21->ramdac_gen_ctrl &= ~VAR_11;
 if (VAR_13->fb->depth == 16)
  VAR_21->ramdac_gen_ctrl |= VAR_11;
 FUNC_3(VAR_13, VAR_21, VAR_6);
 FUNC_0(VAR_19, VAR_18->index, VAR_10,
        VAR_21->ramdac_gen_ctrl);

 VAR_21->CRTC[VAR_9] = VAR_22->pitches[0] >> 3;
 VAR_21->CRTC[VAR_7] =
  FUNC_2(VAR_22->pitches[0] >> 3, 8, VAR_8);
 VAR_21->CRTC[VAR_1] =
  FUNC_2(VAR_22->pitches[0] / 8, 11, VAR_2);
 FUNC_3(VAR_13, VAR_21, VAR_7);
 FUNC_3(VAR_13, VAR_21, VAR_9);
 FUNC_3(VAR_13, VAR_21, VAR_1);


 VAR_21->fb_start = VAR_18->fb.offset & ~3;
 VAR_21->fb_start += (VAR_16 * VAR_22->pitches[0]) + (VAR_15 * VAR_22->bits_per_pixel / 8);
 FUNC_13(VAR_19, VAR_18->index, VAR_21->fb_start);


 FUNC_6(VAR_19, VAR_13->mode.clock, VAR_22->bits_per_pixel,
    &VAR_24, &VAR_25);

 VAR_21->CRTC[VAR_5] = VAR_24;
 VAR_21->CRTC[VAR_4] = VAR_25 & 0xff;
 FUNC_3(VAR_13, VAR_21, VAR_5);
 FUNC_3(VAR_13, VAR_21, VAR_4);

 if (FUNC_12(VAR_20->device)->card_type >= VAR_0) {
  VAR_21->CRTC[VAR_3] = VAR_25 >> 8;
  FUNC_3(VAR_13, VAR_21, VAR_3);
 }

 return 0;
}
