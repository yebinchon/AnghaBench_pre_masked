
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int clock; int htotal; int hdisplay; } ;
struct drm_crtc {TYPE_2__* fb; TYPE_1__ mode; } ;
struct TYPE_6__ {int fifo_size; int guard_size; int max_wm; int cacheline_size; } ;
struct TYPE_5__ {int bits_per_pixel; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 TYPE_3__ VAR_9 ;
 struct drm_crtc* FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_10)
{
 struct drm_i915_private *VAR_11 = VAR_10->dev_private;
 struct drm_crtc *VAR_12;
 int VAR_13 = 1;
 int VAR_14 = 16;


 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12) {

  static const int VAR_15 = 12000;
  int VAR_16 = VAR_12->mode.clock;
  int VAR_17 = VAR_12->mode.htotal;
  int VAR_18 = VAR_12->mode.hdisplay;
  int VAR_19 = VAR_12->fb->bits_per_pixel / 8;
  unsigned long VAR_20;
  int VAR_21;

  VAR_20 = ((VAR_17 * 1000) / VAR_16);


  VAR_21 = (((VAR_15 / VAR_20) + 1000) / 1000) *
   VAR_19 * VAR_18;
  VAR_21 = FUNC_0(VAR_21, VAR_7);
  VAR_13 = VAR_8 - VAR_21;
  if (VAR_13 < 0)
   VAR_13 = 1;
  VAR_13 &= 0x1ff;
  FUNC_1("self-refresh entries: %d, wm: %d\n",
         VAR_21, VAR_13);

  VAR_21 = (((VAR_15 / VAR_20) + 1000) / 1000) *
   VAR_19 * 64;
  VAR_21 = FUNC_0(VAR_21,
       VAR_9.cacheline_size);
  VAR_14 = VAR_9.fifo_size -
   (VAR_21 + VAR_9.guard_size);

  if (VAR_14 > VAR_9.max_wm)
   VAR_14 = VAR_9.max_wm;

  FUNC_1("self-refresh watermark: display plane %d "
         "cursor %d\n", VAR_13, VAR_14);

  if (FUNC_4(VAR_10))
   FUNC_3(VAR_5, VAR_6);
 } else {

  if (FUNC_4(VAR_10))
   FUNC_3(VAR_5, FUNC_2(VAR_5)
       & ~VAR_6);
 }

 FUNC_1("Setting FIFO watermarks - A: 8, B: 8, C: 8, SR %d\n",
        VAR_13);


 FUNC_3(VAR_0, (VAR_13 << VAR_4) |
     (8 << 16) | (8 << 8) | (8 << 0));
 FUNC_3(VAR_1, (8 << 8) | (8 << 0));

 FUNC_3(VAR_2, (VAR_14 << VAR_3));
}
