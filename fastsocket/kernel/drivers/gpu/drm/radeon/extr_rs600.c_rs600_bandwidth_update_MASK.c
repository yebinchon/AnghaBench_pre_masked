
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__** crtcs; } ;
struct radeon_device {int disp_priority; TYPE_3__ mode_info; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,struct drm_display_mode*,struct drm_display_mode*) ;

void FUNC_6(struct radeon_device *VAR_4)
{
 struct drm_display_mode *VAR_5 = ((void*)0);
 struct drm_display_mode *VAR_6 = ((void*)0);
 u32 VAR_7, VAR_8;


 FUNC_4(VAR_4);

 if (VAR_4->mode_info.crtcs[0]->base.enabled)
  VAR_5 = &VAR_4->mode_info.crtcs[0]->base.mode;
 if (VAR_4->mode_info.crtcs[1]->base.enabled)
  VAR_6 = &VAR_4->mode_info.crtcs[1]->base.mode;

 FUNC_5(VAR_4, VAR_5, VAR_6);

 if (VAR_4->disp_priority == 2) {
  VAR_7 = FUNC_0(VAR_0);
  VAR_8 = FUNC_0(VAR_2);
  VAR_7 |= FUNC_1(1);
  VAR_8 |= FUNC_2(1);
  FUNC_3(VAR_0, VAR_7);
  FUNC_3(VAR_1, VAR_7);
  FUNC_3(VAR_2, VAR_8);
  FUNC_3(VAR_3, VAR_8);
 }
}
