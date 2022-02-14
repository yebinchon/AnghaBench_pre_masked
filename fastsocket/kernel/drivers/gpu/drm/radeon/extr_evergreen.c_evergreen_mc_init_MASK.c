
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vram_is_ddr; int vram_width; unsigned long long mc_vram_size; unsigned long long real_vram_size; int aper_size; int visible_vram_size; int aper_base; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ mc; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,TYPE_1__*) ;
 int FUNC_4 (struct radeon_device*) ;

int FUNC_5(struct radeon_device *VAR_11)
{
 u32 VAR_12;
 int VAR_13, VAR_14;


 VAR_11->mc.vram_is_ddr = 1;
 if ((VAR_11->family == VAR_2) ||
     (VAR_11->family == VAR_3) ||
     (VAR_11->family == VAR_4))
  VAR_12 = FUNC_0(VAR_6);
 else
  VAR_12 = FUNC_0(VAR_7);
 if (VAR_12 & VAR_1) {
  VAR_13 = 16;
 } else if (VAR_12 & VAR_0) {
  VAR_13 = 64;
 } else {
  VAR_13 = 32;
 }
 VAR_12 = FUNC_0(VAR_8);
 switch ((VAR_12 & VAR_9) >> VAR_10) {
 case 0:
 default:
  VAR_14 = 1;
  break;
 case 1:
  VAR_14 = 2;
  break;
 case 2:
  VAR_14 = 4;
  break;
 case 3:
  VAR_14 = 8;
  break;
 }
 VAR_11->mc.vram_width = VAR_14 * VAR_13;

 VAR_11->mc.aper_base = FUNC_2(VAR_11->pdev, 0);
 VAR_11->mc.aper_size = FUNC_1(VAR_11->pdev, 0);

 if ((VAR_11->family == VAR_2) ||
     (VAR_11->family == VAR_3) ||
     (VAR_11->family == VAR_4)) {

  VAR_11->mc.mc_vram_size = FUNC_0(VAR_5);
  VAR_11->mc.real_vram_size = FUNC_0(VAR_5);
 } else {

  VAR_11->mc.mc_vram_size = FUNC_0(VAR_5) * 1024ULL * 1024ULL;
  VAR_11->mc.real_vram_size = FUNC_0(VAR_5) * 1024ULL * 1024ULL;
 }
 VAR_11->mc.visible_vram_size = VAR_11->mc.aper_size;
 FUNC_3(VAR_11, &VAR_11->mc);
 FUNC_4(VAR_11);

 return 0;
}
