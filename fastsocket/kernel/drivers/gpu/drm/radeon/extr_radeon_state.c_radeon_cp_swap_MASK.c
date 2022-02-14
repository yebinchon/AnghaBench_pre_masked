
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_1__* sarea_priv; } ;
struct drm_file {TYPE_3__* master; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_5__ {scalar_t__ nbox; scalar_t__ ctx_owner; } ;
typedef TYPE_1__ drm_radeon_sarea_t ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_7__ {struct drm_radeon_master_private* driver_priv; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct drm_device*,struct drm_file*) ;
 int FUNC_5 (struct drm_device*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;
 struct drm_radeon_master_private *VAR_7 = VAR_5->master->driver_priv;
 drm_radeon_sarea_t *VAR_8 = VAR_7->sarea_priv;

 FUNC_1("\n");

 FUNC_2(VAR_3, VAR_5);

 FUNC_3(VAR_6);

 if (VAR_8->nbox > VAR_2)
  VAR_8->nbox = VAR_2;

 if ((VAR_6->flags & VAR_1) >= VAR_0)
  FUNC_4(VAR_3, VAR_5);
 else
  FUNC_5(VAR_3, VAR_5->master);
 VAR_8->ctx_owner = 0;

 FUNC_0();
 return 0;
}
