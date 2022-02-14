
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mc_vram_size; int vram_width; scalar_t__ vram_is_ddr; scalar_t__ aper_size; int aper_base; int vram_mtrr; } ;
struct radeon_device {TYPE_1__ mc; } ;


 int FUNC_0 (char*,int,char) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int FUNC_2 (struct radeon_device*) ;

int FUNC_3(struct radeon_device *VAR_1)
{

 VAR_1->mc.vram_mtrr = FUNC_1(VAR_1->mc.aper_base, VAR_1->mc.aper_size,
   VAR_0, 1);
 FUNC_0("Detected VRAM RAM=%lluM, BAR=%lluM\n",
  VAR_1->mc.mc_vram_size >> 20,
  (unsigned long long)VAR_1->mc.aper_size >> 20);
 FUNC_0("RAM width %dbits %cDR\n",
   VAR_1->mc.vram_width, VAR_1->mc.vram_is_ddr ? 'D' : 'S');
 return FUNC_2(VAR_1);
}
