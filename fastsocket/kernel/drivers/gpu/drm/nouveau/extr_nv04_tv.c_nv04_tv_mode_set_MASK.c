
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv04_crtc_reg {int tv_hskew; int tv_hsync_delay; int tv_hsync_delay2; int tv_vskew; int tv_vsync_delay; int tv_vtotal; int tv_htotal; } ;
struct nouveau_crtc {size_t index; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int vtotal; int htotal; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {int (* mode_set ) (struct drm_encoder*,struct drm_display_mode*,struct drm_display_mode*) ;} ;
struct TYPE_4__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_5__ {TYPE_1__ mode_reg; } ;


 TYPE_3__* FUNC_0 (struct drm_encoder*) ;
 struct nouveau_crtc* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_encoder*,struct drm_display_mode*,struct drm_display_mode*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0,
        struct drm_display_mode *VAR_1,
        struct drm_display_mode *VAR_2)
{
 struct drm_device *VAR_3 = VAR_0->dev;
 struct nouveau_crtc *VAR_4 = FUNC_1(VAR_0->crtc);
 struct nv04_crtc_reg *VAR_5 = &FUNC_2(VAR_3)->mode_reg.crtc_reg[VAR_4->index];

 VAR_5->tv_htotal = VAR_2->htotal;
 VAR_5->tv_vtotal = VAR_2->vtotal;





 VAR_5->tv_hskew = 1;
 VAR_5->tv_hsync_delay = 1;
 VAR_5->tv_hsync_delay2 = 64;
 VAR_5->tv_vskew = 1;
 VAR_5->tv_vsync_delay = 1;

 FUNC_0(VAR_0)->mode_set(VAR_0, VAR_1, VAR_2);
}
