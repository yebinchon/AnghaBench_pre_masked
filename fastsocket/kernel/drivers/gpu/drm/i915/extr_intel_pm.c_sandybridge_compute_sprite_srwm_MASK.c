
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_watermark_params {int guard_size; int cacheline_size; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc {TYPE_1__ mode; } ;


 int FUNC_0 (int ,int ) ;
 struct drm_crtc* FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static bool
FUNC_3(struct drm_device *VAR_0, int VAR_1,
    uint32_t VAR_2, int VAR_3,
    const struct intel_watermark_params *VAR_4,
    int VAR_5, int *VAR_6)
{
 struct drm_crtc *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 if (!VAR_5) {
  *VAR_6 = 0;
  return 0;
 }

 VAR_7 = FUNC_1(VAR_0, VAR_1);
 VAR_9 = VAR_7->mode.clock;
 if (!VAR_9) {
  *VAR_6 = 0;
  return 0;
 }

 VAR_8 = (VAR_2 * 1000) / VAR_9;
 if (!VAR_8) {
  *VAR_6 = 0;
  return 0;
 }

 VAR_10 = (VAR_5 / VAR_8 + 1000) / 1000;
 VAR_11 = VAR_2 * VAR_3;


 VAR_12 = ((VAR_9 * VAR_3 / 1000) * VAR_5) / 1000;
 VAR_13 = VAR_10 * VAR_11;

 VAR_14 = FUNC_0(FUNC_2(VAR_12, VAR_13), VAR_4->cacheline_size);
 *VAR_6 = VAR_14 + VAR_4->guard_size;

 return *VAR_6 > 0x3ff ? 0 : 1;
}
