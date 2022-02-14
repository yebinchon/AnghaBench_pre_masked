
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int refcount; struct nouveau_object* parent; } ;
struct nouveau_mm {scalar_t__ block_size; } ;
struct nouveau_mem {int dummy; } ;
struct nouveau_instobj {int dummy; } ;
struct nouveau_instmem {int (* alloc ) (struct nouveau_instmem*,struct nouveau_object*,int,int,struct nouveau_object**) ;} ;
struct nouveau_gpuobj {int flags; int size; int heap; TYPE_3__* node; int addr; struct nouveau_object* parent; } ;
struct nouveau_bar {int (* alloc ) (struct nouveau_bar*,struct nouveau_object*,struct nouveau_mem*,struct nouveau_object**) ;} ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct TYPE_5__ {struct nouveau_mm heap; int addr; } ;
struct TYPE_4__ {int size; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 struct nouveau_bar* FUNC_2 (struct nouveau_object*) ;
 struct nouveau_instmem* FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nouveau_mm*,int,int,int,int ,TYPE_3__**) ;
 int FUNC_5 (int *,int ,int,int) ;
 int FUNC_6 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,int,void**) ;
 int FUNC_7 (int *,struct nouveau_object**) ;
 int FUNC_8 (struct nouveau_object*,char*) ;
 TYPE_2__* FUNC_9 (struct nouveau_object*) ;
 TYPE_1__* FUNC_10 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_11 (struct nouveau_object*,int) ;
 int FUNC_12 (struct nouveau_gpuobj*,int,int) ;
 int FUNC_13 (struct nouveau_instmem*,struct nouveau_object*,int,int,struct nouveau_object**) ;
 int FUNC_14 (struct nouveau_bar*,struct nouveau_object*,struct nouveau_mem*,struct nouveau_object**) ;
 scalar_t__ FUNC_15 (int ) ;

int
FUNC_16(struct nouveau_object *VAR_4,
         struct nouveau_object *VAR_5,
         struct nouveau_oclass *VAR_6, u32 VAR_7,
         struct nouveau_object *VAR_8,
         u32 VAR_9, u32 VAR_10, u32 VAR_11,
         int VAR_12, void **VAR_13)
{
 struct nouveau_instmem *VAR_14 = FUNC_3(VAR_4);
 struct nouveau_bar *VAR_15 = FUNC_2(VAR_4);
 struct nouveau_gpuobj *VAR_16;
 struct nouveau_mm *VAR_17 = ((void*)0);
 int VAR_18, VAR_19;
 u64 VAR_20;

 *VAR_13 = ((void*)0);

 if (VAR_8) {
  while ((VAR_8 = FUNC_11(VAR_8, VAR_3))) {
   if (FUNC_9(VAR_8)->heap.block_size)
    break;
   VAR_8 = VAR_8->parent;
  }

  if (FUNC_15(VAR_8 == ((void*)0))) {
   FUNC_8(VAR_4, "no gpuobj heap\n");
   return -VAR_0;
  }

  VAR_20 = FUNC_9(VAR_8)->addr;
  VAR_17 = &FUNC_9(VAR_8)->heap;
  FUNC_0(&VAR_4->refcount);
 } else {
  VAR_18 = VAR_14->alloc(VAR_14, VAR_4, VAR_9, VAR_10, &VAR_4);
  VAR_8 = VAR_4;
  if (VAR_18)
   return VAR_18;

  VAR_20 = FUNC_10(VAR_8)->addr;
  VAR_9 = FUNC_10(VAR_8)->size;

  if (VAR_15 && VAR_15->alloc) {
   struct nouveau_instobj *VAR_21 = (void *)VAR_4;
   struct nouveau_mem **VAR_22 = (void *)(VAR_21 + 1);
   struct nouveau_mem *VAR_23 = *VAR_22;
   if (!VAR_15->alloc(VAR_15, VAR_4, VAR_23, &VAR_8)) {
    FUNC_7(((void*)0), &VAR_4);
    VAR_4 = VAR_8;
   }
  }
 }

 VAR_18 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7 |
         VAR_3, VAR_12, VAR_13);
 FUNC_7(((void*)0), &VAR_4);
 VAR_16 = *VAR_13;
 if (VAR_18)
  return VAR_18;

 VAR_16->parent = VAR_8;
 VAR_16->flags = VAR_11;
 VAR_16->addr = VAR_20;
 VAR_16->size = VAR_9;

 if (VAR_17) {
  VAR_18 = FUNC_4(VAR_17, 1, VAR_9, VAR_9,
          FUNC_1(VAR_10, (u32)1), &VAR_16->node);
  if (VAR_18)
   return VAR_18;

  VAR_16->addr += VAR_16->node->offset;
 }

 if (VAR_16->flags & VAR_1) {
  VAR_18 = FUNC_5(&VAR_16->heap, 0, VAR_16->size, 1);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_11 & VAR_2) {
  for (VAR_19 = 0; VAR_19 < VAR_16->size; VAR_19 += 4)
   FUNC_12(VAR_16, VAR_19, 0x00000000);
 }

 return VAR_18;
}
