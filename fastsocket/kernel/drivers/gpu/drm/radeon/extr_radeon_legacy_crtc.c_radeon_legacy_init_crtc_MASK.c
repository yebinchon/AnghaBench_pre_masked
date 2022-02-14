
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_crtc {int crtc_id; int base; scalar_t__ crtc_offset; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;

void FUNC_1(struct drm_device *VAR_3,
          struct radeon_crtc *VAR_4)
{
 if (VAR_4->crtc_id == 1)
  VAR_4->crtc_offset = VAR_0 - VAR_1;
 FUNC_0(&VAR_4->base, &VAR_2);
}
