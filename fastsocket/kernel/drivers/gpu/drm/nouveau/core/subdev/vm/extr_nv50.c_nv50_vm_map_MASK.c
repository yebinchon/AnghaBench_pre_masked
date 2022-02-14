
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_vma {TYPE_4__* node; TYPE_2__* vm; } ;
struct nouveau_mem {int memtype; TYPE_3__* tag; } ;
struct nouveau_gpuobj {int dummy; } ;
struct TYPE_6__ {scalar_t__ stolen; } ;
struct TYPE_10__ {TYPE_1__ ram; } ;
struct TYPE_9__ {int type; } ;
struct TYPE_8__ {int offset; } ;
struct TYPE_7__ {int vmm; } ;


 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nouveau_vma*,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nouveau_vma *VAR_0, struct nouveau_gpuobj *VAR_1,
     struct nouveau_mem *VAR_2, u32 VAR_3, u32 VAR_4, u64 VAR_5, u64 VAR_6)
{
 u32 VAR_7 = (VAR_2->memtype & 0x180) >> 7;
 u32 VAR_8, VAR_9;
 int VAR_10;


 VAR_9 = 0;
 if (FUNC_1(VAR_0->vm->vmm)->ram.stolen) {
  VAR_5 += FUNC_1(VAR_0->vm->vmm)->ram.stolen;
  VAR_9 = 3;
 }

 VAR_5 = FUNC_4(VAR_0, VAR_5, VAR_2->memtype, VAR_9);
 VAR_3 <<= 3;
 VAR_4 <<= 3;

 while (VAR_4) {
  u32 VAR_11 = FUNC_3(VAR_5);
  u32 VAR_12 = FUNC_0(VAR_5);

  for (VAR_10 = 7; VAR_10 >= 0; VAR_10--) {
   VAR_8 = 1 << (VAR_10 + 3);
   if (VAR_4 >= VAR_8 && !(VAR_3 & (VAR_8 - 1)))
    break;
  }
  VAR_12 |= (VAR_10 << 7);

  VAR_5 += VAR_8 << (VAR_0->node->type - 3);
  VAR_4 -= VAR_8;
  if (VAR_7) {
   u32 VAR_13 = VAR_2->tag->offset + ((VAR_6 >> 16) * VAR_7);
   VAR_11 |= (VAR_13 << 17);
   VAR_6 += VAR_8 << (VAR_0->node->type - 3);
  }

  while (VAR_8) {
   FUNC_2(VAR_1, VAR_3 + 0, VAR_12);
   FUNC_2(VAR_1, VAR_3 + 4, VAR_11);
   VAR_3 += 8;
   VAR_8 -= 8;
  }
 }
}
