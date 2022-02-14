
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_drm {TYPE_3__* fbcon; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* fbdev; } ;
struct TYPE_6__ {int saved_flags; TYPE_2__ helper; } ;
struct TYPE_4__ {int flags; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_0(VAR_0);
 VAR_1->fbcon->helper.fbdev->flags = VAR_1->fbcon->saved_flags;
}
