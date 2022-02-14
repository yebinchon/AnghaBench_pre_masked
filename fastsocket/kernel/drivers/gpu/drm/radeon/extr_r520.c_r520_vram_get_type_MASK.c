
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int vram_width; int vram_is_ddr; } ;
struct radeon_device {TYPE_1__ mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_4)
{
 uint32_t VAR_5;

 VAR_4->mc.vram_width = 128;
 VAR_4->mc.vram_is_ddr = 1;
 VAR_5 = FUNC_0(VAR_1);
 switch ((VAR_5 & VAR_2) >> VAR_3) {
 case 0:
  VAR_4->mc.vram_width = 32;
  break;
 case 1:
  VAR_4->mc.vram_width = 64;
  break;
 case 2:
  VAR_4->mc.vram_width = 128;
  break;
 case 3:
  VAR_4->mc.vram_width = 256;
  break;
 default:
  VAR_4->mc.vram_width = 128;
  break;
 }
 if (VAR_5 & VAR_0)
  VAR_4->mc.vram_width *= 2;
}
