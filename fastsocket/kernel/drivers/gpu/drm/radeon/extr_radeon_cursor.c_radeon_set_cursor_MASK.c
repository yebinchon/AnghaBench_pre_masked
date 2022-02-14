
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_device {scalar_t__ family; } ;
struct radeon_crtc {int legacy_cursor_offset; int legacy_display_base_addr; scalar_t__ crtc_offset; scalar_t__ crtc_id; } ;
struct drm_gem_object {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__,int) ;
 struct radeon_crtc* FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_7, struct drm_gem_object *VAR_8,
         uint64_t VAR_9)
{
 struct radeon_crtc *VAR_10 = FUNC_3(VAR_7);
 struct radeon_device *VAR_11 = VAR_7->dev->dev_private;

 if (FUNC_1(VAR_11)) {
  FUNC_2(VAR_3 + VAR_10->crtc_offset,
         FUNC_4(VAR_9));
  FUNC_2(VAR_2 + VAR_10->crtc_offset,
         VAR_9 & 0xffffffff);
 } else if (FUNC_0(VAR_11)) {
  if (VAR_11->family >= VAR_1) {
   if (VAR_10->crtc_id)
    FUNC_2(VAR_5, FUNC_4(VAR_9));
   else
    FUNC_2(VAR_4, FUNC_4(VAR_9));
  }
  FUNC_2(VAR_0 + VAR_10->crtc_offset,
         VAR_9 & 0xffffffff);
 } else {
  VAR_10->legacy_cursor_offset = VAR_9 - VAR_10->legacy_display_base_addr;

  FUNC_2(VAR_6 + VAR_10->crtc_offset, VAR_10->legacy_cursor_offset);
 }
}
