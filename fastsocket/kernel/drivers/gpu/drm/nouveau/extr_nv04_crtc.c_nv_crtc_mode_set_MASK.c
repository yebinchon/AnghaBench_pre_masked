
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct nouveau_crtc {int index; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_4__ {int sel_clk; } ;
struct TYPE_6__ {TYPE_1__ mode_reg; } ;
struct TYPE_5__ {scalar_t__ card_type; } ;


 int FUNC_0 (struct drm_device*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct nouveau_drm*,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_display_mode*) ;
 struct nouveau_crtc* FUNC_3 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 TYPE_3__* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_crtc*,struct drm_display_mode*,int ) ;
 int FUNC_7 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_8 (struct drm_crtc*,struct drm_display_mode*) ;
 TYPE_2__* FUNC_9 (int ) ;
 int FUNC_10 (struct drm_device*,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct drm_crtc *VAR_2, struct drm_display_mode *VAR_3,
   struct drm_display_mode *VAR_4,
   int VAR_5, int VAR_6, struct drm_framebuffer *VAR_7)
{
 struct drm_device *VAR_8 = VAR_2->dev;
 struct nouveau_crtc *VAR_9 = FUNC_3(VAR_2);
 struct nouveau_drm *VAR_10 = FUNC_4(VAR_8);

 FUNC_1(VAR_10, "CTRC mode on CRTC %d:\n", VAR_9->index);
 FUNC_2(VAR_4);


 FUNC_10(VAR_8, VAR_9->index, -1);

 FUNC_8(VAR_2, VAR_4);

 if (FUNC_9(VAR_10->device)->card_type == VAR_0)
  FUNC_0(VAR_8, 0, VAR_1, FUNC_5(VAR_8)->mode_reg.sel_clk);
 FUNC_7(VAR_2, VAR_4);
 FUNC_6(VAR_2, VAR_3, VAR_4->clock);
 return 0;
}
