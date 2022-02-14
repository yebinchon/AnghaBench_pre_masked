
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ aper_size; scalar_t__ visible_vram_size; int real_vram_size; scalar_t__ mc_vram_size; int aper_base; } ;
struct radeon_device {int flags; TYPE_1__ mc; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_4)
{
 u64 VAR_5;


 VAR_4->mc.aper_base = FUNC_3(VAR_4->pdev, 0);
 VAR_4->mc.aper_size = FUNC_2(VAR_4->pdev, 0);
 VAR_4->mc.visible_vram_size = FUNC_4(VAR_4);

 if (VAR_4->mc.visible_vram_size > VAR_4->mc.aper_size)
  VAR_4->mc.visible_vram_size = VAR_4->mc.aper_size;
 VAR_5 = FUNC_0(VAR_0);
 if (VAR_4->flags & VAR_2) {
  uint32_t VAR_6;

  VAR_6 = FUNC_0(VAR_3);
  VAR_4->mc.real_vram_size = (((VAR_6 >> 16) - (VAR_6 & 0xffff) + 1) << 16);
  FUNC_1(VAR_1, VAR_4->mc.real_vram_size);
  VAR_4->mc.mc_vram_size = VAR_4->mc.real_vram_size;
 } else {
  VAR_4->mc.real_vram_size = FUNC_0(VAR_1);



  if (VAR_4->mc.real_vram_size == 0) {
   VAR_4->mc.real_vram_size = 8192 * 1024;
   FUNC_1(VAR_1, VAR_4->mc.real_vram_size);
  }



  if (VAR_4->mc.aper_size > VAR_5)
   VAR_5 = VAR_4->mc.aper_size;

  if (VAR_5 > VAR_4->mc.real_vram_size)
   VAR_4->mc.mc_vram_size = VAR_5;
  else
   VAR_4->mc.mc_vram_size = VAR_4->mc.real_vram_size;
 }
}
