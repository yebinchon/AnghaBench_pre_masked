
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ hdmi0_status; scalar_t__ disp_int; } ;
struct TYPE_7__ {TYPE_2__ r500; } ;
struct TYPE_8__ {TYPE_3__ stat_regs; int * pflip; int vblank_queue; scalar_t__* crtc_vblank_int; } ;
struct TYPE_5__ {int vblank_sync; } ;
struct radeon_device {int family; scalar_t__ msi_enabled; int audio_work; int hotplug_work; TYPE_4__ irq; TYPE_1__ pm; int ddev; } ;





 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,int ) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct radeon_device *VAR_7)
{
 u32 VAR_8, VAR_9;
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_8 = FUNC_13(VAR_7);
 if (!VAR_8 &&
     !VAR_7->irq.stat_regs.r500.disp_int &&
     !VAR_7->irq.stat_regs.r500.hdmi0_status) {
  return VAR_1;
 }
 while (VAR_8 ||
        VAR_7->irq.stat_regs.r500.disp_int ||
        VAR_7->irq.stat_regs.r500.hdmi0_status) {

  if (FUNC_1(VAR_8)) {
   FUNC_12(VAR_7, VAR_4);
  }

  if (FUNC_5(VAR_7->irq.stat_regs.r500.disp_int)) {
   if (VAR_7->irq.crtc_vblank_int[0]) {
    FUNC_10(VAR_7->ddev, 0);
    VAR_7->pm.vblank_sync = 1;
    FUNC_15(&VAR_7->irq.vblank_queue);
   }
   if (FUNC_9(&VAR_7->irq.pflip[0]))
    FUNC_11(VAR_7, 0);
  }
  if (FUNC_6(VAR_7->irq.stat_regs.r500.disp_int)) {
   if (VAR_7->irq.crtc_vblank_int[1]) {
    FUNC_10(VAR_7->ddev, 1);
    VAR_7->pm.vblank_sync = 1;
    FUNC_15(&VAR_7->irq.vblank_queue);
   }
   if (FUNC_9(&VAR_7->irq.pflip[1]))
    FUNC_11(VAR_7, 1);
  }
  if (FUNC_3(VAR_7->irq.stat_regs.r500.disp_int)) {
   VAR_10 = 1;
   FUNC_0("HPD1\n");
  }
  if (FUNC_4(VAR_7->irq.stat_regs.r500.disp_int)) {
   VAR_10 = 1;
   FUNC_0("HPD2\n");
  }
  if (FUNC_2(VAR_7->irq.stat_regs.r500.hdmi0_status)) {
   VAR_11 = 1;
   FUNC_0("HDMI0\n");
  }
  VAR_8 = FUNC_13(VAR_7);
 }
 if (VAR_10)
  FUNC_14(&VAR_7->hotplug_work);
 if (VAR_11)
  FUNC_14(&VAR_7->audio_work);
 if (VAR_7->msi_enabled) {
  switch (VAR_7->family) {
  case 130:
  case 129:
  case 128:
   VAR_9 = FUNC_7(VAR_2) & ~VAR_5;
   FUNC_8(VAR_2, VAR_9);
   FUNC_8(VAR_2, VAR_9 | VAR_5);
   break;
  default:
   FUNC_8(VAR_3, VAR_6);
   break;
  }
 }
 return VAR_0;
}
