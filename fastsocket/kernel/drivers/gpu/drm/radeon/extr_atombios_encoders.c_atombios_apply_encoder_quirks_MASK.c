
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder {int devices; int active_device; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {TYPE_1__* pdev; struct radeon_device* dev_private; } ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct radeon_crtc* FUNC_4 (int ) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_6(struct drm_encoder *VAR_10,
         struct drm_display_mode *VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;
 struct radeon_encoder *VAR_14 = FUNC_5(VAR_10);
 struct radeon_crtc *VAR_15 = FUNC_4(VAR_10->crtc);


 if ((VAR_12->pdev->device == 0x71C5) &&
     (VAR_12->pdev->subsystem_vendor == 0x106b) &&
     (VAR_12->pdev->subsystem_device == 0x0080)) {
  if (VAR_14->devices & VAR_0) {
   uint32_t VAR_16 = FUNC_2(VAR_4);

   VAR_16 &= ~VAR_6;
   VAR_16 &= ~VAR_5;

   FUNC_3(VAR_4, VAR_16);
  }
 }


 if (FUNC_0(VAR_13) &&
     (!(VAR_14->active_device & (VAR_1)))) {
  if (FUNC_1(VAR_13)) {
   if (VAR_11->flags & VAR_7)
    FUNC_3(VAR_8 + VAR_15->crtc_offset,
           VAR_9);
   else
    FUNC_3(VAR_8 + VAR_15->crtc_offset, 0);
  } else {
   if (VAR_11->flags & VAR_7)
    FUNC_3(VAR_2 + VAR_15->crtc_offset,
           VAR_3);
   else
    FUNC_3(VAR_2 + VAR_15->crtc_offset, 0);
  }
 }
}
