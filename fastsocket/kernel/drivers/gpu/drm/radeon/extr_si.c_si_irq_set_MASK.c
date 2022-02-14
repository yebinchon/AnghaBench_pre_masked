
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__* hpd; int * pflip; scalar_t__* crtc_vblank_int; int * ring_int; int installed; } ;
struct TYPE_3__ {int enabled; } ;
struct radeon_device {int num_crtc; TYPE_2__ irq; TYPE_1__ ih; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (char*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_33)
{
 u32 VAR_34 = VAR_3 | VAR_4;
 u32 VAR_35 = 0, VAR_36 = 0;
 u32 VAR_37 = 0, VAR_38 = 0, VAR_39 = 0, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;
 u32 VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48;
 u32 VAR_49 = 0;
 u32 VAR_50 = 0, VAR_51 = 0, VAR_52 = 0, VAR_53 = 0, VAR_54 = 0, VAR_55 = 0;
 u32 VAR_56, VAR_57;

 if (!VAR_33->irq.installed) {
  FUNC_2(1, "Can't enable IRQ/MSI because no handler is installed\n");
  return -VAR_18;
 }

 if (!VAR_33->ih.enabled) {
  FUNC_6(VAR_33);

  FUNC_5(VAR_33);
  return 0;
 }

 VAR_43 = FUNC_1(VAR_8) & ~VAR_14;
 VAR_44 = FUNC_1(VAR_9) & ~VAR_14;
 VAR_45 = FUNC_1(VAR_10) & ~VAR_14;
 VAR_46 = FUNC_1(VAR_11) & ~VAR_14;
 VAR_47 = FUNC_1(VAR_12) & ~VAR_14;
 VAR_48 = FUNC_1(VAR_13) & ~VAR_14;

 VAR_56 = FUNC_1(VAR_17 + VAR_15) & ~VAR_31;
 VAR_57 = FUNC_1(VAR_17 + VAR_16) & ~VAR_31;


 if (FUNC_4(&VAR_33->irq.ring_int[VAR_29])) {
  FUNC_0("si_irq_set: sw int gfx\n");
  VAR_34 |= VAR_30;
 }
 if (FUNC_4(&VAR_33->irq.ring_int[VAR_0])) {
  FUNC_0("si_irq_set: sw int cp1\n");
  VAR_35 |= VAR_30;
 }
 if (FUNC_4(&VAR_33->irq.ring_int[VAR_1])) {
  FUNC_0("si_irq_set: sw int cp2\n");
  VAR_36 |= VAR_30;
 }
 if (FUNC_4(&VAR_33->irq.ring_int[VAR_28])) {
  FUNC_0("si_irq_set: sw int dma\n");
  VAR_56 |= VAR_31;
 }

 if (FUNC_4(&VAR_33->irq.ring_int[VAR_2])) {
  FUNC_0("si_irq_set: sw int dma1\n");
  VAR_57 |= VAR_31;
 }
 if (VAR_33->irq.crtc_vblank_int[0] ||
     FUNC_4(&VAR_33->irq.pflip[0])) {
  FUNC_0("si_irq_set: vblank 0\n");
  VAR_37 |= VAR_32;
 }
 if (VAR_33->irq.crtc_vblank_int[1] ||
     FUNC_4(&VAR_33->irq.pflip[1])) {
  FUNC_0("si_irq_set: vblank 1\n");
  VAR_38 |= VAR_32;
 }
 if (VAR_33->irq.crtc_vblank_int[2] ||
     FUNC_4(&VAR_33->irq.pflip[2])) {
  FUNC_0("si_irq_set: vblank 2\n");
  VAR_39 |= VAR_32;
 }
 if (VAR_33->irq.crtc_vblank_int[3] ||
     FUNC_4(&VAR_33->irq.pflip[3])) {
  FUNC_0("si_irq_set: vblank 3\n");
  VAR_40 |= VAR_32;
 }
 if (VAR_33->irq.crtc_vblank_int[4] ||
     FUNC_4(&VAR_33->irq.pflip[4])) {
  FUNC_0("si_irq_set: vblank 4\n");
  VAR_41 |= VAR_32;
 }
 if (VAR_33->irq.crtc_vblank_int[5] ||
     FUNC_4(&VAR_33->irq.pflip[5])) {
  FUNC_0("si_irq_set: vblank 5\n");
  VAR_42 |= VAR_32;
 }
 if (VAR_33->irq.hpd[0]) {
  FUNC_0("si_irq_set: hpd 1\n");
  VAR_43 |= VAR_14;
 }
 if (VAR_33->irq.hpd[1]) {
  FUNC_0("si_irq_set: hpd 2\n");
  VAR_44 |= VAR_14;
 }
 if (VAR_33->irq.hpd[2]) {
  FUNC_0("si_irq_set: hpd 3\n");
  VAR_45 |= VAR_14;
 }
 if (VAR_33->irq.hpd[3]) {
  FUNC_0("si_irq_set: hpd 4\n");
  VAR_46 |= VAR_14;
 }
 if (VAR_33->irq.hpd[4]) {
  FUNC_0("si_irq_set: hpd 5\n");
  VAR_47 |= VAR_14;
 }
 if (VAR_33->irq.hpd[5]) {
  FUNC_0("si_irq_set: hpd 6\n");
  VAR_48 |= VAR_14;
 }

 FUNC_3(VAR_5, VAR_34);
 FUNC_3(VAR_6, VAR_35);
 FUNC_3(VAR_7, VAR_36);

 FUNC_3(VAR_17 + VAR_15, VAR_56);
 FUNC_3(VAR_17 + VAR_16, VAR_57);

 FUNC_3(VAR_25, VAR_49);

 FUNC_3(VAR_27 + VAR_19, VAR_37);
 FUNC_3(VAR_27 + VAR_20, VAR_38);
 if (VAR_33->num_crtc >= 4) {
  FUNC_3(VAR_27 + VAR_21, VAR_39);
  FUNC_3(VAR_27 + VAR_22, VAR_40);
 }
 if (VAR_33->num_crtc >= 6) {
  FUNC_3(VAR_27 + VAR_23, VAR_41);
  FUNC_3(VAR_27 + VAR_24, VAR_42);
 }

 FUNC_3(VAR_26 + VAR_19, VAR_50);
 FUNC_3(VAR_26 + VAR_20, VAR_51);
 if (VAR_33->num_crtc >= 4) {
  FUNC_3(VAR_26 + VAR_21, VAR_52);
  FUNC_3(VAR_26 + VAR_22, VAR_53);
 }
 if (VAR_33->num_crtc >= 6) {
  FUNC_3(VAR_26 + VAR_23, VAR_54);
  FUNC_3(VAR_26 + VAR_24, VAR_55);
 }

 FUNC_3(VAR_8, VAR_43);
 FUNC_3(VAR_9, VAR_44);
 FUNC_3(VAR_10, VAR_45);
 FUNC_3(VAR_11, VAR_46);
 FUNC_3(VAR_12, VAR_47);
 FUNC_3(VAR_13, VAR_48);

 return 0;
}
