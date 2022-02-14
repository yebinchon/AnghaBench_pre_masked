
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__* afmt; scalar_t__* hpd; int * pflip; scalar_t__* crtc_vblank_int; int * ring_int; int installed; } ;
struct TYPE_4__ {int enabled; } ;
struct radeon_device {scalar_t__ family; int num_crtc; TYPE_1__ irq; TYPE_2__ ih; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
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
 int VAR_30 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*,int,int) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;

int FUNC_8(struct radeon_device *VAR_34)
{
 u32 VAR_35 = VAR_7 | VAR_8;
 u32 VAR_36 = 0, VAR_37 = 0;
 u32 VAR_38 = 0, VAR_39 = 0, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0, VAR_43 = 0;
 u32 VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
 u32 VAR_50 = 0;
 u32 VAR_51 = 0, VAR_52 = 0, VAR_53 = 0, VAR_54 = 0, VAR_55 = 0, VAR_56 = 0;
 u32 VAR_57 = 0, VAR_58 = 0, VAR_59 = 0, VAR_60 = 0, VAR_61 = 0, VAR_62 = 0;
 u32 VAR_63, VAR_64 = 0;

 if (!VAR_34->irq.installed) {
  FUNC_2(1, "Can't enable IRQ/MSI because no handler is installed\n");
  return -VAR_18;
 }

 if (!VAR_34->ih.enabled) {
  FUNC_7(VAR_34);

  FUNC_6(VAR_34);
  return 0;
 }

 VAR_44 = FUNC_1(VAR_10) & ~VAR_16;
 VAR_45 = FUNC_1(VAR_11) & ~VAR_16;
 VAR_46 = FUNC_1(VAR_12) & ~VAR_16;
 VAR_47 = FUNC_1(VAR_13) & ~VAR_16;
 VAR_48 = FUNC_1(VAR_14) & ~VAR_16;
 VAR_49 = FUNC_1(VAR_15) & ~VAR_16;

 VAR_57 = FUNC_1(VAR_0 + VAR_19) & ~VAR_1;
 VAR_58 = FUNC_1(VAR_0 + VAR_20) & ~VAR_1;
 VAR_59 = FUNC_1(VAR_0 + VAR_21) & ~VAR_1;
 VAR_60 = FUNC_1(VAR_0 + VAR_22) & ~VAR_1;
 VAR_61 = FUNC_1(VAR_0 + VAR_23) & ~VAR_1;
 VAR_62 = FUNC_1(VAR_0 + VAR_24) & ~VAR_1;

 VAR_63 = FUNC_1(VAR_17) & ~VAR_32;

 if (VAR_34->family >= VAR_6) {

  if (FUNC_4(&VAR_34->irq.ring_int[VAR_29])) {
   FUNC_0("evergreen_irq_set: sw int gfx\n");
   VAR_35 |= VAR_31;
  }
  if (FUNC_4(&VAR_34->irq.ring_int[VAR_3])) {
   FUNC_0("evergreen_irq_set: sw int cp1\n");
   VAR_36 |= VAR_31;
  }
  if (FUNC_4(&VAR_34->irq.ring_int[VAR_4])) {
   FUNC_0("evergreen_irq_set: sw int cp2\n");
   VAR_37 |= VAR_31;
  }
 } else {
  if (FUNC_4(&VAR_34->irq.ring_int[VAR_29])) {
   FUNC_0("evergreen_irq_set: sw int gfx\n");
   VAR_35 |= VAR_30;
   VAR_35 |= VAR_31;
  }
 }

 if (FUNC_4(&VAR_34->irq.ring_int[VAR_28])) {
  FUNC_0("r600_irq_set: sw int dma\n");
  VAR_63 |= VAR_32;
 }

 if (VAR_34->family >= VAR_6) {
  VAR_64 = FUNC_1(VAR_2) & ~VAR_32;
  if (FUNC_4(&VAR_34->irq.ring_int[VAR_5])) {
   FUNC_0("r600_irq_set: sw int dma1\n");
   VAR_64 |= VAR_32;
  }
 }

 if (VAR_34->irq.crtc_vblank_int[0] ||
     FUNC_4(&VAR_34->irq.pflip[0])) {
  FUNC_0("evergreen_irq_set: vblank 0\n");
  VAR_38 |= VAR_33;
 }
 if (VAR_34->irq.crtc_vblank_int[1] ||
     FUNC_4(&VAR_34->irq.pflip[1])) {
  FUNC_0("evergreen_irq_set: vblank 1\n");
  VAR_39 |= VAR_33;
 }
 if (VAR_34->irq.crtc_vblank_int[2] ||
     FUNC_4(&VAR_34->irq.pflip[2])) {
  FUNC_0("evergreen_irq_set: vblank 2\n");
  VAR_40 |= VAR_33;
 }
 if (VAR_34->irq.crtc_vblank_int[3] ||
     FUNC_4(&VAR_34->irq.pflip[3])) {
  FUNC_0("evergreen_irq_set: vblank 3\n");
  VAR_41 |= VAR_33;
 }
 if (VAR_34->irq.crtc_vblank_int[4] ||
     FUNC_4(&VAR_34->irq.pflip[4])) {
  FUNC_0("evergreen_irq_set: vblank 4\n");
  VAR_42 |= VAR_33;
 }
 if (VAR_34->irq.crtc_vblank_int[5] ||
     FUNC_4(&VAR_34->irq.pflip[5])) {
  FUNC_0("evergreen_irq_set: vblank 5\n");
  VAR_43 |= VAR_33;
 }
 if (VAR_34->irq.hpd[0]) {
  FUNC_0("evergreen_irq_set: hpd 1\n");
  VAR_44 |= VAR_16;
 }
 if (VAR_34->irq.hpd[1]) {
  FUNC_0("evergreen_irq_set: hpd 2\n");
  VAR_45 |= VAR_16;
 }
 if (VAR_34->irq.hpd[2]) {
  FUNC_0("evergreen_irq_set: hpd 3\n");
  VAR_46 |= VAR_16;
 }
 if (VAR_34->irq.hpd[3]) {
  FUNC_0("evergreen_irq_set: hpd 4\n");
  VAR_47 |= VAR_16;
 }
 if (VAR_34->irq.hpd[4]) {
  FUNC_0("evergreen_irq_set: hpd 5\n");
  VAR_48 |= VAR_16;
 }
 if (VAR_34->irq.hpd[5]) {
  FUNC_0("evergreen_irq_set: hpd 6\n");
  VAR_49 |= VAR_16;
 }
 if (VAR_34->irq.afmt[0]) {
  FUNC_0("evergreen_irq_set: hdmi 0\n");
  VAR_57 |= VAR_1;
 }
 if (VAR_34->irq.afmt[1]) {
  FUNC_0("evergreen_irq_set: hdmi 1\n");
  VAR_58 |= VAR_1;
 }
 if (VAR_34->irq.afmt[2]) {
  FUNC_0("evergreen_irq_set: hdmi 2\n");
  VAR_59 |= VAR_1;
 }
 if (VAR_34->irq.afmt[3]) {
  FUNC_0("evergreen_irq_set: hdmi 3\n");
  VAR_60 |= VAR_1;
 }
 if (VAR_34->irq.afmt[4]) {
  FUNC_0("evergreen_irq_set: hdmi 4\n");
  VAR_61 |= VAR_1;
 }
 if (VAR_34->irq.afmt[5]) {
  FUNC_0("evergreen_irq_set: hdmi 5\n");
  VAR_62 |= VAR_1;
 }

 if (VAR_34->family >= VAR_6) {
  FUNC_5(VAR_34, 0, VAR_35);
  FUNC_5(VAR_34, 1, VAR_36);
  FUNC_5(VAR_34, 2, VAR_37);
 } else
  FUNC_3(VAR_9, VAR_35);

 FUNC_3(VAR_17, VAR_63);

 if (VAR_34->family >= VAR_6)
  FUNC_3(VAR_2, VAR_64);

 FUNC_3(VAR_25, VAR_50);

 FUNC_3(VAR_27 + VAR_19, VAR_38);
 FUNC_3(VAR_27 + VAR_20, VAR_39);
 if (VAR_34->num_crtc >= 4) {
  FUNC_3(VAR_27 + VAR_21, VAR_40);
  FUNC_3(VAR_27 + VAR_22, VAR_41);
 }
 if (VAR_34->num_crtc >= 6) {
  FUNC_3(VAR_27 + VAR_23, VAR_42);
  FUNC_3(VAR_27 + VAR_24, VAR_43);
 }

 FUNC_3(VAR_26 + VAR_19, VAR_51);
 FUNC_3(VAR_26 + VAR_20, VAR_52);
 if (VAR_34->num_crtc >= 4) {
  FUNC_3(VAR_26 + VAR_21, VAR_53);
  FUNC_3(VAR_26 + VAR_22, VAR_54);
 }
 if (VAR_34->num_crtc >= 6) {
  FUNC_3(VAR_26 + VAR_23, VAR_55);
  FUNC_3(VAR_26 + VAR_24, VAR_56);
 }

 FUNC_3(VAR_10, VAR_44);
 FUNC_3(VAR_11, VAR_45);
 FUNC_3(VAR_12, VAR_46);
 FUNC_3(VAR_13, VAR_47);
 FUNC_3(VAR_14, VAR_48);
 FUNC_3(VAR_15, VAR_49);

 FUNC_3(VAR_0 + VAR_19, VAR_57);
 FUNC_3(VAR_0 + VAR_20, VAR_58);
 FUNC_3(VAR_0 + VAR_21, VAR_59);
 FUNC_3(VAR_0 + VAR_22, VAR_60);
 FUNC_3(VAR_0 + VAR_23, VAR_61);
 FUNC_3(VAR_0 + VAR_24, VAR_62);

 return 0;
}
