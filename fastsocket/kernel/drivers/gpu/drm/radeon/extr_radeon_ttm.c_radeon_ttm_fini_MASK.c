
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initialized; int bdev; } ;
struct radeon_device {TYPE_1__ mman; scalar_t__ stollen_vga_memory; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (!VAR_2->mman.initialized)
  return;
 if (VAR_2->stollen_vga_memory) {
  VAR_3 = FUNC_1(VAR_2->stollen_vga_memory, 0);
  if (VAR_3 == 0) {
   FUNC_2(VAR_2->stollen_vga_memory);
   FUNC_4(VAR_2->stollen_vga_memory);
  }
  FUNC_3(&VAR_2->stollen_vga_memory);
 }
 FUNC_7(&VAR_2->mman.bdev, VAR_1);
 FUNC_7(&VAR_2->mman.bdev, VAR_0);
 FUNC_8(&VAR_2->mman.bdev);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
 VAR_2->mman.initialized = 0;
 FUNC_0("radeon: ttm finalized\n");
}
