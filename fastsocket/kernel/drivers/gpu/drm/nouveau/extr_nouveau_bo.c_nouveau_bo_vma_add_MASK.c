
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_vma {int refcount; int head; } ;
struct nouveau_vm {int dummy; } ;
struct nouveau_mem {scalar_t__ sg; } ;
struct TYPE_3__ {int num_pages; scalar_t__ mem_type; struct nouveau_mem* mm_node; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct nouveau_bo {int vma_list; TYPE_2__ bo; int page_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nouveau_vm*,int const,int ,int ,struct nouveau_vma*) ;
 int FUNC_2 (struct nouveau_vma*,struct nouveau_mem*) ;
 int FUNC_3 (struct nouveau_vma*,int ,int const,struct nouveau_mem*) ;
 int FUNC_4 (struct nouveau_vma*,int ,int const,struct nouveau_mem*) ;

int
FUNC_5(struct nouveau_bo *VAR_4, struct nouveau_vm *VAR_5,
     struct nouveau_vma *VAR_6)
{
 const u32 VAR_7 = VAR_4->bo.mem.num_pages << VAR_1;
 struct nouveau_mem *VAR_8 = VAR_4->bo.mem.mm_node;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_4->page_shift,
        VAR_0, VAR_6);
 if (VAR_9)
  return VAR_9;

 if (VAR_4->bo.mem.mem_type == VAR_3)
  FUNC_2(VAR_6, VAR_4->bo.mem.mm_node);
 else if (VAR_4->bo.mem.mem_type == VAR_2) {
  if (VAR_8->sg)
   FUNC_4(VAR_6, 0, VAR_7, VAR_8);
  else
   FUNC_3(VAR_6, 0, VAR_7, VAR_8);
 }

 FUNC_0(&VAR_6->head, &VAR_4->vma_list);
 VAR_6->refcount = 1;
 return 0;
}
