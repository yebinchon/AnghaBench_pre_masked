
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_vmmgr {int pgt_bits; scalar_t__ spg_shift; } ;
struct nouveau_vma {TYPE_2__* node; struct nouveau_vm* vm; } ;
struct TYPE_3__ {int mutex; } ;
struct nouveau_vm {TYPE_1__ mm; struct nouveau_vmmgr* vmm; } ;
struct TYPE_4__ {int offset; int length; scalar_t__ type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__**) ;
 int FUNC_3 (struct nouveau_vm*,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(struct nouveau_vma *VAR_0)
{
 struct nouveau_vm *VAR_1 = VAR_0->vm;
 struct nouveau_vmmgr *VAR_2 = VAR_1->vmm;
 u32 VAR_3, VAR_4;

 if (FUNC_4(VAR_0->node == ((void*)0)))
  return;
 VAR_3 = (VAR_0->node->offset >> VAR_2->pgt_bits);
 VAR_4 = (VAR_0->node->offset + VAR_0->node->length - 1) >> VAR_2->pgt_bits;

 FUNC_0(&VAR_1->mm.mutex);
 FUNC_3(VAR_1, VAR_0->node->type != VAR_2->spg_shift, VAR_3, VAR_4);
 FUNC_2(&VAR_1->mm, &VAR_0->node);
 FUNC_1(&VAR_1->mm.mutex);
}
