
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_fpriv {int vm; } ;
struct TYPE_3__ {int enabled; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;
struct radeon_bo_va {scalar_t__ soffset; } ;
struct radeon_bo {int dummy; } ;
struct drm_radeon_gem_va {int operation; scalar_t__ offset; int flags; int handle; scalar_t__ vm_id; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {struct radeon_fpriv* driver_priv; } ;
struct drm_device {TYPE_2__* pdev; struct radeon_device* dev_private; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,...) ;
 struct drm_gem_object* FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct radeon_bo*,int) ;
 int FUNC_5 (struct radeon_bo*) ;
 struct radeon_bo_va* FUNC_6 (int *,struct radeon_bo*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_bo_va*,scalar_t__,int) ;

int FUNC_8(struct drm_device *VAR_10, void *VAR_11,
     struct drm_file *VAR_12)
{
 struct drm_radeon_gem_va *VAR_13 = VAR_11;
 struct drm_gem_object *VAR_14;
 struct radeon_device *VAR_15 = VAR_10->dev_private;
 struct radeon_fpriv *VAR_16 = VAR_12->driver_priv;
 struct radeon_bo *VAR_17;
 struct radeon_bo_va *VAR_18;
 u32 VAR_19;
 int VAR_20 = 0;

 if (!VAR_15->vm_manager.enabled) {
  VAR_13->operation = VAR_4;
  return -VAR_2;
 }






 if (VAR_13->vm_id) {
  VAR_13->operation = VAR_4;
  return -VAR_0;
 }

 if (VAR_13->offset < VAR_3) {
  FUNC_0(&VAR_10->pdev->dev,
   "offset 0x%lX is in reserved area 0x%X\n",
   (unsigned long)VAR_13->offset,
   VAR_3);
  VAR_13->operation = VAR_4;
  return -VAR_0;
 }





 VAR_19 = VAR_9 | VAR_8;
 if ((VAR_13->flags & VAR_19)) {
  FUNC_0(&VAR_10->pdev->dev, "invalid flags 0x%08X vs 0x%08X\n",
   VAR_13->flags, VAR_19);
  VAR_13->operation = VAR_4;
  return -VAR_0;
 }
 if (!(VAR_13->flags & VAR_7)) {
  FUNC_0(&VAR_10->pdev->dev, "only supported snooped mapping for now\n");
  VAR_13->operation = VAR_4;
  return -VAR_0;
 }

 switch (VAR_13->operation) {
 case 129:
 case 128:
  break;
 default:
  FUNC_0(&VAR_10->pdev->dev, "unsupported operation %d\n",
   VAR_13->operation);
  VAR_13->operation = VAR_4;
  return -VAR_0;
 }

 VAR_14 = FUNC_1(VAR_10, VAR_12, VAR_13->handle);
 if (VAR_14 == ((void*)0)) {
  VAR_13->operation = VAR_4;
  return -VAR_1;
 }
 VAR_17 = FUNC_3(VAR_14);
 VAR_20 = FUNC_4(VAR_17, 0);
 if (VAR_20) {
  VAR_13->operation = VAR_4;
  FUNC_2(VAR_14);
  return VAR_20;
 }
 VAR_18 = FUNC_6(&VAR_16->vm, VAR_17);
 if (!VAR_18) {
  VAR_13->operation = VAR_4;
  FUNC_2(VAR_14);
  return -VAR_1;
 }

 switch (VAR_13->operation) {
 case 129:
  if (VAR_18->soffset) {
   VAR_13->operation = VAR_6;
   VAR_13->offset = VAR_18->soffset;
   goto out;
  }
  VAR_20 = FUNC_7(VAR_15, VAR_18, VAR_13->offset, VAR_13->flags);
  break;
 case 128:
  VAR_20 = FUNC_7(VAR_15, VAR_18, 0, 0);
  break;
 default:
  break;
 }
 VAR_13->operation = VAR_5;
 if (VAR_20) {
  VAR_13->operation = VAR_4;
 }
out:
 FUNC_5(VAR_17);
 FUNC_2(VAR_14);
 return VAR_20;
}
