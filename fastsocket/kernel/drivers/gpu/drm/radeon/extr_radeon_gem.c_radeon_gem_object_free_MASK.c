
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sg; } ;
struct TYPE_4__ {scalar_t__ import_attach; } ;
struct radeon_bo {TYPE_1__ tbo; TYPE_2__ gem_base; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 struct radeon_bo* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct radeon_bo**) ;

void FUNC_3(struct drm_gem_object *VAR_0)
{
 struct radeon_bo *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  if (VAR_1->gem_base.import_attach)
   FUNC_0(&VAR_1->gem_base, VAR_1->tbo.sg);
  FUNC_2(&VAR_1);
 }
}
