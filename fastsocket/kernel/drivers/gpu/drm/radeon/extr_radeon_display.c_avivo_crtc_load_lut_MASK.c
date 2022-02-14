
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; int* lut_r; int* lut_g; int* lut_b; scalar_t__ crtc_offset; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ) ;
 struct radeon_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_13)
{
 struct radeon_crtc *VAR_14 = FUNC_3(VAR_13);
 struct drm_device *VAR_15 = VAR_13->dev;
 struct radeon_device *VAR_16 = VAR_15->dev_private;
 int VAR_17;

 FUNC_0("%d\n", VAR_14->crtc_id);
 FUNC_1(VAR_4 + VAR_14->crtc_offset, 0);

 FUNC_1(VAR_1 + VAR_14->crtc_offset, 0);
 FUNC_1(VAR_2 + VAR_14->crtc_offset, 0);
 FUNC_1(VAR_3 + VAR_14->crtc_offset, 0);

 FUNC_1(VAR_5 + VAR_14->crtc_offset, 0xffff);
 FUNC_1(VAR_6 + VAR_14->crtc_offset, 0xffff);
 FUNC_1(VAR_7 + VAR_14->crtc_offset, 0xffff);

 FUNC_1(VAR_11, VAR_14->crtc_id);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_12, 0x0000003f);

 FUNC_2(VAR_9, 0);
 for (VAR_17 = 0; VAR_17 < 256; VAR_17++) {
  FUNC_1(VAR_8,
        (VAR_14->lut_r[VAR_17] << 20) |
        (VAR_14->lut_g[VAR_17] << 10) |
        (VAR_14->lut_b[VAR_17] << 0));
 }

 FUNC_1(VAR_0 + VAR_14->crtc_offset, VAR_14->crtc_id);
}
