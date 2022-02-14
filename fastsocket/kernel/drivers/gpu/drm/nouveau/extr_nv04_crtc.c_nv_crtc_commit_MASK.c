
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nouveau_crtc {int index; } ;
struct drm_device {int dummy; } ;
struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {int y; int x; struct drm_crtc_helper_funcs* helper_private; struct drm_device* dev; } ;
struct TYPE_2__ {int mode_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct drm_device*,int ) ;
 struct nouveau_crtc* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_device*,int ,int *) ;
 int FUNC_6 (struct drm_crtc*,int ,int ,int *) ;
 TYPE_1__* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_crtc*,int ) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_crtc_helper_funcs *VAR_5 = VAR_3->helper_private;
 struct nouveau_crtc *VAR_6 = FUNC_4(VAR_3);

 FUNC_5(VAR_4, VAR_6->index, &FUNC_7(VAR_4)->mode_reg);
 FUNC_6(VAR_3, VAR_3->x, VAR_3->y, ((void*)0));
 VAR_5->dpms(VAR_3, VAR_0);
 FUNC_3(VAR_4, VAR_6->index);
}
