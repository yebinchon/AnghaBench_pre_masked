
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_reg {scalar_t__ mem_type; int * mm_node; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; int ttm; int bdev; } ;
struct nouveau_drm_tile {int dummy; } ;
struct TYPE_3__ {int move; } ;
struct nouveau_drm {int device; TYPE_1__ ttm; } ;
struct nouveau_bo {struct nouveau_drm_tile* tile; } ;
struct TYPE_4__ {scalar_t__ card_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_drm* FUNC_1 (int ) ;
 struct nouveau_bo* FUNC_2 (struct ttm_buffer_object*) ;
 int FUNC_3 (struct ttm_buffer_object*,int,int,int,struct ttm_mem_reg*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int,int,struct ttm_mem_reg*) ;
 int FUNC_5 (struct ttm_buffer_object*,int,int,int,struct ttm_mem_reg*) ;
 int FUNC_6 (struct ttm_buffer_object*,struct ttm_mem_reg*,struct nouveau_drm_tile**) ;
 int FUNC_7 (struct ttm_buffer_object*,struct nouveau_drm_tile*,struct nouveau_drm_tile**) ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (struct ttm_buffer_object*,int,int,struct ttm_mem_reg*) ;

__attribute__((used)) static int
FUNC_10(struct ttm_buffer_object *VAR_2, bool VAR_3, bool VAR_4,
  bool VAR_5, struct ttm_mem_reg *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_1(VAR_2->bdev);
 struct nouveau_bo *VAR_8 = FUNC_2(VAR_2);
 struct ttm_mem_reg *VAR_9 = &VAR_2->mem;
 struct nouveau_drm_tile *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 if (FUNC_8(VAR_7->device)->card_type < VAR_0) {
  VAR_11 = FUNC_6(VAR_2, VAR_6, &VAR_10);
  if (VAR_11)
   return VAR_11;
 }


 if (VAR_9->mem_type == VAR_1 && !VAR_2->ttm) {
  FUNC_0(VAR_2->mem.mm_node != ((void*)0));
  VAR_2->mem = *VAR_6;
  VAR_6->mm_node = ((void*)0);
  goto out;
 }


 if (!VAR_7->ttm.move) {
  VAR_11 = FUNC_9(VAR_2, VAR_3, VAR_5, VAR_6);
  goto out;
 }


 if (VAR_6->mem_type == VAR_1)
  VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
 else if (VAR_9->mem_type == VAR_1)
  VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
 else
  VAR_11 = FUNC_5(VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6);

 if (!VAR_11)
  goto out;


 VAR_11 = FUNC_9(VAR_2, VAR_3, VAR_5, VAR_6);

out:
 if (FUNC_8(VAR_7->device)->card_type < VAR_0) {
  if (VAR_11)
   FUNC_7(VAR_2, ((void*)0), &VAR_10);
  else
   FUNC_7(VAR_2, VAR_10, &VAR_8->tile);
 }

 return VAR_11;
}
