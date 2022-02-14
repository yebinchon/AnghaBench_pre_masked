
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_bo_global {int device_list_mutex; int device_list; } ;
struct ttm_bo_driver {int dummy; } ;
struct ttm_bo_device {int need_dma32; int device_list; int fence_lock; scalar_t__ val_seq; struct ttm_bo_global* glob; int * dev_mapping; int ddestroy; int wq; int addr_space_mm; int addr_space_rb; int man; struct ttm_bo_driver* driver; int vm_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ttm_bo_device*,int ) ;
 int VAR_3 ;
 int FUNC_10 (struct ttm_bo_device*,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct ttm_bo_device *VAR_4,
         struct ttm_bo_global *VAR_5,
         struct ttm_bo_driver *VAR_6,
         uint64_t VAR_7,
         bool VAR_8)
{
 int VAR_9 = -VAR_0;

 FUNC_7(&VAR_4->vm_lock);
 VAR_4->driver = VAR_6;

 FUNC_4(VAR_4->man, 0, sizeof(VAR_4->man));





 VAR_9 = FUNC_10(VAR_4, VAR_2, 0);
 if (FUNC_11(VAR_9 != 0))
  goto out_no_sys;

 VAR_4->addr_space_rb = VAR_1;
 VAR_9 = FUNC_2(&VAR_4->addr_space_mm, VAR_7, 0x10000000);
 if (FUNC_11(VAR_9 != 0))
  goto out_no_addr_mm;

 FUNC_0(&VAR_4->wq, VAR_3);
 FUNC_1(&VAR_4->ddestroy);
 VAR_4->dev_mapping = ((void*)0);
 VAR_4->glob = VAR_5;
 VAR_4->need_dma32 = VAR_8;
 VAR_4->val_seq = 0;
 FUNC_8(&VAR_4->fence_lock);
 FUNC_5(&VAR_5->device_list_mutex);
 FUNC_3(&VAR_4->device_list, &VAR_5->device_list);
 FUNC_6(&VAR_5->device_list_mutex);

 return 0;
out_no_addr_mm:
 FUNC_9(VAR_4, 0);
out_no_sys:
 return VAR_9;
}
