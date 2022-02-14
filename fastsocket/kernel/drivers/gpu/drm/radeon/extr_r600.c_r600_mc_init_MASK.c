
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vram_is_ddr; int vram_width; int igp_sideport_enabled; int aper_size; int visible_vram_size; void* real_vram_size; void* mc_vram_size; int aper_base; } ;
struct radeon_device {int flags; TYPE_1__ mc; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_8)
{
 u32 VAR_9;
 int VAR_10, VAR_11;


 VAR_8->mc.vram_is_ddr = 1;
 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 & VAR_1) {
  VAR_10 = 16;
 } else if (VAR_9 & VAR_0) {
  VAR_10 = 64;
 } else {
  VAR_10 = 32;
 }
 VAR_9 = FUNC_0(VAR_2);
 switch ((VAR_9 & VAR_4) >> VAR_5) {
 case 0:
 default:
  VAR_11 = 1;
  break;
 case 1:
  VAR_11 = 2;
  break;
 case 2:
  VAR_11 = 4;
  break;
 case 3:
  VAR_11 = 8;
  break;
 }
 VAR_8->mc.vram_width = VAR_11 * VAR_10;

 VAR_8->mc.aper_base = FUNC_2(VAR_8->pdev, 0);
 VAR_8->mc.aper_size = FUNC_1(VAR_8->pdev, 0);

 VAR_8->mc.mc_vram_size = FUNC_0(VAR_3);
 VAR_8->mc.real_vram_size = FUNC_0(VAR_3);
 VAR_8->mc.visible_vram_size = VAR_8->mc.aper_size;
 FUNC_3(VAR_8, &VAR_8->mc);

 if (VAR_8->flags & VAR_6) {
  FUNC_6(VAR_8);
  VAR_8->mc.igp_sideport_enabled = FUNC_4(VAR_8);
 }
 FUNC_5(VAR_8);
 return 0;
}
