
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned long u32 ;
struct drm_i915_private {int mem_freq; int fsb_freq; int is_ddr3; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_8__ {int clock; } ;
struct drm_crtc {TYPE_2__* fb; TYPE_1__ mode; } ;
struct cxsr_latency {int cursor_hpll_disable; int display_hpll_disable; int cursor_sr; int display_sr; } ;
struct TYPE_10__ {int fifo_size; } ;
struct TYPE_9__ {int bits_per_pixel; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct drm_device*) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_4 (int,TYPE_3__*,int ,int,int ) ;
 struct cxsr_latency* FUNC_5 (int ,int ,int ,int ) ;
 TYPE_3__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 int FUNC_6 (struct drm_device*) ;
 TYPE_3__ VAR_12 ;
 TYPE_3__ VAR_13 ;
 struct drm_crtc* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static void FUNC_8(struct drm_device *VAR_14)
{
 struct drm_i915_private *VAR_15 = VAR_14->dev_private;
 struct drm_crtc *VAR_16;
 const struct cxsr_latency *VAR_17;
 u32 VAR_18;
 unsigned long VAR_19;

 VAR_17 = FUNC_5(FUNC_3(VAR_14), VAR_15->is_ddr3,
      VAR_15->fsb_freq, VAR_15->mem_freq);
 if (!VAR_17) {
  FUNC_0("Unknown FSB/MEM found, disable CxSR\n");
  FUNC_6(VAR_14);
  return;
 }

 VAR_16 = FUNC_7(VAR_14);
 if (VAR_16) {
  int VAR_20 = VAR_16->mode.clock;
  int VAR_21 = VAR_16->fb->bits_per_pixel / 8;


  VAR_19 = FUNC_4(VAR_20, &VAR_13,
     VAR_13.fifo_size,
     VAR_21, VAR_17->display_sr);
  VAR_18 = FUNC_1(VAR_0);
  VAR_18 &= ~VAR_7;
  VAR_18 |= VAR_19 << VAR_8;
  FUNC_2(VAR_0, VAR_18);
  FUNC_0("DSPFW1 register is %x\n", VAR_18);


  VAR_19 = FUNC_4(VAR_20, &VAR_11,
     VAR_13.fifo_size,
     VAR_21, VAR_17->cursor_sr);
  VAR_18 = FUNC_1(VAR_1);
  VAR_18 &= ~VAR_2;
  VAR_18 |= (VAR_19 & 0x3f) << VAR_3;
  FUNC_2(VAR_1, VAR_18);


  VAR_19 = FUNC_4(VAR_20, &VAR_12,
     VAR_12.fifo_size,
     VAR_21, VAR_17->display_hpll_disable);
  VAR_18 = FUNC_1(VAR_1);
  VAR_18 &= ~VAR_6;
  VAR_18 |= VAR_19 & VAR_6;
  FUNC_2(VAR_1, VAR_18);


  VAR_19 = FUNC_4(VAR_20, &VAR_10,
     VAR_12.fifo_size,
     VAR_21, VAR_17->cursor_hpll_disable);
  VAR_18 = FUNC_1(VAR_1);
  VAR_18 &= ~VAR_4;
  VAR_18 |= (VAR_19 & 0x3f) << VAR_5;
  FUNC_2(VAR_1, VAR_18);
  FUNC_0("DSPFW3 register is %x\n", VAR_18);


  FUNC_2(VAR_1,
      FUNC_1(VAR_1) | VAR_9);
  FUNC_0("Self-refresh is enabled\n");
 } else {
  FUNC_6(VAR_14);
  FUNC_0("Self-refresh is disabled\n");
 }
}
