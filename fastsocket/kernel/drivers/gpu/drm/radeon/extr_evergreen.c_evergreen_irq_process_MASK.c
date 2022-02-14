
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int rptr; int ptr_mask; int lock; int * ring; int enabled; } ;
struct TYPE_7__ {int disp_int; int disp_int_cont; int disp_int_cont2; int disp_int_cont3; int disp_int_cont4; int disp_int_cont5; int afmt_status1; int afmt_status2; int afmt_status3; int afmt_status4; int afmt_status5; int afmt_status6; } ;
struct TYPE_8__ {TYPE_2__ evergreen; } ;
struct TYPE_9__ {TYPE_3__ stat_regs; int * pflip; int vblank_queue; int * crtc_vblank_int; } ;
struct TYPE_6__ {int vblank_sync; } ;
struct radeon_device {TYPE_5__ ih; int audio_work; int hotplug_work; int family; int dev; TYPE_4__ irq; TYPE_1__ pm; int ddev; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct radeon_device*,int) ;
 int FUNC_14 (struct radeon_device*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct radeon_device *VAR_31)
{
 u32 VAR_32;
 u32 VAR_33;
 u32 VAR_34, VAR_35;
 u32 VAR_36;
 bool VAR_37 = 0;
 bool VAR_38 = 0;

 if (!VAR_31->ih.enabled || VAR_31->shutdown)
  return VAR_13;

 VAR_32 = FUNC_10(VAR_31);

restart_ih:

 if (FUNC_7(&VAR_31->ih.lock, 1))
  return VAR_13;

 VAR_33 = VAR_31->ih.rptr;
 FUNC_0("r600_irq_process start: rptr %d, wptr %d\n", VAR_33, VAR_32);


 FUNC_15();


 FUNC_11(VAR_31);

 while (VAR_33 != VAR_32) {

  VAR_36 = VAR_33 / 4;
  VAR_34 = FUNC_12(VAR_31->ih.ring[VAR_36]) & 0xff;
  VAR_35 = FUNC_12(VAR_31->ih.ring[VAR_36 + 1]) & 0xfffffff;

  switch (VAR_34) {
  case 1:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.disp_int & VAR_14) {
     if (VAR_31->irq.crtc_vblank_int[0]) {
      FUNC_9(VAR_31->ddev, 0);
      VAR_31->pm.vblank_sync = 1;
      FUNC_17(&VAR_31->irq.vblank_queue);
     }
     if (FUNC_5(&VAR_31->irq.pflip[0]))
      FUNC_13(VAR_31, 0);
     VAR_31->irq.stat_regs.evergreen.disp_int &= ~VAR_14;
     FUNC_0("IH: D1 vblank\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.disp_int & VAR_15) {
     VAR_31->irq.stat_regs.evergreen.disp_int &= ~VAR_15;
     FUNC_0("IH: D1 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 2:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont & VAR_16) {
     if (VAR_31->irq.crtc_vblank_int[1]) {
      FUNC_9(VAR_31->ddev, 1);
      VAR_31->pm.vblank_sync = 1;
      FUNC_17(&VAR_31->irq.vblank_queue);
     }
     if (FUNC_5(&VAR_31->irq.pflip[1]))
      FUNC_13(VAR_31, 1);
     VAR_31->irq.stat_regs.evergreen.disp_int_cont &= ~VAR_16;
     FUNC_0("IH: D2 vblank\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont & VAR_17) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont &= ~VAR_17;
     FUNC_0("IH: D2 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 3:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont2 & VAR_18) {
     if (VAR_31->irq.crtc_vblank_int[2]) {
      FUNC_9(VAR_31->ddev, 2);
      VAR_31->pm.vblank_sync = 1;
      FUNC_17(&VAR_31->irq.vblank_queue);
     }
     if (FUNC_5(&VAR_31->irq.pflip[2]))
      FUNC_13(VAR_31, 2);
     VAR_31->irq.stat_regs.evergreen.disp_int_cont2 &= ~VAR_18;
     FUNC_0("IH: D3 vblank\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont2 & VAR_19) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont2 &= ~VAR_19;
     FUNC_0("IH: D3 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 4:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont3 & VAR_20) {
     if (VAR_31->irq.crtc_vblank_int[3]) {
      FUNC_9(VAR_31->ddev, 3);
      VAR_31->pm.vblank_sync = 1;
      FUNC_17(&VAR_31->irq.vblank_queue);
     }
     if (FUNC_5(&VAR_31->irq.pflip[3]))
      FUNC_13(VAR_31, 3);
     VAR_31->irq.stat_regs.evergreen.disp_int_cont3 &= ~VAR_20;
     FUNC_0("IH: D4 vblank\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont3 & VAR_21) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont3 &= ~VAR_21;
     FUNC_0("IH: D4 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 5:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont4 & VAR_22) {
     if (VAR_31->irq.crtc_vblank_int[4]) {
      FUNC_9(VAR_31->ddev, 4);
      VAR_31->pm.vblank_sync = 1;
      FUNC_17(&VAR_31->irq.vblank_queue);
     }
     if (FUNC_5(&VAR_31->irq.pflip[4]))
      FUNC_13(VAR_31, 4);
     VAR_31->irq.stat_regs.evergreen.disp_int_cont4 &= ~VAR_22;
     FUNC_0("IH: D5 vblank\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont4 & VAR_23) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont4 &= ~VAR_23;
     FUNC_0("IH: D5 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 6:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont5 & VAR_24) {
     if (VAR_31->irq.crtc_vblank_int[5]) {
      FUNC_9(VAR_31->ddev, 5);
      VAR_31->pm.vblank_sync = 1;
      FUNC_17(&VAR_31->irq.vblank_queue);
     }
     if (FUNC_5(&VAR_31->irq.pflip[5]))
      FUNC_13(VAR_31, 5);
     VAR_31->irq.stat_regs.evergreen.disp_int_cont5 &= ~VAR_24;
     FUNC_0("IH: D6 vblank\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont5 & VAR_25) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont5 &= ~VAR_25;
     FUNC_0("IH: D6 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 42:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.disp_int & VAR_5) {
     VAR_31->irq.stat_regs.evergreen.disp_int &= ~VAR_5;
     VAR_37 = 1;
     FUNC_0("IH: HPD1\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont & VAR_6) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont &= ~VAR_6;
     VAR_37 = 1;
     FUNC_0("IH: HPD2\n");
    }
    break;
   case 2:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont2 & VAR_7) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont2 &= ~VAR_7;
     VAR_37 = 1;
     FUNC_0("IH: HPD3\n");
    }
    break;
   case 3:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont3 & VAR_8) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont3 &= ~VAR_8;
     VAR_37 = 1;
     FUNC_0("IH: HPD4\n");
    }
    break;
   case 4:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont4 & VAR_9) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont4 &= ~VAR_9;
     VAR_37 = 1;
     FUNC_0("IH: HPD5\n");
    }
    break;
   case 5:
    if (VAR_31->irq.stat_regs.evergreen.disp_int_cont5 & VAR_10) {
     VAR_31->irq.stat_regs.evergreen.disp_int_cont5 &= ~VAR_10;
     VAR_37 = 1;
     FUNC_0("IH: HPD6\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 44:
   switch (VAR_35) {
   case 0:
    if (VAR_31->irq.stat_regs.evergreen.afmt_status1 & VAR_0) {
     VAR_31->irq.stat_regs.evergreen.afmt_status1 &= ~VAR_0;
     VAR_38 = 1;
     FUNC_0("IH: HDMI0\n");
    }
    break;
   case 1:
    if (VAR_31->irq.stat_regs.evergreen.afmt_status2 & VAR_0) {
     VAR_31->irq.stat_regs.evergreen.afmt_status2 &= ~VAR_0;
     VAR_38 = 1;
     FUNC_0("IH: HDMI1\n");
    }
    break;
   case 2:
    if (VAR_31->irq.stat_regs.evergreen.afmt_status3 & VAR_0) {
     VAR_31->irq.stat_regs.evergreen.afmt_status3 &= ~VAR_0;
     VAR_38 = 1;
     FUNC_0("IH: HDMI2\n");
    }
    break;
   case 3:
    if (VAR_31->irq.stat_regs.evergreen.afmt_status4 & VAR_0) {
     VAR_31->irq.stat_regs.evergreen.afmt_status4 &= ~VAR_0;
     VAR_38 = 1;
     FUNC_0("IH: HDMI3\n");
    }
    break;
   case 4:
    if (VAR_31->irq.stat_regs.evergreen.afmt_status5 & VAR_0) {
     VAR_31->irq.stat_regs.evergreen.afmt_status5 &= ~VAR_0;
     VAR_38 = 1;
     FUNC_0("IH: HDMI4\n");
    }
    break;
   case 5:
    if (VAR_31->irq.stat_regs.evergreen.afmt_status6 & VAR_0) {
     VAR_31->irq.stat_regs.evergreen.afmt_status6 &= ~VAR_0;
     VAR_38 = 1;
     FUNC_0("IH: HDMI5\n");
    }
    break;
   default:
    FUNC_1("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
    break;
   }
   break;
  case 146:
  case 147:
   FUNC_8(VAR_31->dev, "GPU fault detected: %d 0x%08x\n", VAR_34, VAR_35);
   FUNC_8(VAR_31->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
    FUNC_2(VAR_29));
   FUNC_8(VAR_31->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
    FUNC_2(VAR_30));

   FUNC_4(VAR_28, 1, ~1);
   break;
  case 176:
  case 177:
  case 178:
   FUNC_0("IH: CP int: 0x%08x\n", VAR_35);
   FUNC_14(VAR_31, VAR_27);
   break;
  case 181:
   FUNC_0("IH: CP EOP\n");
   if (VAR_31->family >= VAR_4) {
    switch (VAR_35) {
    case 0:
     FUNC_14(VAR_31, VAR_27);
     break;
    case 1:
     FUNC_14(VAR_31, VAR_1);
     break;
    case 2:
     FUNC_14(VAR_31, VAR_2);
     break;
    }
   } else
    FUNC_14(VAR_31, VAR_27);
   break;
  case 224:
   FUNC_0("IH: DMA trap\n");
   FUNC_14(VAR_31, VAR_26);
   break;
  case 233:
   FUNC_0("IH: GUI idle\n");
   break;
  case 244:
   if (VAR_31->family >= VAR_4) {
    FUNC_0("IH: DMA1 trap\n");
    FUNC_14(VAR_31, VAR_3);
   }
   break;
  default:
   FUNC_0("Unhandled interrupt: %d %d\n", VAR_34, VAR_35);
   break;
  }


  VAR_33 += 16;
  VAR_33 &= VAR_31->ih.ptr_mask;
 }
 if (VAR_37)
  FUNC_16(&VAR_31->hotplug_work);
 if (VAR_38)
  FUNC_16(&VAR_31->audio_work);
 VAR_31->ih.rptr = VAR_33;
 FUNC_3(VAR_11, VAR_31->ih.rptr);
 FUNC_6(&VAR_31->ih.lock, 0);


 VAR_32 = FUNC_10(VAR_31);
 if (VAR_32 != VAR_33)
  goto restart_ih;

 return VAR_12;
}
