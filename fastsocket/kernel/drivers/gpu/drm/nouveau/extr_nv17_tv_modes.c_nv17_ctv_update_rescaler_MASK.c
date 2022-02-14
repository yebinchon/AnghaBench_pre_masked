
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nv17_tv_encoder {int overscan; } ;
struct nv04_crtc_reg {int* fp_horiz_regs; int* fp_vert_regs; int fp_debug_1; } ;
struct drm_encoder {TYPE_5__* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; int hdisplay; int vdisplay; } ;
struct drm_device {int dummy; } ;
struct TYPE_8__ {struct drm_display_mode mode; } ;
struct TYPE_12__ {TYPE_2__ ctv_enc_mode; } ;
struct TYPE_11__ {struct drm_display_mode mode; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_7__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_9__ {TYPE_1__ mode_reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct drm_device*,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int ,int ) ;
 TYPE_6__* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int,int) ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 TYPE_3__* FUNC_6 (struct drm_device*) ;
 struct nv17_tv_encoder* FUNC_7 (struct drm_encoder*) ;

void FUNC_8(struct drm_encoder *VAR_12)
{
 struct drm_device *VAR_13 = VAR_12->dev;
 struct nv17_tv_encoder *VAR_14 = FUNC_7(VAR_12);
 int VAR_15 = FUNC_5(VAR_12->crtc)->index;
 struct nv04_crtc_reg *VAR_16 = &FUNC_6(VAR_13)->mode_reg.crtc_reg[VAR_15];
 struct drm_display_mode *VAR_17 = &VAR_12->crtc->mode;
 struct drm_display_mode *VAR_18 =
  &FUNC_2(VAR_12)->ctv_enc_mode.mode;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;


 if (VAR_18->flags & VAR_0)
  VAR_19 = 100;
 else
  VAR_19 = VAR_14->overscan;

 VAR_20 = (VAR_18->hdisplay - VAR_17->hdisplay) / 2;
 VAR_21 = (VAR_18->vdisplay - VAR_17->vdisplay) / 2;

 VAR_20 = FUNC_3(0, FUNC_4(VAR_20, VAR_18->hdisplay/20),
         VAR_20, VAR_19);
 VAR_21 = FUNC_3(0, FUNC_4(VAR_21, VAR_18->vdisplay/20),
         VAR_21, VAR_19);

 VAR_22 = VAR_17->hdisplay * 0x800 /
  (VAR_18->hdisplay - 2*VAR_20);
 VAR_23 = VAR_17->vdisplay * 0x800 /
  (VAR_18->vdisplay - 2*VAR_21) & ~3;

 VAR_16->fp_horiz_regs[VAR_2] = VAR_20;
 VAR_16->fp_horiz_regs[VAR_1] = VAR_18->hdisplay - VAR_20 - 1;
 VAR_16->fp_vert_regs[VAR_2] = VAR_21;
 VAR_16->fp_vert_regs[VAR_1] = VAR_18->vdisplay - VAR_21 - 1;

 VAR_16->fp_debug_1 = VAR_6 |
  FUNC_1(VAR_23, 0, VAR_7) |
  VAR_4 |
  FUNC_1(VAR_22, 0, VAR_5);

 FUNC_0(VAR_13, VAR_15, VAR_9,
        VAR_16->fp_horiz_regs[VAR_2]);
 FUNC_0(VAR_13, VAR_15, VAR_8,
        VAR_16->fp_horiz_regs[VAR_1]);
 FUNC_0(VAR_13, VAR_15, VAR_11,
        VAR_16->fp_vert_regs[VAR_2]);
 FUNC_0(VAR_13, VAR_15, VAR_10,
        VAR_16->fp_vert_regs[VAR_1]);
 FUNC_0(VAR_13, VAR_15, VAR_3, VAR_16->fp_debug_1);
}
