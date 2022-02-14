
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_watermark_params {int cacheline_size; int guard_size; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int hdisplay; int htotal; int clock; } ;
struct drm_crtc {TYPE_2__* fb; TYPE_1__ mode; } ;
struct TYPE_4__ {int bits_per_pixel; } ;


 int FUNC_0 (int,int) ;
 struct drm_crtc* FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*,int,int,int,int,struct intel_watermark_params const*,struct intel_watermark_params const*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static bool FUNC_4(struct drm_device *VAR_0, int VAR_1, int VAR_2,
      int VAR_3,
      const struct intel_watermark_params *VAR_4,
      const struct intel_watermark_params *VAR_5,
      int *VAR_6, int *VAR_7, int *VAR_8)
{
 struct drm_crtc *VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 if (!VAR_3) {
  *VAR_6 = *VAR_7 = *VAR_8 = 0;
  return 0;
 }

 VAR_9 = FUNC_1(VAR_0, VAR_2);
 VAR_11 = VAR_9->mode.hdisplay;
 VAR_12 = VAR_9->mode.htotal;
 VAR_14 = VAR_9->mode.clock;
 VAR_13 = VAR_9->fb->bits_per_pixel / 8;

 VAR_10 = (VAR_12 * 1000) / VAR_14;
 VAR_15 = (VAR_3 / VAR_10 + 1000) / 1000;
 VAR_16 = VAR_11 * VAR_13;


 VAR_17 = ((VAR_14 * VAR_13 / 1000) * VAR_3) / 1000;
 VAR_18 = VAR_15 * VAR_16;

 VAR_19 = FUNC_0(FUNC_3(VAR_17, VAR_18), VAR_4->cacheline_size);
 *VAR_7 = VAR_19 + VAR_4->guard_size;





 *VAR_6 = FUNC_0(*VAR_7 * 64, VAR_16) + 2;


 VAR_19 = VAR_15 * VAR_13 * 64;
 VAR_19 = FUNC_0(VAR_19, VAR_5->cacheline_size);
 *VAR_8 = VAR_19 + VAR_5->guard_size;

 return FUNC_2(VAR_0, VAR_1,
       *VAR_6, *VAR_7, *VAR_8,
       VAR_4, VAR_5);
}
