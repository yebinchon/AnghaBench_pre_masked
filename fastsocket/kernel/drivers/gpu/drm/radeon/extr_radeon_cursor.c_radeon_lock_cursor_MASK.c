
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct radeon_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_6, bool VAR_7)
{
 struct radeon_device *VAR_8 = VAR_6->dev->dev_private;
 struct radeon_crtc *VAR_9 = FUNC_4(VAR_6);
 uint32_t VAR_10;

 if (FUNC_1(VAR_8)) {
  VAR_10 = FUNC_2(VAR_3 + VAR_9->crtc_offset);
  if (VAR_7)
   VAR_10 |= VAR_2;
  else
   VAR_10 &= ~VAR_2;
  FUNC_3(VAR_3 + VAR_9->crtc_offset, VAR_10);
 } else if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_2(VAR_1 + VAR_9->crtc_offset);
  if (VAR_7)
   VAR_10 |= VAR_0;
  else
   VAR_10 &= ~VAR_0;
  FUNC_3(VAR_1 + VAR_9->crtc_offset, VAR_10);
 } else {
  VAR_10 = FUNC_2(VAR_5 + VAR_9->crtc_offset);
  if (VAR_7)
   VAR_10 |= VAR_4;
  else
   VAR_10 &= ~VAR_4;
  FUNC_3(VAR_5 + VAR_9->crtc_offset, VAR_10);
 }
}
