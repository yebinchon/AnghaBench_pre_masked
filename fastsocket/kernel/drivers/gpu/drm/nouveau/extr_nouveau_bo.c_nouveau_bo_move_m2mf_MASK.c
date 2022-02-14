
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_reg {struct nouveau_mem* mm_node; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; int bdev; } ;
struct nouveau_mem {int * vma; } ;
struct TYPE_4__ {int (* move ) (struct nouveau_channel*,struct ttm_buffer_object*,struct ttm_mem_reg*,struct ttm_mem_reg*) ;} ;
struct nouveau_drm {TYPE_1__ ttm; int device; struct nouveau_channel* channel; } ;
struct nouveau_channel {TYPE_2__* cli; } ;
struct nouveau_bo {int dummy; } ;
struct TYPE_6__ {scalar_t__ card_type; } ;
struct TYPE_5__ {int mutex; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_channel* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 struct nouveau_bo* FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct nouveau_channel*,struct nouveau_bo*,int,int,struct ttm_mem_reg*) ;
 int FUNC_5 (struct nouveau_channel*,struct nouveau_bo*,struct ttm_mem_reg*,int *) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (struct nouveau_channel*,struct ttm_buffer_object*,struct ttm_mem_reg*,struct ttm_mem_reg*) ;

__attribute__((used)) static int
FUNC_8(struct ttm_buffer_object *VAR_2, int VAR_3, bool VAR_4,
       bool VAR_5, struct ttm_mem_reg *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_2(VAR_2->bdev);
 struct nouveau_channel *VAR_8 = VAR_8 = VAR_7->channel;
 struct nouveau_bo *VAR_9 = FUNC_3(VAR_2);
 struct ttm_mem_reg *VAR_10 = &VAR_2->mem;
 int VAR_11;

 FUNC_0(&VAR_8->cli->mutex);





 if (FUNC_6(VAR_7->device)->card_type >= VAR_0) {
  struct nouveau_mem *VAR_12 = VAR_10->mm_node;

  VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_10, &VAR_12->vma[0]);
  if (VAR_11)
   goto out;

  VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_6, &VAR_12->vma[1]);
  if (VAR_11)
   goto out;
 }

 VAR_11 = VAR_7->ttm.move(VAR_8, VAR_2, &VAR_2->mem, VAR_6);
 if (VAR_11 == 0) {
  VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_3,
          VAR_5, VAR_6);
 }

out:
 FUNC_1(&VAR_8->cli->mutex);
 return VAR_11;
}
