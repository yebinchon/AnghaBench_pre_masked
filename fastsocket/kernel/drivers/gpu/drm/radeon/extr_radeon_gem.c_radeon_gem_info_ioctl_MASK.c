
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct ttm_mem_type_manager {scalar_t__ size; } ;
struct TYPE_7__ {int gtt_size; int real_vram_size; } ;
struct TYPE_5__ {struct ttm_mem_type_manager* man; } ;
struct TYPE_6__ {TYPE_1__ bdev; } ;
struct radeon_device {TYPE_4__* ring; TYPE_3__ mc; scalar_t__ stollen_vga_memory; TYPE_2__ mman; } ;
struct drm_radeon_gem_info {int vram_visible; int gart_size; int vram_size; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_8__ {int ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;

int FUNC_2(struct drm_device *VAR_4, void *VAR_5,
     struct drm_file *VAR_6)
{
 struct radeon_device *VAR_7 = VAR_4->dev_private;
 struct drm_radeon_gem_info *VAR_8 = VAR_5;
 struct ttm_mem_type_manager *VAR_9;
 unsigned VAR_10;

 VAR_9 = &VAR_7->mman.bdev.man[VAR_3];

 VAR_8->vram_size = VAR_7->mc.real_vram_size;
 VAR_8->vram_visible = (u64)VAR_9->size << VAR_0;
 if (VAR_7->stollen_vga_memory)
  VAR_8->vram_visible -= FUNC_0(VAR_7->stollen_vga_memory);
 VAR_8->vram_visible -= FUNC_1(VAR_7);
 VAR_8->gart_size = VAR_7->mc.gtt_size - 4096 - VAR_1*64*1024;
 for(VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10)
  VAR_8->gart_size -= VAR_7->ring[VAR_10].ring_size;
 return 0;
}
