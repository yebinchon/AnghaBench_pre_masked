
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ttm_placement {int num_placement; int* placement; int num_busy_placement; int* busy_placement; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct ttm_mem_reg {int placement; int * mm_node; } ;
struct ttm_buffer_object {int ttm; int bdev; struct ttm_mem_reg mem; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct radeon_device* FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_buffer_object*,int,int,struct ttm_mem_reg*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,int,int) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int,struct ttm_mem_reg*) ;
 int FUNC_5 (int ,struct ttm_mem_reg*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ttm_buffer_object *VAR_2,
    bool VAR_3, bool VAR_4,
    bool VAR_5,
    struct ttm_mem_reg *VAR_6)
{
 struct radeon_device *VAR_7;
 struct ttm_mem_reg *VAR_8 = &VAR_2->mem;
 struct ttm_mem_reg VAR_9;
 u32 VAR_10;
 struct ttm_placement VAR_11;
 int VAR_12;

 VAR_7 = FUNC_0(VAR_2->bdev);
 VAR_9 = *VAR_6;
 VAR_9.mm_node = ((void*)0);
 VAR_11.fpfn = 0;
 VAR_11.lpfn = 0;
 VAR_11.num_placement = 1;
 VAR_11.placement = &VAR_10;
 VAR_11.num_busy_placement = 1;
 VAR_11.busy_placement = &VAR_10;
 VAR_10 = VAR_1 | VAR_0;
 VAR_12 = FUNC_3(VAR_2, &VAR_11, &VAR_9,
        VAR_4, VAR_5);
 if (FUNC_7(VAR_12)) {
  return VAR_12;
 }

 VAR_12 = FUNC_6(VAR_2->ttm, VAR_9.placement);
 if (FUNC_7(VAR_12)) {
  goto out_cleanup;
 }

 VAR_12 = FUNC_5(VAR_2->ttm, &VAR_9);
 if (FUNC_7(VAR_12)) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_1(VAR_2, 1, VAR_5, &VAR_9, VAR_8);
 if (FUNC_7(VAR_12)) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_4(VAR_2, 1, VAR_5, VAR_6);
out_cleanup:
 FUNC_2(VAR_2, &VAR_9);
 return VAR_12;
}
