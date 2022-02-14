
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct radeon_device*,struct radeon_mc*) ;
 int FUNC_4 (struct radeon_device*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_3, struct radeon_mc *VAR_4)
{
 u64 VAR_5, VAR_6;

 if (VAR_4->mc_vram_size > 0xE0000000) {

  FUNC_2(VAR_3->dev, "limiting VRAM\n");
  VAR_4->real_vram_size = 0xE0000000;
  VAR_4->mc_vram_size = 0xE0000000;
 }
 if (VAR_3->flags & VAR_1) {
  VAR_5 = VAR_4->gtt_start;
  VAR_6 = 0xFFFFFFFF - VAR_4->gtt_end;
  if (VAR_5 > VAR_6) {
   if (VAR_4->mc_vram_size > VAR_5) {
    FUNC_2(VAR_3->dev, "limiting VRAM\n");
    VAR_4->real_vram_size = VAR_5;
    VAR_4->mc_vram_size = VAR_5;
   }
   VAR_4->vram_start = VAR_4->gtt_start - VAR_4->mc_vram_size;
  } else {
   if (VAR_4->mc_vram_size > VAR_6) {
    FUNC_2(VAR_3->dev, "limiting VRAM\n");
    VAR_4->real_vram_size = VAR_6;
    VAR_4->mc_vram_size = VAR_6;
   }
   VAR_4->vram_start = VAR_4->gtt_end + 1;
  }
  VAR_4->vram_end = VAR_4->vram_start + VAR_4->mc_vram_size - 1;
  FUNC_1(VAR_3->dev, "VRAM: %lluM 0x%08llX - 0x%08llX (%lluM used)\n",
    VAR_4->mc_vram_size >> 20, VAR_4->vram_start,
    VAR_4->vram_end, VAR_4->real_vram_size >> 20);
 } else {
  u64 VAR_7 = 0;
  if (VAR_3->flags & VAR_2) {
   VAR_7 = FUNC_0(VAR_0) & 0xFFFF;
   VAR_7 <<= 24;
  }
  FUNC_4(VAR_3, &VAR_3->mc, VAR_7);
  VAR_3->mc.gtt_base_align = 0;
  FUNC_3(VAR_3, VAR_4);
 }
}
