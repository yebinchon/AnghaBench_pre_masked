
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sg_table {int dummy; } ;
struct TYPE_8__ {int mclk_lock; } ;
struct TYPE_9__ {int dev_mapping; } ;
struct TYPE_7__ {TYPE_3__ bdev; } ;
struct radeon_device {TYPE_2__ pm; TYPE_1__ mman; TYPE_5__* ddev; } ;
struct TYPE_11__ {int * driver_private; } ;
struct radeon_bo {int surface_reg; int placement; int tbo; int va; int list; TYPE_6__ gem_base; struct radeon_device* rdev; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;
struct TYPE_10__ {int dev_mapping; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,unsigned long) ;
 int FUNC_4 (struct radeon_bo*) ;
 struct radeon_bo* FUNC_5 (int,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct radeon_bo*,int ) ;
 unsigned long FUNC_7 (int,int ) ;
 int FUNC_8 (struct radeon_bo*) ;
 size_t FUNC_9 (TYPE_3__*,unsigned long,int) ;
 int FUNC_10 (TYPE_3__*,int *,unsigned long,int,int *,unsigned long,int,int *,size_t,struct sg_table*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct radeon_device *VAR_8,
       unsigned long VAR_9, int VAR_10, bool VAR_11, u32 VAR_12,
       struct sg_table *VAR_13, struct radeon_bo **VAR_14)
{
 struct radeon_bo *VAR_15;
 enum ttm_bo_type VAR_16;
 unsigned long VAR_17 = FUNC_7(VAR_10, VAR_3) >> VAR_2;
 size_t VAR_18;
 int VAR_19;

 VAR_9 = FUNC_0(VAR_9, VAR_3);

 VAR_8->mman.bdev.dev_mapping = VAR_8->ddev->dev_mapping;
 if (VAR_11) {
  VAR_16 = VAR_6;
 } else if (VAR_13) {
  VAR_16 = VAR_7;
 } else {
  VAR_16 = VAR_5;
 }
 *VAR_14 = ((void*)0);

 VAR_18 = FUNC_9(&VAR_8->mman.bdev, VAR_9,
           sizeof(struct radeon_bo));

 VAR_15 = FUNC_5(sizeof(struct radeon_bo), VAR_1);
 if (VAR_15 == ((void*)0))
  return -VAR_0;
 VAR_19 = FUNC_3(VAR_8->ddev, &VAR_15->gem_base, VAR_9);
 if (FUNC_11(VAR_19)) {
  FUNC_4(VAR_15);
  return VAR_19;
 }
 VAR_15->rdev = VAR_8;
 VAR_15->gem_base.driver_private = ((void*)0);
 VAR_15->surface_reg = -1;
 FUNC_1(&VAR_15->list);
 FUNC_1(&VAR_15->va);
 FUNC_6(VAR_15, VAR_12);

 FUNC_2(&VAR_8->pm.mclk_lock);
 VAR_19 = FUNC_10(&VAR_8->mman.bdev, &VAR_15->tbo, VAR_9, VAR_16,
   &VAR_15->placement, VAR_17, !VAR_11, ((void*)0),
   VAR_18, VAR_13, &VAR_4);
 FUNC_12(&VAR_8->pm.mclk_lock);
 if (FUNC_11(VAR_19 != 0)) {
  return VAR_19;
 }
 *VAR_14 = VAR_15;

 FUNC_8(VAR_15);

 return 0;
}
