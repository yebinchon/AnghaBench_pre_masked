
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct radeon_crtc {int* lut_r; int* lut_g; int* lut_b; scalar_t__ crtc_offset; int crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (scalar_t__,int) ;
 struct radeon_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_11)
{
 struct radeon_crtc *VAR_12 = FUNC_2(VAR_11);
 struct drm_device *VAR_13 = VAR_11->dev;
 struct radeon_device *VAR_14 = VAR_13->dev_private;
 int VAR_15;

 FUNC_0("%d\n", VAR_12->crtc_id);
 FUNC_1(VAR_4 + VAR_12->crtc_offset, 0);

 FUNC_1(VAR_1 + VAR_12->crtc_offset, 0);
 FUNC_1(VAR_2 + VAR_12->crtc_offset, 0);
 FUNC_1(VAR_3 + VAR_12->crtc_offset, 0);

 FUNC_1(VAR_7 + VAR_12->crtc_offset, 0xffff);
 FUNC_1(VAR_8 + VAR_12->crtc_offset, 0xffff);
 FUNC_1(VAR_9 + VAR_12->crtc_offset, 0xffff);

 FUNC_1(VAR_6 + VAR_12->crtc_offset, 0);
 FUNC_1(VAR_10 + VAR_12->crtc_offset, 0x00000007);

 FUNC_1(VAR_5 + VAR_12->crtc_offset, 0);
 for (VAR_15 = 0; VAR_15 < 256; VAR_15++) {
  FUNC_1(VAR_0 + VAR_12->crtc_offset,
         (VAR_12->lut_r[VAR_15] << 20) |
         (VAR_12->lut_g[VAR_15] << 10) |
         (VAR_12->lut_b[VAR_15] << 0));
 }
}
