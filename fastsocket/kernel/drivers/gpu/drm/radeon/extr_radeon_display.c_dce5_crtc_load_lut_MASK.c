
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
 int FUNC_1 (int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_22 ;
 int FUNC_14 (int ) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_15 (scalar_t__,int) ;
 struct radeon_crtc* FUNC_16 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_17(struct drm_crtc *VAR_27)
{
 struct radeon_crtc *VAR_28 = FUNC_16(VAR_27);
 struct drm_device *VAR_29 = VAR_27->dev;
 struct radeon_device *VAR_30 = VAR_29->dev_private;
 int VAR_31;

 FUNC_0("%d\n", VAR_28->crtc_id);

 FUNC_15(VAR_17 + VAR_28->crtc_offset,
        (FUNC_7(VAR_16) |
  FUNC_8(VAR_16)));
 FUNC_15(VAR_23 + VAR_28->crtc_offset,
        VAR_15);
 FUNC_15(VAR_24 + VAR_28->crtc_offset,
        VAR_22);
 FUNC_15(VAR_18 + VAR_28->crtc_offset,
        (FUNC_4(VAR_19) |
  FUNC_13(VAR_19)));

 FUNC_15(VAR_4 + VAR_28->crtc_offset, 0);

 FUNC_15(VAR_1 + VAR_28->crtc_offset, 0);
 FUNC_15(VAR_2 + VAR_28->crtc_offset, 0);
 FUNC_15(VAR_3 + VAR_28->crtc_offset, 0);

 FUNC_15(VAR_7 + VAR_28->crtc_offset, 0xffff);
 FUNC_15(VAR_8 + VAR_28->crtc_offset, 0xffff);
 FUNC_15(VAR_9 + VAR_28->crtc_offset, 0xffff);

 FUNC_15(VAR_6 + VAR_28->crtc_offset, 0);
 FUNC_15(VAR_10 + VAR_28->crtc_offset, 0x00000007);

 FUNC_15(VAR_5 + VAR_28->crtc_offset, 0);
 for (VAR_31 = 0; VAR_31 < 256; VAR_31++) {
  FUNC_15(VAR_0 + VAR_28->crtc_offset,
         (VAR_28->lut_r[VAR_31] << 20) |
         (VAR_28->lut_g[VAR_31] << 10) |
         (VAR_28->lut_b[VAR_31] << 0));
 }

 FUNC_15(VAR_12 + VAR_28->crtc_offset,
        (FUNC_2(VAR_11) |
  FUNC_11(VAR_11) |
  FUNC_6(VAR_11) |
  FUNC_1(VAR_11)));
 FUNC_15(VAR_14 + VAR_28->crtc_offset,
        (FUNC_3(VAR_13) |
  FUNC_12(VAR_13)));
 FUNC_15(VAR_26 + VAR_28->crtc_offset,
        (FUNC_5(VAR_25) |
  FUNC_14(VAR_25)));
 FUNC_15(VAR_21 + VAR_28->crtc_offset,
        (FUNC_9(VAR_20) |
  FUNC_10(VAR_20)));

 FUNC_15(0x6940 + VAR_28->crtc_offset, 0);

}
