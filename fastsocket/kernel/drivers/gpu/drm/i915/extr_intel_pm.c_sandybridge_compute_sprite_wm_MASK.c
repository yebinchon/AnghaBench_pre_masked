
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_watermark_params {int guard_size; int fifo_size; int cacheline_size; int max_wm; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc {TYPE_1__ mode; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct drm_crtc* FUNC_2 (struct drm_device*,int) ;

__attribute__((used)) static bool
FUNC_3(struct drm_device *VAR_0, int VAR_1,
         uint32_t VAR_2, int VAR_3,
         const struct intel_watermark_params *VAR_4,
         int VAR_5, int *VAR_6)
{
 struct drm_crtc *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_2(VAR_0, VAR_1);
 if (!FUNC_1(VAR_7)) {
  *VAR_6 = VAR_4->guard_size;
  return 0;
 }

 VAR_8 = VAR_7->mode.clock;


 VAR_9 = ((VAR_8 * VAR_3 / 1000) * VAR_5) / 1000;
 VAR_10 = VAR_4->fifo_size*VAR_4->cacheline_size -
  VAR_2 * 8;
 if (VAR_10 > 0)
  VAR_9 += VAR_10;
 VAR_9 = FUNC_0(VAR_9, VAR_4->cacheline_size);
 *VAR_6 = VAR_9 + VAR_4->guard_size;
 if (*VAR_6 > (int)VAR_4->max_wm)
  *VAR_6 = VAR_4->max_wm;

 return 1;
}
