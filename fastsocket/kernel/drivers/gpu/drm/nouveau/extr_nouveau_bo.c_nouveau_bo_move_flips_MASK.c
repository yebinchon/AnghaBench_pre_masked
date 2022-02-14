
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ttm_placement {int num_placement; int num_busy_placement; int* placement; int* busy_placement; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct ttm_mem_reg {int * mm_node; } ;
struct ttm_buffer_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_buffer_object*,int,int,int,struct ttm_mem_reg*) ;
 int FUNC_1 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,int,int) ;
 int FUNC_3 (struct ttm_buffer_object*,int,int,struct ttm_mem_reg*) ;

__attribute__((used)) static int
FUNC_4(struct ttm_buffer_object *VAR_2, bool VAR_3, bool VAR_4,
        bool VAR_5, struct ttm_mem_reg *VAR_6)
{
 u32 VAR_7 = VAR_0 | VAR_1;
 struct ttm_placement VAR_8;
 struct ttm_mem_reg VAR_9;
 int VAR_10;

 VAR_8.fpfn = VAR_8.lpfn = 0;
 VAR_8.num_placement = VAR_8.num_busy_placement = 1;
 VAR_8.placement = VAR_8.busy_placement = &VAR_7;

 VAR_9 = *VAR_6;
 VAR_9.mm_node = ((void*)0);
 VAR_10 = FUNC_2(VAR_2, &VAR_8, &VAR_9, VAR_4, VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_2, 1, VAR_5, &VAR_9);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_0(VAR_2, 1, VAR_4, VAR_5, VAR_6);
 if (VAR_10)
  goto out;

out:
 FUNC_1(VAR_2, &VAR_9);
 return VAR_10;
}
