
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_watermark_params {int guard_size; int fifo_size; int cacheline_size; int max_wm; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int htotal; int hdisplay; int clock; } ;
struct drm_crtc {TYPE_2__* fb; TYPE_1__ mode; } ;
struct TYPE_4__ {int bits_per_pixel; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct drm_crtc* FUNC_2 (struct drm_device*,int) ;

__attribute__((used)) static bool FUNC_3(struct drm_device *VAR_0,
       int VAR_1,
       const struct intel_watermark_params *VAR_2,
       int VAR_3,
       const struct intel_watermark_params *VAR_4,
       int VAR_5,
       int *VAR_6,
       int *VAR_7)
{
 struct drm_crtc *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_8 = FUNC_2(VAR_0, VAR_1);
 if (!FUNC_1(VAR_8)) {
  *VAR_7 = VAR_4->guard_size;
  *VAR_6 = VAR_2->guard_size;
  return 0;
 }

 VAR_9 = VAR_8->mode.htotal;
 VAR_10 = VAR_8->mode.hdisplay;
 VAR_11 = VAR_8->mode.clock;
 VAR_12 = VAR_8->fb->bits_per_pixel / 8;


 VAR_15 = ((VAR_11 * VAR_12 / 1000) * VAR_3) / 1000;
 VAR_16 = VAR_2->fifo_size*VAR_2->cacheline_size - VAR_10 * 8;
 if (VAR_16 > 0)
  VAR_15 += VAR_16;
 VAR_15 = FUNC_0(VAR_15, VAR_2->cacheline_size);
 *VAR_6 = VAR_15 + VAR_2->guard_size;
 if (*VAR_6 > (int)VAR_2->max_wm)
  *VAR_6 = VAR_2->max_wm;


 VAR_13 = ((VAR_9 * 1000) / VAR_11);
 VAR_14 = (VAR_5 / VAR_13 + 1000) / 1000;
 VAR_15 = VAR_14 * 64 * VAR_12;
 VAR_16 = VAR_4->fifo_size*VAR_4->cacheline_size - VAR_10 * 8;
 if (VAR_16 > 0)
  VAR_15 += VAR_16;
 VAR_15 = FUNC_0(VAR_15, VAR_4->cacheline_size);
 *VAR_7 = VAR_15 + VAR_4->guard_size;
 if (*VAR_7 > (int)VAR_4->max_wm)
  *VAR_7 = (int)VAR_4->max_wm;

 return 1;
}
