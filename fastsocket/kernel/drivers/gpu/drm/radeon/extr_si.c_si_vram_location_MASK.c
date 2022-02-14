
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct radeon_mc {int vram_start; int mc_vram_size; int real_vram_size; int aper_size; int vram_end; } ;
struct radeon_device {int dev; } ;


 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
        struct radeon_mc *VAR_1, u64 VAR_2)
{
 VAR_1->vram_start = VAR_2;
 if (VAR_1->mc_vram_size > (0xFFFFFFFFFFULL - VAR_2 + 1)) {
  FUNC_1(VAR_0->dev, "limiting VRAM to PCI aperture size\n");
  VAR_1->real_vram_size = VAR_1->aper_size;
  VAR_1->mc_vram_size = VAR_1->aper_size;
 }
 VAR_1->vram_end = VAR_1->vram_start + VAR_1->mc_vram_size - 1;
 FUNC_0(VAR_0->dev, "VRAM: %lluM 0x%016llX - 0x%016llX (%lluM used)\n",
   VAR_1->mc_vram_size >> 20, VAR_1->vram_start,
   VAR_1->vram_end, VAR_1->real_vram_size >> 20);
}
