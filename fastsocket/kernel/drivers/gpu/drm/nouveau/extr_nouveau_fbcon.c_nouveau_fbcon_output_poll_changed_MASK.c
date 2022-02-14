
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {TYPE_1__* fbcon; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int helper; } ;


 int FUNC_0 (int *) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;

void
FUNC_2(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->fbcon->helper);
}
