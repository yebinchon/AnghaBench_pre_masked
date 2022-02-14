
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
struct TYPE_6__ {int rptr; int ptr_mask; int lock; int * ring; int enabled; } ;
struct TYPE_8__ {int disp_int; int disp_int_cont; int disp_int_cont2; int hdmi0_status; int hdmi1_status; } ;
struct TYPE_9__ {TYPE_3__ r600; } ;
struct TYPE_10__ {TYPE_4__ stat_regs; int * pflip; int vblank_queue; int * crtc_vblank_int; } ;
struct TYPE_7__ {int vblank_sync; } ;
struct radeon_device {TYPE_1__ ih; int audio_work; int hotplug_work; TYPE_5__ irq; TYPE_2__ pm; int ddev; int msi_enabled; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
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
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct radeon_device *VAR_17)
{
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20, VAR_21;
 u32 VAR_22;
 bool VAR_23 = 0;
 bool VAR_24 = 0;

 if (!VAR_17->ih.enabled || VAR_17->shutdown)
  return VAR_10;


 if (!VAR_17->msi_enabled)
  FUNC_2(VAR_8);

 VAR_18 = FUNC_9(VAR_17);

restart_ih:

 if (FUNC_6(&VAR_17->ih.lock, 1))
  return VAR_10;

 VAR_19 = VAR_17->ih.rptr;
 FUNC_0("r600_irq_process start: rptr %d, wptr %d\n", VAR_19, VAR_18);


 FUNC_13();


 FUNC_10(VAR_17);

 while (VAR_19 != VAR_18) {

  VAR_22 = VAR_19 / 4;
  VAR_20 = FUNC_8(VAR_17->ih.ring[VAR_22]) & 0xff;
  VAR_21 = FUNC_8(VAR_17->ih.ring[VAR_22 + 1]) & 0xfffffff;

  switch (VAR_20) {
  case 1:
   switch (VAR_21) {
   case 0:
    if (VAR_17->irq.stat_regs.r600.disp_int & VAR_11) {
     if (VAR_17->irq.crtc_vblank_int[0]) {
      FUNC_7(VAR_17->ddev, 0);
      VAR_17->pm.vblank_sync = 1;
      FUNC_15(&VAR_17->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_17->irq.pflip[0]))
      FUNC_11(VAR_17, 0);
     VAR_17->irq.stat_regs.r600.disp_int &= ~VAR_11;
     FUNC_0("IH: D1 vblank\n");
    }
    break;
   case 1:
    if (VAR_17->irq.stat_regs.r600.disp_int & VAR_12) {
     VAR_17->irq.stat_regs.r600.disp_int &= ~VAR_12;
     FUNC_0("IH: D1 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_20, VAR_21);
    break;
   }
   break;
  case 5:
   switch (VAR_21) {
   case 0:
    if (VAR_17->irq.stat_regs.r600.disp_int & VAR_13) {
     if (VAR_17->irq.crtc_vblank_int[1]) {
      FUNC_7(VAR_17->ddev, 1);
      VAR_17->pm.vblank_sync = 1;
      FUNC_15(&VAR_17->irq.vblank_queue);
     }
     if (FUNC_4(&VAR_17->irq.pflip[1]))
      FUNC_11(VAR_17, 1);
     VAR_17->irq.stat_regs.r600.disp_int &= ~VAR_13;
     FUNC_0("IH: D2 vblank\n");
    }
    break;
   case 1:
    if (VAR_17->irq.stat_regs.r600.disp_int & VAR_14) {
     VAR_17->irq.stat_regs.r600.disp_int &= ~VAR_14;
     FUNC_0("IH: D2 vline\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_20, VAR_21);
    break;
   }
   break;
  case 19:
   switch (VAR_21) {
   case 0:
    if (VAR_17->irq.stat_regs.r600.disp_int & VAR_0) {
     VAR_17->irq.stat_regs.r600.disp_int &= ~VAR_0;
     VAR_23 = 1;
     FUNC_0("IH: HPD1\n");
    }
    break;
   case 1:
    if (VAR_17->irq.stat_regs.r600.disp_int & VAR_1) {
     VAR_17->irq.stat_regs.r600.disp_int &= ~VAR_1;
     VAR_23 = 1;
     FUNC_0("IH: HPD2\n");
    }
    break;
   case 4:
    if (VAR_17->irq.stat_regs.r600.disp_int_cont & VAR_2) {
     VAR_17->irq.stat_regs.r600.disp_int_cont &= ~VAR_2;
     VAR_23 = 1;
     FUNC_0("IH: HPD3\n");
    }
    break;
   case 5:
    if (VAR_17->irq.stat_regs.r600.disp_int_cont & VAR_3) {
     VAR_17->irq.stat_regs.r600.disp_int_cont &= ~VAR_3;
     VAR_23 = 1;
     FUNC_0("IH: HPD4\n");
    }
    break;
   case 10:
    if (VAR_17->irq.stat_regs.r600.disp_int_cont2 & VAR_4) {
     VAR_17->irq.stat_regs.r600.disp_int_cont2 &= ~VAR_4;
     VAR_23 = 1;
     FUNC_0("IH: HPD5\n");
    }
    break;
   case 12:
    if (VAR_17->irq.stat_regs.r600.disp_int_cont2 & VAR_5) {
     VAR_17->irq.stat_regs.r600.disp_int_cont2 &= ~VAR_5;
     VAR_23 = 1;
     FUNC_0("IH: HPD6\n");
    }
    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_20, VAR_21);
    break;
   }
   break;
  case 21:
   switch (VAR_21) {
   case 4:
    if (VAR_17->irq.stat_regs.r600.hdmi0_status & VAR_6) {
     VAR_17->irq.stat_regs.r600.hdmi0_status &= ~VAR_6;
     VAR_24 = 1;
     FUNC_0("IH: HDMI0\n");
    }
    break;
   case 5:
    if (VAR_17->irq.stat_regs.r600.hdmi1_status & VAR_6) {
     VAR_17->irq.stat_regs.r600.hdmi1_status &= ~VAR_6;
     VAR_24 = 1;
     FUNC_0("IH: HDMI1\n");
    }
    break;
   default:
    FUNC_1("Unhandled interrupt: %d %d\n", VAR_20, VAR_21);
    break;
   }
   break;
  case 176:
  case 177:
  case 178:
   FUNC_0("IH: CP int: 0x%08x\n", VAR_21);
   FUNC_12(VAR_17, VAR_16);
   break;
  case 181:
   FUNC_0("IH: CP EOP\n");
   FUNC_12(VAR_17, VAR_16);
   break;
  case 224:
   FUNC_0("IH: DMA trap\n");
   FUNC_12(VAR_17, VAR_15);
   break;
  case 233:
   FUNC_0("IH: GUI idle\n");
   break;
  default:
   FUNC_0("Unhandled interrupt: %d %d\n", VAR_20, VAR_21);
   break;
  }


  VAR_19 += 16;
  VAR_19 &= VAR_17->ih.ptr_mask;
 }
 if (VAR_23)
  FUNC_14(&VAR_17->hotplug_work);
 if (VAR_24)
  FUNC_14(&VAR_17->audio_work);
 VAR_17->ih.rptr = VAR_19;
 FUNC_3(VAR_7, VAR_17->ih.rptr);
 FUNC_5(&VAR_17->ih.lock, 0);


 VAR_18 = FUNC_9(VAR_17);
 if (VAR_18 != VAR_19)
  goto restart_ih;

 return VAR_9;
}
