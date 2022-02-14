
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_drm {int device; } ;
struct nouveau_crtc {int index; } ;
struct drm_device {int dummy; } ;
struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; struct drm_device* dev; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ,int) ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*,int ,int ,int ) ;
 int FUNC_4 (struct drm_device*,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct drm_device*,int ) ;
 struct nouveau_crtc* FUNC_6 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_7 (struct drm_device*) ;
 TYPE_1__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_crtc*,int ) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct nouveau_drm *VAR_7 = FUNC_7(VAR_6);
 struct nouveau_crtc *VAR_8 = FUNC_6(VAR_5);
 struct drm_crtc_helper_funcs *VAR_9 = VAR_5->helper_private;

 if (FUNC_9(VAR_6))
  FUNC_2(VAR_6, VAR_8->index);

 FUNC_5(VAR_6, VAR_8->index);
 VAR_9->dpms(VAR_5, VAR_0);

 FUNC_0(VAR_6, VAR_8->index, 1);


 FUNC_3(VAR_6, VAR_8->index, VAR_2, VAR_3);
 if (FUNC_8(VAR_7->device)->card_type == VAR_1) {
  uint32_t VAR_10 = FUNC_1(VAR_6, VAR_8->index, VAR_4);
  FUNC_4(VAR_6, VAR_8->index, VAR_4, VAR_10 & ~0x10000);
 }
}
