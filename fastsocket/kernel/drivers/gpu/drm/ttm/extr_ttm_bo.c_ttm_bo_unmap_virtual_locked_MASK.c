
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_pages; } ;
struct ttm_buffer_object {TYPE_1__ mem; scalar_t__ addr_space_offset; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int dev_mapping; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (int ,int,int,int) ;

void FUNC_2(struct ttm_buffer_object *VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_1->bdev;
 loff_t VAR_3 = (loff_t) VAR_1->addr_space_offset;
 loff_t VAR_4 = ((loff_t) VAR_1->mem.num_pages) << VAR_0;

 if (!VAR_2->dev_mapping)
  return;
 FUNC_1(VAR_2->dev_mapping, VAR_3, VAR_4, 1);
 FUNC_0(VAR_1);
}
