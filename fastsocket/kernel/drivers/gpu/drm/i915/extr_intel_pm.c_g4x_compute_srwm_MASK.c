
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_watermark_params {int guard_size; int cacheline_size; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int hdisplay; int htotal; int clock; } ;
struct drm_crtc {TYPE_2__* fb; TYPE_1__ mode; } ;
struct TYPE_4__ {int bits_per_pixel; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct drm_device*,int,int,struct intel_watermark_params const*,struct intel_watermark_params const*) ;
 struct drm_crtc* FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static bool FUNC_4(struct drm_device *VAR_0,
        int VAR_1,
        int VAR_2,
        const struct intel_watermark_params *VAR_3,
        const struct intel_watermark_params *VAR_4,
        int *VAR_5, int *VAR_6)
{
 struct drm_crtc *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;

 if (!VAR_2) {
  *VAR_5 = *VAR_6 = 0;
  return 0;
 }

 VAR_7 = FUNC_2(VAR_0, VAR_1);
 VAR_8 = VAR_7->mode.hdisplay;
 VAR_9 = VAR_7->mode.htotal;
 VAR_11 = VAR_7->mode.clock;
 VAR_10 = VAR_7->fb->bits_per_pixel / 8;

 VAR_12 = (VAR_9 * 1000) / VAR_11;
 VAR_13 = (VAR_2 / VAR_12 + 1000) / 1000;
 VAR_14 = VAR_8 * VAR_10;


 VAR_15 = ((VAR_11 * VAR_10 / 1000) * VAR_2) / 1000;
 VAR_16 = VAR_13 * VAR_14;

 VAR_17 = FUNC_0(FUNC_3(VAR_15, VAR_16), VAR_3->cacheline_size);
 *VAR_5 = VAR_17 + VAR_3->guard_size;


 VAR_17 = VAR_13 * VAR_10 * 64;
 VAR_17 = FUNC_0(VAR_17, VAR_4->cacheline_size);
 *VAR_6 = VAR_17 + VAR_4->guard_size;

 return FUNC_1(VAR_0,
         *VAR_5, *VAR_6,
         VAR_3, VAR_4);
}
