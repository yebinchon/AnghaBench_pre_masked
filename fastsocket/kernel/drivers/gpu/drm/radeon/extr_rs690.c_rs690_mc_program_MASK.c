
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rv515_mc_save {int dummy; } ;
struct TYPE_2__ {int vram_start; int vram_end; } ;
struct radeon_device {TYPE_1__ mc; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,struct rv515_mc_save*) ;
 int FUNC_8 (struct radeon_device*,struct rv515_mc_save*) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_2)
{
 struct rv515_mc_save VAR_3;


 FUNC_8(VAR_2, &VAR_3);


 if (FUNC_6(VAR_2))
  FUNC_5(VAR_2->dev, "Wait MC idle timeout before updating MC.\n");

 FUNC_4(VAR_0,
   FUNC_0(VAR_2->mc.vram_start >> 16) |
   FUNC_1(VAR_2->mc.vram_end >> 16));
 FUNC_3(VAR_1,
  FUNC_2(VAR_2->mc.vram_start >> 16));

 FUNC_7(VAR_2, &VAR_3);
}
