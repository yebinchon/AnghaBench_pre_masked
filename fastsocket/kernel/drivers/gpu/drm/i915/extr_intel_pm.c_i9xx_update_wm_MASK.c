
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_watermark_params {int guard_size; int fifo_size; int cacheline_size; } ;
struct TYPE_4__ {int (* get_fifo_size ) (struct drm_device*,int) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_5__ {int clock; int htotal; int hdisplay; } ;
struct drm_crtc {TYPE_3__* fb; TYPE_2__ mode; } ;
struct TYPE_6__ {int bits_per_pixel; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 scalar_t__ FUNC_8 (struct drm_device*) ;
 struct intel_watermark_params VAR_8 ;
 struct intel_watermark_params VAR_9 ;
 struct intel_watermark_params VAR_10 ;
 int FUNC_9 (int,struct intel_watermark_params const*,int,int,int ) ;
 scalar_t__ FUNC_10 (struct drm_crtc*) ;
 struct drm_crtc* FUNC_11 (struct drm_device*,int) ;
 int VAR_11 ;
 int FUNC_12 (struct drm_device*,int) ;
 int FUNC_13 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_14(struct drm_device *VAR_12)
{
 struct drm_i915_private *VAR_13 = VAR_12->dev_private;
 const struct intel_watermark_params *VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18 = 1;
 int VAR_19;
 int VAR_20, VAR_21;
 struct drm_crtc *VAR_22, *VAR_23 = ((void*)0);

 if (FUNC_8(VAR_12))
  VAR_14 = &VAR_10;
 else if (!FUNC_5(VAR_12))
  VAR_14 = &VAR_9;
 else
  VAR_14 = &VAR_8;

 VAR_19 = VAR_13->display.get_fifo_size(VAR_12, 0);
 VAR_22 = FUNC_11(VAR_12, 0);
 if (FUNC_10(VAR_22)) {
  int VAR_24 = VAR_22->fb->bits_per_pixel / 8;
  if (FUNC_5(VAR_12))
   VAR_24 = 4;

  VAR_20 = FUNC_9(VAR_22->mode.clock,
            VAR_14, VAR_19, VAR_24,
            VAR_11);
  VAR_23 = VAR_22;
 } else
  VAR_20 = VAR_19 - VAR_14->guard_size;

 VAR_19 = VAR_13->display.get_fifo_size(VAR_12, 1);
 VAR_22 = FUNC_11(VAR_12, 1);
 if (FUNC_10(VAR_22)) {
  int VAR_25 = VAR_22->fb->bits_per_pixel / 8;
  if (FUNC_5(VAR_12))
   VAR_25 = 4;

  VAR_21 = FUNC_9(VAR_22->mode.clock,
            VAR_14, VAR_19, VAR_25,
            VAR_11);
  if (VAR_23 == ((void*)0))
   VAR_23 = VAR_22;
  else
   VAR_23 = ((void*)0);
 } else
  VAR_21 = VAR_19 - VAR_14->guard_size;

 FUNC_1("FIFO watermarks - A: %d, B: %d\n", VAR_20, VAR_21);




 VAR_17 = 2;


 if (FUNC_7(VAR_12) || FUNC_8(VAR_12))
  FUNC_4(VAR_2, VAR_4 | 0);
 else if (FUNC_6(VAR_12))
  FUNC_4(VAR_6, FUNC_3(VAR_6) & ~VAR_7);


 if (FUNC_2(VAR_12) && VAR_23) {

  static const int VAR_26 = 6000;
  int VAR_27 = VAR_23->mode.clock;
  int VAR_28 = VAR_23->mode.htotal;
  int VAR_29 = VAR_23->mode.hdisplay;
  int VAR_30 = VAR_23->fb->bits_per_pixel / 8;
  unsigned long VAR_31;
  int VAR_32;

  VAR_31 = (VAR_28 * 1000) / VAR_27;


  VAR_32 = (((VAR_26 / VAR_31) + 1000) / 1000) *
   VAR_30 * VAR_29;
  VAR_32 = FUNC_0(VAR_32, VAR_14->cacheline_size);
  FUNC_1("self-refresh entries: %d\n", VAR_32);
  VAR_18 = VAR_14->fifo_size - VAR_32;
  if (VAR_18 < 0)
   VAR_18 = 1;

  if (FUNC_7(VAR_12) || FUNC_8(VAR_12))
   FUNC_4(VAR_2,
       VAR_5 | (VAR_18 & 0xff));
  else if (FUNC_6(VAR_12))
   FUNC_4(VAR_2, VAR_18 & 0x3f);
 }

 FUNC_1("Setting FIFO watermarks - A: %d, B: %d, C: %d, SR %d\n",
        VAR_20, VAR_21, VAR_17, VAR_18);

 VAR_15 = ((VAR_21 & 0x3f) << 16) | (VAR_20 & 0x3f);
 VAR_16 = (VAR_17 & 0x1f);


 VAR_15 = VAR_15 | (1 << 24) | (1 << 8);
 VAR_16 = VAR_16 | (1 << 8);

 FUNC_4(VAR_0, VAR_15);
 FUNC_4(VAR_1, VAR_16);

 if (FUNC_2(VAR_12)) {
  if (VAR_23) {
   if (FUNC_7(VAR_12) || FUNC_8(VAR_12))
    FUNC_4(VAR_2,
        VAR_4 | VAR_3);
   else if (FUNC_6(VAR_12))
    FUNC_4(VAR_6, FUNC_3(VAR_6) | VAR_7);
   FUNC_1("memory self refresh enabled\n");
  } else
   FUNC_1("memory self refresh disabled\n");
 }
}
