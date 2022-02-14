
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int dev_mapping; } ;
struct TYPE_8__ {int object; } ;
struct TYPE_9__ {TYPE_1__ ref; } ;
struct TYPE_11__ {int initialized; TYPE_6__ bdev; TYPE_2__ bo_global_ref; } ;
struct TYPE_10__ {int real_vram_size; int gtt_size; } ;
struct radeon_device {TYPE_5__* ddev; TYPE_4__ mman; TYPE_3__ mc; int stollen_vga_memory; int need_dma32; } ;
struct TYPE_12__ {int dev_mapping; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct radeon_device*,int,int ,int,int ,int *,int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (TYPE_6__*,int ,int *,int ,int ) ;
 int FUNC_10 (TYPE_6__*,int ,int) ;

int FUNC_11(struct radeon_device *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8) {
  return VAR_8;
 }

 VAR_8 = FUNC_9(&VAR_7->mman.bdev,
          VAR_7->mman.bo_global_ref.ref.object,
          &VAR_6, VAR_0,
          VAR_7->need_dma32);
 if (VAR_8) {
  FUNC_0("failed initializing buffer object driver(%d).\n", VAR_8);
  return VAR_8;
 }
 VAR_7->mman.initialized = 1;
 VAR_8 = FUNC_10(&VAR_7->mman.bdev, VAR_5,
    VAR_7->mc.real_vram_size >> VAR_1);
 if (VAR_8) {
  FUNC_0("Failed initializing VRAM heap.\n");
  return VAR_8;
 }
 VAR_8 = FUNC_2(VAR_7, 256 * 1024, VAR_2, 1,
        VAR_3,
        ((void*)0), &VAR_7->stollen_vga_memory);
 if (VAR_8) {
  return VAR_8;
 }
 VAR_8 = FUNC_4(VAR_7->stollen_vga_memory, 0);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_3(VAR_7->stollen_vga_memory, VAR_3, ((void*)0));
 FUNC_6(VAR_7->stollen_vga_memory);
 if (VAR_8) {
  FUNC_5(&VAR_7->stollen_vga_memory);
  return VAR_8;
 }
 FUNC_1("radeon: %uM of VRAM memory ready\n",
   (unsigned) (VAR_7->mc.real_vram_size / (1024 * 1024)));
 VAR_8 = FUNC_10(&VAR_7->mman.bdev, VAR_4,
    VAR_7->mc.gtt_size >> VAR_1);
 if (VAR_8) {
  FUNC_0("Failed initializing GTT heap.\n");
  return VAR_8;
 }
 FUNC_1("radeon: %uM of GTT memory ready.\n",
   (unsigned)(VAR_7->mc.gtt_size / (1024 * 1024)));
 VAR_7->mman.bdev.dev_mapping = VAR_7->ddev->dev_mapping;

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_0("Failed to init debugfs\n");
  return VAR_8;
 }
 return 0;
}
