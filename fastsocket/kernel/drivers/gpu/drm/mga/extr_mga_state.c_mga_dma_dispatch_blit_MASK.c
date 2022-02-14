
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {int x1; int y1; int y2; int x2; } ;
struct TYPE_8__ {int plnwt; int dwgctl; } ;
struct TYPE_6__ {int nbox; struct drm_clip_rect* boxes; TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_7__ {int maccess; int front_pitch; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_context_regs_t ;
struct TYPE_9__ {int planemask; int srcorg; int dstorg; int ydir; int src_pitch; int dst_pitch; int delta_sx; int delta_sy; int delta_dx; int delta_dy; int height; } ;
typedef TYPE_4__ drm_mga_blit_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,scalar_t__,int,scalar_t__,int,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_17, drm_mga_blit_t *VAR_18)
{
 drm_mga_private_t *VAR_19 = VAR_17->dev_private;
 drm_mga_sarea_t *VAR_20 = VAR_19->sarea_priv;
 drm_mga_context_regs_t *VAR_21 = &VAR_20->context_state;
 struct drm_clip_rect *VAR_22 = VAR_20->boxes;
 int VAR_23 = VAR_20->nbox;
 u32 VAR_24 = 0, VAR_25;
 VAR_0;
 FUNC_3("\n");

 FUNC_1(4 + VAR_23);

 FUNC_2(VAR_4, 0x00000000,
    VAR_4, 0x00000000,
    VAR_8, 0x00007100, VAR_8, 0x00007000);

 FUNC_2(VAR_6, VAR_7,
    VAR_13, VAR_18->planemask,
    VAR_15, VAR_18->srcorg, VAR_5, VAR_18->dstorg);

 FUNC_2(VAR_14, VAR_24,
    VAR_11, VAR_19->maccess,
    VAR_3, VAR_18->ydir * VAR_18->src_pitch,
    VAR_12, VAR_18->dst_pitch);

 for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) {
  int VAR_26 = VAR_22[VAR_25].x1 + VAR_18->delta_sx;
  int VAR_27 = VAR_22[VAR_25].y1 + VAR_18->delta_sy;
  int VAR_28 = VAR_22[VAR_25].x1 + VAR_18->delta_dx;
  int VAR_29 = VAR_22[VAR_25].y1 + VAR_18->delta_dy;
  int VAR_30 = VAR_22[VAR_25].y2 - VAR_22[VAR_25].y1;
  int VAR_31 = VAR_22[VAR_25].x2 - VAR_22[VAR_25].x1 - 1;
  int VAR_32;

  if (VAR_18->ydir == -1)
   VAR_27 = VAR_18->height - VAR_27 - 1;

  VAR_32 = VAR_27 * VAR_18->src_pitch + VAR_26;

  FUNC_2(VAR_1, VAR_32 + VAR_31,
     VAR_2, VAR_32,
     VAR_10, ((VAR_28 + VAR_31) << 16) | (VAR_28 & 0xffff),
     VAR_16 + VAR_9, (VAR_29 << 16) | VAR_30);
 }





 FUNC_2(VAR_4, 0x00000000,
    VAR_13, VAR_21->plnwt,
    VAR_12, VAR_19->front_pitch, VAR_6, VAR_21->dwgctl);

 FUNC_0();
}
