
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__* afmt; scalar_t__* hpd; int * pflip; scalar_t__* crtc_vblank_int; int * ring_int; int installed; } ;
struct TYPE_3__ {int enabled; } ;
struct radeon_device {TYPE_2__ irq; TYPE_1__ ih; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_34)
{
 u32 VAR_35 = VAR_2 | VAR_3;
 u32 VAR_36 = 0;
 u32 VAR_37, VAR_38, VAR_39, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;
 u32 VAR_43 = 0;
 u32 VAR_44, VAR_45;
 u32 VAR_46 = 0, VAR_47 = 0;
 u32 VAR_48;

 if (!VAR_34->irq.installed) {
  FUNC_4(1, "Can't enable IRQ/MSI because no handler is installed\n");
  return -VAR_24;
 }

 if (!VAR_34->ih.enabled) {
  FUNC_8(VAR_34);

  FUNC_7(VAR_34);
  return 0;
 }

 if (FUNC_0(VAR_34)) {
  VAR_37 = FUNC_3(VAR_15) & ~VAR_21;
  VAR_38 = FUNC_3(VAR_16) & ~VAR_21;
  VAR_39 = FUNC_3(VAR_17) & ~VAR_21;
  VAR_40 = FUNC_3(VAR_18) & ~VAR_21;
  if (FUNC_1(VAR_34)) {
   VAR_41 = FUNC_3(VAR_19) & ~VAR_21;
   VAR_42 = FUNC_3(VAR_20) & ~VAR_21;
   VAR_44 = FUNC_3(VAR_0 + VAR_10) & ~VAR_1;
   VAR_45 = FUNC_3(VAR_0 + VAR_11) & ~VAR_1;
  } else {
   VAR_44 = FUNC_3(VAR_26) & ~VAR_27;
   VAR_45 = FUNC_3(VAR_9) & ~VAR_27;
  }
 } else {
  VAR_37 = FUNC_3(VAR_12) & ~VAR_21;
  VAR_38 = FUNC_3(VAR_13) & ~VAR_21;
  VAR_39 = FUNC_3(VAR_14) & ~VAR_21;
  VAR_44 = FUNC_3(VAR_26) & ~VAR_27;
  VAR_45 = FUNC_3(VAR_28) & ~VAR_27;
 }
 VAR_48 = FUNC_3(VAR_22) & ~VAR_33;

 if (FUNC_6(&VAR_34->irq.ring_int[VAR_30])) {
  FUNC_2("r600_irq_set: sw int\n");
  VAR_35 |= VAR_31;
  VAR_35 |= VAR_32;
 }

 if (FUNC_6(&VAR_34->irq.ring_int[VAR_29])) {
  FUNC_2("r600_irq_set: sw int dma\n");
  VAR_48 |= VAR_33;
 }

 if (VAR_34->irq.crtc_vblank_int[0] ||
     FUNC_6(&VAR_34->irq.pflip[0])) {
  FUNC_2("r600_irq_set: vblank 0\n");
  VAR_36 |= VAR_6;
 }
 if (VAR_34->irq.crtc_vblank_int[1] ||
     FUNC_6(&VAR_34->irq.pflip[1])) {
  FUNC_2("r600_irq_set: vblank 1\n");
  VAR_36 |= VAR_8;
 }
 if (VAR_34->irq.hpd[0]) {
  FUNC_2("r600_irq_set: hpd 1\n");
  VAR_37 |= VAR_21;
 }
 if (VAR_34->irq.hpd[1]) {
  FUNC_2("r600_irq_set: hpd 2\n");
  VAR_38 |= VAR_21;
 }
 if (VAR_34->irq.hpd[2]) {
  FUNC_2("r600_irq_set: hpd 3\n");
  VAR_39 |= VAR_21;
 }
 if (VAR_34->irq.hpd[3]) {
  FUNC_2("r600_irq_set: hpd 4\n");
  VAR_40 |= VAR_21;
 }
 if (VAR_34->irq.hpd[4]) {
  FUNC_2("r600_irq_set: hpd 5\n");
  VAR_41 |= VAR_21;
 }
 if (VAR_34->irq.hpd[5]) {
  FUNC_2("r600_irq_set: hpd 6\n");
  VAR_42 |= VAR_21;
 }
 if (VAR_34->irq.afmt[0]) {
  FUNC_2("r600_irq_set: hdmi 0\n");
  VAR_44 |= VAR_27;
 }
 if (VAR_34->irq.afmt[1]) {
  FUNC_2("r600_irq_set: hdmi 0\n");
  VAR_45 |= VAR_27;
 }

 FUNC_5(VAR_4, VAR_35);
 FUNC_5(VAR_22, VAR_48);
 FUNC_5(VAR_23, VAR_36);
 FUNC_5(VAR_5, VAR_46);
 FUNC_5(VAR_7, VAR_47);
 FUNC_5(VAR_25, VAR_43);
 if (FUNC_0(VAR_34)) {
  FUNC_5(VAR_15, VAR_37);
  FUNC_5(VAR_16, VAR_38);
  FUNC_5(VAR_17, VAR_39);
  FUNC_5(VAR_18, VAR_40);
  if (FUNC_1(VAR_34)) {
   FUNC_5(VAR_19, VAR_41);
   FUNC_5(VAR_20, VAR_42);
   FUNC_5(VAR_0 + VAR_10, VAR_44);
   FUNC_5(VAR_0 + VAR_11, VAR_45);
  } else {
   FUNC_5(VAR_26, VAR_44);
   FUNC_5(VAR_9, VAR_45);
  }
 } else {
  FUNC_5(VAR_12, VAR_37);
  FUNC_5(VAR_13, VAR_38);
  FUNC_5(VAR_14, VAR_39);
  FUNC_5(VAR_26, VAR_44);
  FUNC_5(VAR_28, VAR_45);
 }

 return 0;
}
