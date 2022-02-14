
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ block_size; } ;
struct nouveau_gpuobj {int flags; int size; int base; TYPE_2__ heap; scalar_t__ node; int parent; } ;
struct TYPE_3__ {int heap; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct nouveau_gpuobj*,int,int) ;

void
FUNC_5(struct nouveau_gpuobj *VAR_1)
{
 int VAR_2;

 if (VAR_1->flags & VAR_0) {
  for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2 += 4)
   FUNC_4(VAR_1, VAR_2, 0x00000000);
 }

 if (VAR_1->node) {
  FUNC_1(&FUNC_3(VAR_1->parent)->heap,
    &VAR_1->node);
 }

 if (VAR_1->heap.block_size)
  FUNC_0(&VAR_1->heap);

 FUNC_2(&VAR_1->base);
}
