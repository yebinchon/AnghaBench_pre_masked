
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_vmmgr {scalar_t__ spg_shift; int pgt_bits; int (* flush ) (struct nouveau_vm*) ;int (* map_sg ) (struct nouveau_vma*,struct nouveau_gpuobj*,struct nouveau_mem*,int,int,int *) ;} ;
struct nouveau_vma {TYPE_1__* node; struct nouveau_vm* vm; } ;
struct nouveau_vm {int fpde; TYPE_2__* pgt; struct nouveau_vmmgr* vmm; } ;
struct nouveau_mem {int * pages; } ;
struct nouveau_gpuobj {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct nouveau_gpuobj** obj; } ;
struct TYPE_3__ {scalar_t__ type; int offset; } ;


 int FUNC_0 (struct nouveau_vma*,struct nouveau_gpuobj*,struct nouveau_mem*,int,int,int *) ;
 int FUNC_1 (struct nouveau_vm*) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(struct nouveau_vma *VAR_0, u64 VAR_1, u64 VAR_2,
    struct nouveau_mem *VAR_3)
{
 struct nouveau_vm *VAR_4 = VAR_0->vm;
 struct nouveau_vmmgr *VAR_5 = VAR_4->vmm;
 dma_addr_t *VAR_6 = VAR_3->pages;
 int VAR_7 = VAR_0->node->type != VAR_5->spg_shift;
 u32 VAR_8 = VAR_0->node->offset + (VAR_1 >> 12);
 u32 VAR_9 = VAR_0->node->type - 12;
 u32 VAR_10 = VAR_2 >> VAR_0->node->type;
 u32 VAR_11 = (VAR_8 >> VAR_5->pgt_bits) - VAR_4->fpde;
 u32 VAR_12 = (VAR_8 & ((1 << VAR_5->pgt_bits) - 1)) >> VAR_9;
 u32 VAR_13 = 1 << (VAR_5->pgt_bits - VAR_9);
 u32 VAR_14, VAR_15;

 while (VAR_10) {
  struct nouveau_gpuobj *VAR_16 = VAR_4->pgt[VAR_11].obj[VAR_7];

  VAR_14 = (VAR_12 + VAR_10);
  if (FUNC_2(VAR_14 >= VAR_13))
   VAR_14 = VAR_13;
  VAR_15 = VAR_14 - VAR_12;

  VAR_5->map_sg(VAR_0, VAR_16, VAR_3, VAR_12, VAR_15, VAR_6);

  VAR_10 -= VAR_15;
  VAR_12 += VAR_15;
  VAR_6 += VAR_15;
  if (FUNC_2(VAR_14 >= VAR_13)) {
   VAR_11++;
   VAR_12 = 0;
  }
 }

 VAR_5->flush(VAR_4);
}
