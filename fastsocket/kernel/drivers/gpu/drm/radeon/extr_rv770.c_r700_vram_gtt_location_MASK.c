
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct radeon_mc {int mc_vram_size; int real_vram_size; scalar_t__ gtt_start; scalar_t__ gtt_end; scalar_t__ vram_start; scalar_t__ vram_end; } ;
struct TYPE_2__ {scalar_t__ gtt_base_align; } ;
struct radeon_device {int flags; TYPE_1__ mc; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct radeon_device*,struct radeon_mc*) ;
 int FUNC_3 (struct radeon_device*,TYPE_1__*,int ) ;

void FUNC_4(struct radeon_device *VAR_1, struct radeon_mc *VAR_2)
{
 u64 VAR_3, VAR_4;

 if (VAR_2->mc_vram_size > 0xE0000000) {

  FUNC_1(VAR_1->dev, "limiting VRAM\n");
  VAR_2->real_vram_size = 0xE0000000;
  VAR_2->mc_vram_size = 0xE0000000;
 }
 if (VAR_1->flags & VAR_0) {
  VAR_3 = VAR_2->gtt_start;
  VAR_4 = 0xFFFFFFFF - VAR_2->gtt_end;
  if (VAR_3 > VAR_4) {
   if (VAR_2->mc_vram_size > VAR_3) {
    FUNC_1(VAR_1->dev, "limiting VRAM\n");
    VAR_2->real_vram_size = VAR_3;
    VAR_2->mc_vram_size = VAR_3;
   }
   VAR_2->vram_start = VAR_2->gtt_start - VAR_2->mc_vram_size;
  } else {
   if (VAR_2->mc_vram_size > VAR_4) {
    FUNC_1(VAR_1->dev, "limiting VRAM\n");
    VAR_2->real_vram_size = VAR_4;
    VAR_2->mc_vram_size = VAR_4;
   }
   VAR_2->vram_start = VAR_2->gtt_end + 1;
  }
  VAR_2->vram_end = VAR_2->vram_start + VAR_2->mc_vram_size - 1;
  FUNC_0(VAR_1->dev, "VRAM: %lluM 0x%08llX - 0x%08llX (%lluM used)\n",
    VAR_2->mc_vram_size >> 20, VAR_2->vram_start,
    VAR_2->vram_end, VAR_2->real_vram_size >> 20);
 } else {
  FUNC_3(VAR_1, &VAR_1->mc, 0);
  VAR_1->mc.gtt_base_align = 0;
  FUNC_2(VAR_1, VAR_2);
 }
}
