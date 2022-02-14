
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_fpriv {int vm; } ;
struct TYPE_2__ {int bo; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ ring_tmp_bo; } ;
struct radeon_bo_va {int dummy; } ;
struct drm_file {struct radeon_fpriv* driver_priv; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct radeon_fpriv*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 struct radeon_bo_va* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct radeon_device*,struct radeon_bo_va*) ;
 int FUNC_5 (struct radeon_device*,int *) ;

void FUNC_6(struct drm_device *VAR_1,
     struct drm_file *VAR_2)
{
 struct radeon_device *VAR_3 = VAR_1->dev_private;


 if (VAR_3->family >= VAR_0 && VAR_2->driver_priv) {
  struct radeon_fpriv *VAR_4 = VAR_2->driver_priv;
  struct radeon_bo_va *VAR_5;
  int VAR_6;

  VAR_6 = FUNC_1(VAR_3->ring_tmp_bo.bo, 0);
  if (!VAR_6) {
   VAR_5 = FUNC_3(&VAR_4->vm,
        VAR_3->ring_tmp_bo.bo);
   if (VAR_5)
    FUNC_4(VAR_3, VAR_5);
   FUNC_2(VAR_3->ring_tmp_bo.bo);
  }

  FUNC_5(VAR_3, &VAR_4->vm);
  FUNC_0(VAR_4);
  VAR_2->driver_priv = ((void*)0);
 }
}
