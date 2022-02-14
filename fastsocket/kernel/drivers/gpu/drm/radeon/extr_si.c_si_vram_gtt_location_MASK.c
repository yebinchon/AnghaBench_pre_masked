
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_mc {int mc_vram_size; int real_vram_size; } ;
struct TYPE_2__ {scalar_t__ gtt_base_align; } ;
struct radeon_device {TYPE_1__ mc; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_mc*) ;
 int FUNC_2 (struct radeon_device*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
     struct radeon_mc *VAR_1)
{
 if (VAR_1->mc_vram_size > 0xFFC0000000ULL) {

  FUNC_0(VAR_0->dev, "limiting VRAM\n");
  VAR_1->real_vram_size = 0xFFC0000000ULL;
  VAR_1->mc_vram_size = 0xFFC0000000ULL;
 }
 FUNC_2(VAR_0, &VAR_0->mc, 0);
 VAR_0->mc.gtt_base_align = 0;
 FUNC_1(VAR_0, VAR_1);
}
