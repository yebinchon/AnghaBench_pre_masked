
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int vram_start; int gtt_start; int gtt_end; int vram_end; int agp_base; } ;
struct TYPE_3__ {int gpu_addr; } ;
struct radeon_device {int flags; scalar_t__ family; int dev; TYPE_2__ mc; TYPE_1__ vram_scratch; } ;
struct evergreen_mc_save {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct radeon_device*,struct evergreen_mc_save*) ;
 int FUNC_4 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

void FUNC_7(struct radeon_device *VAR_18)
{
 struct evergreen_mc_save VAR_19;
 u32 VAR_20;
 int VAR_21, VAR_22;


 for (VAR_21 = 0, VAR_22 = 0; VAR_21 < 32; VAR_21++, VAR_22 += 0x18) {
  FUNC_1((0x2c14 + VAR_22), 0x00000000);
  FUNC_1((0x2c18 + VAR_22), 0x00000000);
  FUNC_1((0x2c1c + VAR_22), 0x00000000);
  FUNC_1((0x2c20 + VAR_22), 0x00000000);
  FUNC_1((0x2c24 + VAR_22), 0x00000000);
 }
 FUNC_1(VAR_6, 0);

 FUNC_4(VAR_18, &VAR_19);
 if (FUNC_5(VAR_18)) {
  FUNC_2(VAR_18->dev, "Wait for MC idle timedout !\n");
 }

 FUNC_1(VAR_16, VAR_17);

 if (VAR_18->flags & VAR_15) {
  if (VAR_18->mc.vram_start < VAR_18->mc.gtt_start) {

   FUNC_1(VAR_14,
    VAR_18->mc.vram_start >> 12);
   FUNC_1(VAR_13,
    VAR_18->mc.gtt_end >> 12);
  } else {

   FUNC_1(VAR_14,
    VAR_18->mc.gtt_start >> 12);
   FUNC_1(VAR_13,
    VAR_18->mc.vram_end >> 12);
  }
 } else {
  FUNC_1(VAR_14,
   VAR_18->mc.vram_start >> 12);
  FUNC_1(VAR_13,
   VAR_18->mc.vram_end >> 12);
 }
 FUNC_1(VAR_12, VAR_18->vram_scratch.gpu_addr >> 12);

 if ((VAR_18->family == VAR_0) ||
     (VAR_18->family == VAR_1) ||
     (VAR_18->family == VAR_2)) {
  VAR_20 = FUNC_0(VAR_7) & 0x000FFFFF;
  VAR_20 |= ((VAR_18->mc.vram_end >> 20) & 0xF) << 24;
  VAR_20 |= ((VAR_18->mc.vram_start >> 20) & 0xF) << 20;
  FUNC_1(VAR_7, VAR_20);
 }
 VAR_20 = ((VAR_18->mc.vram_end >> 24) & 0xFFFF) << 16;
 VAR_20 |= ((VAR_18->mc.vram_start >> 24) & 0xFFFF);
 FUNC_1(VAR_11, VAR_20);
 FUNC_1(VAR_3, (VAR_18->mc.vram_start >> 8));
 FUNC_1(VAR_4, (2 << 7) | (1 << 30));
 FUNC_1(VAR_5, 0x3FFFFFFF);
 if (VAR_18->flags & VAR_15) {
  FUNC_1(VAR_10, VAR_18->mc.gtt_end >> 16);
  FUNC_1(VAR_9, VAR_18->mc.gtt_start >> 16);
  FUNC_1(VAR_8, VAR_18->mc.agp_base >> 22);
 } else {
  FUNC_1(VAR_8, 0);
  FUNC_1(VAR_10, 0x0FFFFFFF);
  FUNC_1(VAR_9, 0x0FFFFFFF);
 }
 if (FUNC_5(VAR_18)) {
  FUNC_2(VAR_18->dev, "Wait for MC idle timedout !\n");
 }
 FUNC_3(VAR_18, &VAR_19);


 FUNC_6(VAR_18);
}
