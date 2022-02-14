
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
struct TYPE_7__ {int disp_int; int disp_int_cont; int disp_int_cont2; int disp_int_cont3; int disp_int_cont4; int disp_int_cont5; } ;
struct TYPE_8__ {TYPE_2__ evergreen; } ;
struct TYPE_9__ {TYPE_3__ stat_regs; int * pflip; int vblank_queue; int * crtc_vblank_int; } ;
struct TYPE_6__ {int vblank_sync; } ;
struct radeon_device {TYPE_5__ ih; int hotplug_work; int dev; TYPE_4__ irq; TYPE_1__ pm; int ddev; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
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
 int FUNC_1 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct radeon_device *VAR_29)
{
 u32 VAR_30;
 u32 VAR_31;
 u32 VAR_32, VAR_33, VAR_34;
 u32 VAR_35;
 bool VAR_36 = 0;

 if (!VAR_29->ih.enabled || VAR_29->shutdown)
  return VAR_11;

 VAR_30 = FUNC_14(VAR_29);

restart_ih:

 if (FUNC_6(&VAR_29->ih.lock, 1))
  return VAR_11;

 VAR_31 = VAR_29->ih.rptr;
 FUNC_0("si_irq_process start: rptr %d, wptr %d\n", VAR_31, VAR_30);


 FUNC_12();


 FUNC_15(VAR_29);

 while (VAR_31 != VAR_30) {

  VAR_35 = VAR_31 / 4;
  VAR_32 = FUNC_9(VAR_29->ih.ring[VAR_35]) & 0xff;
  VAR_33 = FUNC_9(VAR_29->ih.ring[VAR_35 + 1]) & 0xfffffff;
  VAR_34 = FUNC_9(VAR_29->ih.ring[VAR_35 + 2]) & 0xff;

  switch (VAR_32) {
  case 1:
   switch (VAR_33) {
   case 0:
    if (VAR_29->irq.stat_regs.evergreen.disp_int & VAR_12) {
     if (VAR_29->irq.crtc_vblank_int[0]) {
      FUNC_8(VAR_29->ddev, 0);
      VAR_29->pm.vblank_sync = 1;
      FUNC_16(&VAR_29->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_29->irq.pflip[0]))
      FUNC_10(VAR_29, 0);
     VAR_29->irq.stat_regs.evergreen.disp_int &= ~VAR_12;
     FUNC_0("IH: D1 vblank\n");
    }
    break;
   case 1:
    if (VAR_29->irq.stat_regs.evergreen.disp_int & VAR_13) {
     VAR_29->irq.stat_regs.evergreen.disp_int &= ~VAR_13;
     FUNC_0("IH: D1 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
    break;
   }
   break;
  case 2:
   switch (VAR_33) {
   case 0:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont & VAR_14) {
     if (VAR_29->irq.crtc_vblank_int[1]) {
      FUNC_8(VAR_29->ddev, 1);
      VAR_29->pm.vblank_sync = 1;
      FUNC_16(&VAR_29->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_29->irq.pflip[1]))
      FUNC_10(VAR_29, 1);
     VAR_29->irq.stat_regs.evergreen.disp_int_cont &= ~VAR_14;
     FUNC_0("IH: D2 vblank\n");
    }
    break;
   case 1:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont & VAR_15) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont &= ~VAR_15;
     FUNC_0("IH: D2 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
    break;
   }
   break;
  case 3:
   switch (VAR_33) {
   case 0:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont2 & VAR_16) {
     if (VAR_29->irq.crtc_vblank_int[2]) {
      FUNC_8(VAR_29->ddev, 2);
      VAR_29->pm.vblank_sync = 1;
      FUNC_16(&VAR_29->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_29->irq.pflip[2]))
      FUNC_10(VAR_29, 2);
     VAR_29->irq.stat_regs.evergreen.disp_int_cont2 &= ~VAR_16;
     FUNC_0("IH: D3 vblank\n");
    }
    break;
   case 1:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont2 & VAR_17) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont2 &= ~VAR_17;
     FUNC_0("IH: D3 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
    break;
   }
   break;
  case 4:
   switch (VAR_33) {
   case 0:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont3 & VAR_18) {
     if (VAR_29->irq.crtc_vblank_int[3]) {
      FUNC_8(VAR_29->ddev, 3);
      VAR_29->pm.vblank_sync = 1;
      FUNC_16(&VAR_29->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_29->irq.pflip[3]))
      FUNC_10(VAR_29, 3);
     VAR_29->irq.stat_regs.evergreen.disp_int_cont3 &= ~VAR_18;
     FUNC_0("IH: D4 vblank\n");
    }
    break;
   case 1:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont3 & VAR_19) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont3 &= ~VAR_19;
     FUNC_0("IH: D4 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
    break;
   }
   break;
  case 5:
   switch (VAR_33) {
   case 0:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont4 & VAR_20) {
     if (VAR_29->irq.crtc_vblank_int[4]) {
      FUNC_8(VAR_29->ddev, 4);
      VAR_29->pm.vblank_sync = 1;
      FUNC_16(&VAR_29->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_29->irq.pflip[4]))
      FUNC_10(VAR_29, 4);
     VAR_29->irq.stat_regs.evergreen.disp_int_cont4 &= ~VAR_20;
     FUNC_0("IH: D5 vblank\n");
    }
    break;
   case 1:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont4 & VAR_21) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont4 &= ~VAR_21;
     FUNC_0("IH: D5 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
    break;
   }
   break;
  case 6:
   switch (VAR_33) {
   case 0:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont5 & VAR_22) {
     if (VAR_29->irq.crtc_vblank_int[5]) {
      FUNC_8(VAR_29->ddev, 5);
      VAR_29->pm.vblank_sync = 1;
      FUNC_16(&VAR_29->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_29->irq.pflip[5]))
      FUNC_10(VAR_29, 5);
     VAR_29->irq.stat_regs.evergreen.disp_int_cont5 &= ~VAR_22;
     FUNC_0("IH: D6 vblank\n");
    }
    break;
   case 1:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont5 & VAR_23) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont5 &= ~VAR_23;
     FUNC_0("IH: D6 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
    break;
   }
   break;
  case 42:
   switch (VAR_33) {
   case 0:
    if (VAR_29->irq.stat_regs.evergreen.disp_int & VAR_3) {
     VAR_29->irq.stat_regs.evergreen.disp_int &= ~VAR_3;
     VAR_36 = 1;
     FUNC_0("IH: HPD1\n");
    }
    break;
   case 1:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont & VAR_4) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont &= ~VAR_4;
     VAR_36 = 1;
     FUNC_0("IH: HPD2\n");
    }
    break;
   case 2:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont2 & VAR_5) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont2 &= ~VAR_5;
     VAR_36 = 1;
     FUNC_0("IH: HPD3\n");
    }
    break;
   case 3:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont3 & VAR_6) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont3 &= ~VAR_6;
     VAR_36 = 1;
     FUNC_0("IH: HPD4\n");
    }
    break;
   case 4:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont4 & VAR_7) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont4 &= ~VAR_7;
     VAR_36 = 1;
     FUNC_0("IH: HPD5\n");
    }
    break;
   case 5:
    if (VAR_29->irq.stat_regs.evergreen.disp_int_cont5 & VAR_8) {
     VAR_29->irq.stat_regs.evergreen.disp_int_cont5 &= ~VAR_8;
     VAR_36 = 1;
     FUNC_0("IH: HPD6\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
    break;
   }
   break;
  case 146:
  case 147:
   FUNC_7(VAR_29->dev, "GPU fault detected: %d 0x%08x\n", VAR_32, VAR_33);
   FUNC_7(VAR_29->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
    FUNC_1(VAR_27));
   FUNC_7(VAR_29->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
    FUNC_1(VAR_28));

   FUNC_3(VAR_26, 1, ~1);
   break;
  case 176:
   FUNC_11(VAR_29, VAR_25);
   break;
  case 177:
   FUNC_11(VAR_29, VAR_0);
   break;
  case 178:
   FUNC_11(VAR_29, VAR_1);
   break;
  case 181:
   FUNC_0("IH: CP EOP\n");
   switch (VAR_34) {
   case 0:
    FUNC_11(VAR_29, VAR_25);
    break;
   case 1:
    FUNC_11(VAR_29, VAR_0);
    break;
   case 2:
    FUNC_11(VAR_29, VAR_1);
    break;
   }
   break;
  case 224:
   FUNC_0("IH: DMA trap\n");
   FUNC_11(VAR_29, VAR_24);
   break;
  case 233:
   FUNC_0("IH: GUI idle\n");
   break;
  case 244:
   FUNC_0("IH: DMA1 trap\n");
   FUNC_11(VAR_29, VAR_2);
   break;
  default:
   FUNC_0("Unhandled interrupt: %d %d\n", VAR_32, VAR_33);
   break;
  }


  VAR_31 += 16;
  VAR_31 &= VAR_29->ih.ptr_mask;
 }
 if (VAR_36)
  FUNC_13(&VAR_29->hotplug_work);
 VAR_29->ih.rptr = VAR_31;
 FUNC_2(VAR_9, VAR_29->ih.rptr);
 FUNC_5(&VAR_29->ih.lock, 0);


 VAR_30 = FUNC_14(VAR_29);
 if (VAR_30 != VAR_31)
  goto restart_ih;

 return VAR_10;
}
