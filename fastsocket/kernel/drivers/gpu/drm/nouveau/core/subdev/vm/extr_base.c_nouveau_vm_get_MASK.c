
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_vmmgr {int pgt_bits; scalar_t__ spg_shift; } ;
struct nouveau_vma {int offset; int access; TYPE_2__* node; struct nouveau_vm* vm; } ;
struct nouveau_vm_pgt {int * refcount; } ;
struct TYPE_5__ {int mutex; } ;
struct nouveau_vm {TYPE_1__ mm; int fpde; struct nouveau_vm_pgt* pgt; struct nouveau_vmmgr* vmm; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ type; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__**) ;
 int FUNC_4 (TYPE_1__*,int,int,int,int,TYPE_2__**) ;
 int FUNC_5 (struct nouveau_vm*,int,scalar_t__) ;
 int FUNC_6 (struct nouveau_vm*,int,int,int) ;
 scalar_t__ FUNC_7 (int) ;

int
FUNC_8(struct nouveau_vm *VAR_0, u64 VAR_1, u32 VAR_2,
        u32 VAR_3, struct nouveau_vma *VAR_4)
{
 struct nouveau_vmmgr *VAR_5 = VAR_0->vmm;
 u32 VAR_6 = (1 << VAR_2) >> 12;
 u32 VAR_7 = VAR_1 >> 12;
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_1(&VAR_0->mm.mutex);
 VAR_11 = FUNC_4(&VAR_0->mm, VAR_2, VAR_7, VAR_7, VAR_6,
        &VAR_4->node);
 if (FUNC_7(VAR_11 != 0)) {
  FUNC_2(&VAR_0->mm.mutex);
  return VAR_11;
 }

 VAR_8 = (VAR_4->node->offset >> VAR_5->pgt_bits);
 VAR_9 = (VAR_4->node->offset + VAR_4->node->length - 1) >> VAR_5->pgt_bits;

 for (VAR_10 = VAR_8; VAR_10 <= VAR_9; VAR_10++) {
  struct nouveau_vm_pgt *VAR_12 = &VAR_0->pgt[VAR_10 - VAR_0->fpde];
  int VAR_13 = (VAR_4->node->type != VAR_5->spg_shift);

  if (FUNC_0(VAR_12->refcount[VAR_13])) {
   VAR_12->refcount[VAR_13]++;
   continue;
  }

  VAR_11 = FUNC_5(VAR_0, VAR_10, VAR_4->node->type);
  if (VAR_11) {
   if (VAR_10 != VAR_8)
    FUNC_6(VAR_0, VAR_13, VAR_8, VAR_10 - 1);
   FUNC_3(&VAR_0->mm, &VAR_4->node);
   FUNC_2(&VAR_0->mm.mutex);
   return VAR_11;
  }
 }
 FUNC_2(&VAR_0->mm.mutex);

 VAR_4->vm = VAR_0;
 VAR_4->offset = (u64)VAR_4->node->offset << 12;
 VAR_4->access = VAR_3;
 return 0;
}
