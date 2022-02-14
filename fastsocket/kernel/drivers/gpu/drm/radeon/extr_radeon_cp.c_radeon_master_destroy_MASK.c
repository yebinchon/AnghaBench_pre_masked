
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_radeon_master_private {scalar_t__ sarea; TYPE_1__* sarea_priv; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pfCurrentPage; } ;


 int FUNC_0 (struct drm_device*,scalar_t__) ;
 int FUNC_1 (struct drm_radeon_master_private*) ;
 int FUNC_2 (struct drm_device*,struct drm_master*) ;

void FUNC_3(struct drm_device *VAR_0, struct drm_master *VAR_1)
{
 struct drm_radeon_master_private *VAR_2 = VAR_1->driver_priv;

 if (!VAR_2)
  return;

 if (VAR_2->sarea_priv &&
     VAR_2->sarea_priv->pfCurrentPage != 0)
  FUNC_2(VAR_0, VAR_1);

 VAR_2->sarea_priv = ((void*)0);
 if (VAR_2->sarea)
  FUNC_0(VAR_0, VAR_2->sarea);

 FUNC_1(VAR_2);

 VAR_1->driver_priv = ((void*)0);
}
