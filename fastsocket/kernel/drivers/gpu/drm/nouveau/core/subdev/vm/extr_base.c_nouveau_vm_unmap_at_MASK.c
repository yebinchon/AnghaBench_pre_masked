
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_vmmgr {scalar_t__ spg_shift; int pgt_bits; int (* flush ) (struct nouveau_vm*) ;int (* unmap ) (struct nouveau_gpuobj*,int,int) ;} ;
struct nouveau_vma {TYPE_1__* node; struct nouveau_vm* vm; } ;
struct nouveau_vm {int fpde; TYPE_2__* pgt; struct nouveau_vmmgr* vmm; } ;
struct nouveau_gpuobj {int dummy; } ;
struct TYPE_4__ {struct nouveau_gpuobj** obj; } ;
struct TYPE_3__ {scalar_t__ type; int offset; } ;


 int FUNC_0 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_1 (struct nouveau_vm*) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(struct nouveau_vma *VAR_0, u64 VAR_1, u64 VAR_2)
{
 struct nouveau_vm *VAR_3 = VAR_0->vm;
 struct nouveau_vmmgr *VAR_4 = VAR_3->vmm;
 int VAR_5 = VAR_0->node->type != VAR_4->spg_shift;
 u32 VAR_6 = VAR_0->node->offset + (VAR_1 >> 12);
 u32 VAR_7 = VAR_0->node->type - 12;
 u32 VAR_8 = VAR_2 >> VAR_0->node->type;
 u32 VAR_9 = (VAR_6 >> VAR_4->pgt_bits) - VAR_3->fpde;
 u32 VAR_10 = (VAR_6 & ((1 << VAR_4->pgt_bits) - 1)) >> VAR_7;
 u32 VAR_11 = 1 << (VAR_4->pgt_bits - VAR_7);
 u32 VAR_12, VAR_13;

 while (VAR_8) {
  struct nouveau_gpuobj *VAR_14 = VAR_3->pgt[VAR_9].obj[VAR_5];

  VAR_12 = (VAR_10 + VAR_8);
  if (FUNC_2(VAR_12 >= VAR_11))
   VAR_12 = VAR_11;
  VAR_13 = VAR_12 - VAR_10;

  VAR_4->unmap(VAR_14, VAR_10, VAR_13);

  VAR_8 -= VAR_13;
  VAR_10 += VAR_13;
  if (FUNC_2(VAR_12 >= VAR_11)) {
   VAR_9++;
   VAR_10 = 0;
  }
 }

 VAR_4->flush(VAR_3);
}
