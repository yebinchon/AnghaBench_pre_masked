
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_reg {int num_pages; scalar_t__ mem_type; struct nouveau_mem* mm_node; } ;
struct nouveau_vma {int dummy; } ;
struct nouveau_mem {int page_shift; } ;
struct nouveau_channel {int cli; } ;
struct nouveau_bo {int dummy; } ;
struct TYPE_2__ {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,struct nouveau_vma*) ;
 int FUNC_1 (struct nouveau_vma*,struct nouveau_mem*) ;
 int FUNC_2 (struct nouveau_vma*,int ,int,struct nouveau_mem*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_channel *VAR_3, struct nouveau_bo *VAR_4,
     struct ttm_mem_reg *VAR_5, struct nouveau_vma *VAR_6)
{
 struct nouveau_mem *VAR_7 = VAR_5->mm_node;
 int VAR_8;

 VAR_8 = FUNC_0(FUNC_3(VAR_3->cli)->vm, VAR_5->num_pages <<
        VAR_1, VAR_7->page_shift,
        VAR_0, VAR_6);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->mem_type == VAR_2)
  FUNC_1(VAR_6, VAR_7);
 else
  FUNC_2(VAR_6, 0, VAR_5->num_pages << VAR_1, VAR_7);

 return 0;
}
