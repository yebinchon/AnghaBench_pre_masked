
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max_freq; } ;
struct nvbios_pll {int vco2; TYPE_1__ vco1; } ;
struct nv04_mode_state {int pllsel; struct nv04_crtc_reg* crtc_reg; } ;
struct nouveau_pll_vals {int log2P; int M1; int N1; int M2; int N2; scalar_t__ NM2; } ;
struct nv04_crtc_reg {struct nouveau_pll_vals pllvals; } ;
struct nouveau_drm {int device; } ;
struct TYPE_6__ {int offset; int (* set_offset ) (struct nouveau_crtc*,int ) ;} ;
struct nouveau_crtc {size_t index; TYPE_2__ cursor; } ;
struct nouveau_clock {int (* pll_calc ) (struct nouveau_clock*,struct nvbios_pll*,int,struct nouveau_pll_vals*) ;} ;
struct nouveau_bios {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_8__ {struct nv04_mode_state mode_reg; } ;
struct TYPE_7__ {int chipset; scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ,int ,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int) ;
 struct nouveau_bios* FUNC_2 (int ) ;
 struct nouveau_clock* FUNC_3 (int ) ;
 struct nouveau_crtc* FUNC_4 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 TYPE_4__* FUNC_6 (struct drm_device*) ;
 TYPE_3__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct nouveau_bios*,int ,struct nvbios_pll*) ;
 int FUNC_9 (struct nouveau_clock*,struct nvbios_pll*,int,struct nouveau_pll_vals*) ;
 int FUNC_10 (struct nouveau_crtc*,int ) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_9, struct drm_display_mode * VAR_10, int VAR_11)
{
 struct drm_device *VAR_12 = VAR_9->dev;
 struct nouveau_drm *VAR_13 = FUNC_5(VAR_12);
 struct nouveau_bios *VAR_14 = FUNC_2(VAR_13->device);
 struct nouveau_clock *VAR_15 = FUNC_3(VAR_13->device);
 struct nouveau_crtc *VAR_16 = FUNC_4(VAR_9);
 struct nv04_mode_state *VAR_17 = &FUNC_6(VAR_12)->mode_reg;
 struct nv04_crtc_reg *VAR_18 = &VAR_17->crtc_reg[VAR_16->index];
 struct nouveau_pll_vals *VAR_19 = &VAR_18->pllvals;
 struct nvbios_pll VAR_20;

 if (FUNC_8(VAR_14, VAR_16->index ? VAR_8 : VAR_7,
       &VAR_20))
  return;


 VAR_19->NM2 = 0;
 if (FUNC_7(VAR_13->device)->chipset > 0x40 && VAR_11 <= (VAR_20.vco1.max_freq / 2))
  FUNC_1(&VAR_20.vco2, 0, sizeof(VAR_20.vco2));


 if (!VAR_15->pll_calc(VAR_15, &VAR_20, VAR_11, VAR_19))
  return;

 VAR_17->pllsel &= VAR_5 | VAR_6 | VAR_4;


 if (FUNC_7(VAR_13->device)->card_type == VAR_0)
  VAR_17->pllsel |= VAR_3;

 if (FUNC_7(VAR_13->device)->chipset < 0x41)
  VAR_17->pllsel |= VAR_1 |
     VAR_2;
 VAR_17->pllsel |= VAR_16->index ? VAR_6 : VAR_5;

 if (VAR_19->NM2)
  FUNC_0(VAR_13, "vpll: n1 %d n2 %d m1 %d m2 %d log2p %d\n",
    VAR_19->N1, VAR_19->N2, VAR_19->M1, VAR_19->M2, VAR_19->log2P);
 else
  FUNC_0(VAR_13, "vpll: n %d m %d log2p %d\n",
    VAR_19->N1, VAR_19->M1, VAR_19->log2P);

 VAR_16->cursor.set_offset(VAR_16, VAR_16->cursor.offset);
}
