
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_vma {int head; scalar_t__ node; } ;
struct TYPE_4__ {scalar_t__ mem_type; } ;
struct TYPE_6__ {TYPE_2__* bdev; TYPE_1__ mem; } ;
struct nouveau_bo {TYPE_3__ bo; } ;
struct TYPE_5__ {int fence_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_vma*) ;
 int FUNC_2 (struct nouveau_vma*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;

void
FUNC_6(struct nouveau_bo *VAR_1, struct nouveau_vma *VAR_2)
{
 if (VAR_2->node) {
  if (VAR_1->bo.mem.mem_type != VAR_0) {
   FUNC_3(&VAR_1->bo.bdev->fence_lock);
   FUNC_5(&VAR_1->bo, 0, 0, 0);
   FUNC_4(&VAR_1->bo.bdev->fence_lock);
   FUNC_2(VAR_2);
  }

  FUNC_1(VAR_2);
  FUNC_0(&VAR_2->head);
 }
}
