
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_vm {int dummy; } ;
struct radeon_fpriv {struct radeon_vm vm; } ;
struct radeon_device {scalar_t__ family; int dev; } ;
struct radeon_bo_va {scalar_t__ ref_count; } ;
struct radeon_bo {struct radeon_device* rdev; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct radeon_fpriv* driver_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct radeon_bo* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct radeon_bo*,int) ;
 int FUNC_3 (struct radeon_bo*) ;
 struct radeon_bo_va* FUNC_4 (struct radeon_vm*,struct radeon_bo*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_bo_va*) ;

void FUNC_6(struct drm_gem_object *VAR_1,
        struct drm_file *VAR_2)
{
 struct radeon_bo *VAR_3 = FUNC_1(VAR_1);
 struct radeon_device *VAR_4 = VAR_3->rdev;
 struct radeon_fpriv *VAR_5 = VAR_2->driver_priv;
 struct radeon_vm *VAR_6 = &VAR_5->vm;
 struct radeon_bo_va *VAR_7;
 int VAR_8;

 if (VAR_4->family < VAR_0) {
  return;
 }

 VAR_8 = FUNC_2(VAR_3, 1);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "leaking bo va because "
   "we fail to reserve bo (%d)\n", VAR_8);
  return;
 }
 VAR_7 = FUNC_4(VAR_6, VAR_3);
 if (VAR_7) {
  if (--VAR_7->ref_count == 0) {
   FUNC_5(VAR_4, VAR_7);
  }
 }
 FUNC_3(VAR_3);
}
