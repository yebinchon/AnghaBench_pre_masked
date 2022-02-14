
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rv515_mc_save {int dummy; } ;
struct TYPE_2__ {int vram_start; int vram_end; int gtt_start; int gtt_end; int agp_base; int real_vram_size; } ;
struct radeon_device {int flags; TYPE_1__ mc; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct radeon_device*,struct rv515_mc_save*) ;
 int FUNC_11 (struct radeon_device*,struct rv515_mc_save*) ;
 scalar_t__ FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct radeon_device *VAR_7)
{
 struct rv515_mc_save VAR_8;


 FUNC_11(VAR_7, &VAR_8);


 if (FUNC_12(VAR_7))
  FUNC_8(VAR_7->dev, "Wait MC idle timeout before updating MC.\n");

 FUNC_6(VAR_5, VAR_7->mc.real_vram_size);

 FUNC_7(VAR_1,
   FUNC_0(VAR_7->mc.vram_start >> 16) |
   FUNC_1(VAR_7->mc.vram_end >> 16));
 FUNC_6(VAR_6,
  FUNC_5(VAR_7->mc.vram_start >> 16));
 if (VAR_7->flags & VAR_0) {
  FUNC_7(VAR_2,
   FUNC_2(VAR_7->mc.gtt_start >> 16) |
   FUNC_3(VAR_7->mc.gtt_end >> 16));
  FUNC_7(VAR_3, FUNC_9(VAR_7->mc.agp_base));
  FUNC_7(VAR_4,
   FUNC_4(FUNC_13(VAR_7->mc.agp_base)));
 } else {
  FUNC_7(VAR_2, 0xFFFFFFFF);
  FUNC_7(VAR_3, 0);
  FUNC_7(VAR_4, 0);
 }

 FUNC_10(VAR_7, &VAR_8);
}
