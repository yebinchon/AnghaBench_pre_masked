
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_crtc {TYPE_1__ base; scalar_t__ crtc_offset; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static u32 FUNC_2(struct radeon_device *VAR_1,
       struct radeon_crtc *VAR_2,
       struct drm_display_mode *VAR_3,
       struct drm_display_mode *VAR_4)
{
 u32 VAR_5;
 if (VAR_2->base.enabled && VAR_3) {
  if (VAR_4)
   VAR_5 = 0;
  else
   VAR_5 = 2;
 } else
  VAR_5 = 0;

 FUNC_1(VAR_0 + VAR_2->crtc_offset,
        FUNC_0(VAR_5));

 if (VAR_2->base.enabled && VAR_3) {
  switch (VAR_5) {
  case 0:
  default:
   return 4096 * 2;
  case 2:
   return 8192 * 2;
  }
 }


 return 0;
}
