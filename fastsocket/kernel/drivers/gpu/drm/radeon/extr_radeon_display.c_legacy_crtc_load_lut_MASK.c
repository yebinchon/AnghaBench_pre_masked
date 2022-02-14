
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_id; int* lut_r; int* lut_g; int* lut_b; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 struct radeon_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_4)
{
 struct radeon_crtc *VAR_5 = FUNC_3(VAR_4);
 struct drm_device *VAR_6 = VAR_4->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 int VAR_8;
 uint32_t VAR_9;

 VAR_9 = FUNC_0(VAR_1);
 if (VAR_5->crtc_id == 0)
  VAR_9 &= (uint32_t)~VAR_0;
 else
  VAR_9 |= VAR_0;
 FUNC_1(VAR_1, VAR_9);

 FUNC_2(VAR_3, 0);
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  FUNC_1(VAR_2,
        (VAR_5->lut_r[VAR_8] << 20) |
        (VAR_5->lut_g[VAR_8] << 10) |
        (VAR_5->lut_b[VAR_8] << 0));
 }
}
