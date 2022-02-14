
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_placement {int dummy; } ;
struct ttm_mem_type_manager {int priv; } ;
struct ttm_mem_reg {int num_pages; int start; struct nouveau_mem* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_mem {int page_shift; TYPE_1__* vma; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nouveau_mem*) ;
 struct nouveau_mem* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct ttm_mem_type_manager *VAR_4,
        struct ttm_buffer_object *VAR_5,
        struct ttm_placement *VAR_6,
        struct ttm_mem_reg *VAR_7)
{
 struct nouveau_mem *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->page_shift = 12;

 VAR_9 = FUNC_2(VAR_4->priv, VAR_7->num_pages << 12, VAR_8->page_shift,
        VAR_2, &VAR_8->vma[0]);
 if (VAR_9) {
  FUNC_0(VAR_8);
  return VAR_9;
 }

 VAR_7->mm_node = VAR_8;
 VAR_7->start = VAR_8->vma[0].offset >> VAR_3;
 return 0;
}
