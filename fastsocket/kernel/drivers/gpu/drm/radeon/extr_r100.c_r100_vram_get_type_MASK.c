
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int vram_is_ddr; int vram_width; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_1__ mc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_11)
{
 uint32_t VAR_12;

 VAR_11->mc.vram_is_ddr = 0;
 if (VAR_11->flags & VAR_4)
  VAR_11->mc.vram_is_ddr = 1;
 else if (FUNC_0(VAR_8) & VAR_5)
  VAR_11->mc.vram_is_ddr = 1;
 if ((VAR_11->family == VAR_2) ||
     (VAR_11->family == VAR_0) ||
     (VAR_11->family == VAR_1)) {
  VAR_12 = FUNC_0(VAR_6);
  if (VAR_12 & VAR_10) {
   VAR_11->mc.vram_width = 32;
  } else {
   VAR_11->mc.vram_width = 64;
  }
  if (VAR_11->flags & VAR_9) {
   VAR_11->mc.vram_width /= 4;
   VAR_11->mc.vram_is_ddr = 1;
  }
 } else if (VAR_11->family <= VAR_3) {
  VAR_12 = FUNC_0(VAR_6);
  if (VAR_12 & VAR_7) {
   VAR_11->mc.vram_width = 128;
  } else {
   VAR_11->mc.vram_width = 64;
  }
 } else {

  VAR_11->mc.vram_width = 128;
 }
}
