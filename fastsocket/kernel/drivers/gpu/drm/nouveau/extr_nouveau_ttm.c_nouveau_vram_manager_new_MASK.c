
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ttm_placement {int dummy; } ;
struct ttm_mem_type_manager {int bdev; } ;
struct ttm_mem_reg {int num_pages; int page_alignment; int start; struct nouveau_mem* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;
struct nouveau_mem {int page_shift; int offset; } ;
struct TYPE_2__ {int (* get ) (struct nouveau_fb*,int,int,int,int,struct nouveau_mem**) ;} ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_drm {int device; } ;
struct nouveau_bo {int tile_flags; int page_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_bo* FUNC_1 (struct ttm_buffer_object*) ;
 struct nouveau_fb* FUNC_2 (int ) ;
 int FUNC_3 (struct nouveau_fb*,int,int,int,int,struct nouveau_mem**) ;

__attribute__((used)) static int
FUNC_4(struct ttm_mem_type_manager *VAR_3,
    struct ttm_buffer_object *VAR_4,
    struct ttm_placement *VAR_5,
    struct ttm_mem_reg *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_0(VAR_3->bdev);
 struct nouveau_fb *VAR_8 = FUNC_2(VAR_7->device);
 struct nouveau_bo *VAR_9 = FUNC_1(VAR_4);
 struct nouveau_mem *VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 if (VAR_9->tile_flags & VAR_1)
  VAR_11 = 1 << VAR_9->page_shift;

 VAR_12 = VAR_8->ram.get(VAR_8, VAR_6->num_pages << VAR_2,
      VAR_6->page_alignment << VAR_2, VAR_11,
      (VAR_9->tile_flags >> 8) & 0x3ff, &VAR_10);
 if (VAR_12) {
  VAR_6->mm_node = ((void*)0);
  return (VAR_12 == -VAR_0) ? 0 : VAR_12;
 }

 VAR_10->page_shift = VAR_9->page_shift;

 VAR_6->mm_node = VAR_10;
 VAR_6->start = VAR_10->offset >> VAR_2;
 return 0;
}
