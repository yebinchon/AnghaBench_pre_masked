
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vblank_sync; scalar_t__ active_crtcs; } ;
struct TYPE_3__ {int vblank_queue; } ;
struct radeon_device {TYPE_2__ pm; TYPE_1__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1)
{
 if (VAR_1->pm.active_crtcs) {
  VAR_1->pm.vblank_sync = 0;
  FUNC_1(
   VAR_1->irq.vblank_queue, VAR_1->pm.vblank_sync,
   FUNC_0(VAR_0));
 }
}
