
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_vma {int offset; } ;
struct TYPE_4__ {scalar_t__ vm; } ;
struct nouveau_cli {TYPE_1__ base; } ;
struct TYPE_5__ {scalar_t__ mem_type; int num_pages; } ;
struct TYPE_6__ {int addr_space_offset; TYPE_2__ mem; int offset; } ;
struct nouveau_bo {int tile_flags; int tile_mode; TYPE_3__ bo; } ;
struct drm_nouveau_gem_info {int size; int tile_flags; int tile_mode; int map_handle; int offset; int domain; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nouveau_vma* FUNC_0 (struct nouveau_bo*,scalar_t__) ;
 struct nouveau_cli* FUNC_1 (struct drm_file*) ;
 struct nouveau_bo* FUNC_2 (struct drm_gem_object*) ;

__attribute__((used)) static int
FUNC_3(struct drm_file *VAR_5, struct drm_gem_object *VAR_6,
   struct drm_nouveau_gem_info *VAR_7)
{
 struct nouveau_cli *VAR_8 = FUNC_1(VAR_5);
 struct nouveau_bo *VAR_9 = FUNC_2(VAR_6);
 struct nouveau_vma *VAR_10;

 if (VAR_9->bo.mem.mem_type == VAR_4)
  VAR_7->domain = VAR_1;
 else
  VAR_7->domain = VAR_2;

 VAR_7->offset = VAR_9->bo.offset;
 if (VAR_8->base.vm) {
  VAR_10 = FUNC_0(VAR_9, VAR_8->base.vm);
  if (!VAR_10)
   return -VAR_0;

  VAR_7->offset = VAR_10->offset;
 }

 VAR_7->size = VAR_9->bo.mem.num_pages << VAR_3;
 VAR_7->map_handle = VAR_9->bo.addr_space_offset;
 VAR_7->tile_mode = VAR_9->tile_mode;
 VAR_7->tile_flags = VAR_9->tile_flags;
 return 0;
}
