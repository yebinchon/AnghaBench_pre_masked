
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_1__* sarea_priv; } ;
struct drm_file {TYPE_3__* master; } ;
struct drm_device {int * dev_private; } ;
struct TYPE_5__ {int nbox; } ;
typedef TYPE_1__ drm_radeon_sarea_t ;
typedef int drm_radeon_private_t ;
struct TYPE_6__ {int depth_boxes; } ;
typedef TYPE_2__ drm_radeon_clear_t ;
typedef int drm_radeon_clear_rect_t ;
typedef int depth_boxes ;
struct TYPE_7__ {struct drm_radeon_master_private* driver_priv; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int **,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_device*,struct drm_file*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*,TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_2->dev_private;
 struct drm_radeon_master_private *VAR_6 = VAR_4->master->driver_priv;
 drm_radeon_sarea_t *VAR_7 = VAR_6->sarea_priv;
 drm_radeon_clear_t *VAR_8 = VAR_3;
 drm_radeon_clear_rect_t VAR_9[VAR_1];
 FUNC_2("\n");

 FUNC_3(VAR_2, VAR_4);

 FUNC_4(VAR_5);

 if (VAR_7->nbox > VAR_1)
  VAR_7->nbox = VAR_1;

 if (FUNC_1(&VAR_9, VAR_8->depth_boxes,
          VAR_7->nbox * sizeof(VAR_9[0])))
  return -VAR_0;

 FUNC_5(VAR_2, VAR_4->master, VAR_8, VAR_9);

 FUNC_0();
 return 0;
}
