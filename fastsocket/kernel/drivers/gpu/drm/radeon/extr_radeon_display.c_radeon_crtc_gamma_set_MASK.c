
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u16 ;
struct radeon_crtc {int* lut_r; int* lut_g; int* lut_b; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*) ;
 struct radeon_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0, u16 *VAR_1, u16 *VAR_2,
      u16 *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct radeon_crtc *VAR_6 = FUNC_1(VAR_0);
 int VAR_7 = (VAR_4 + VAR_5 > 256) ? 256 : VAR_4 + VAR_5, VAR_8;


 for (VAR_8 = VAR_4; VAR_8 < VAR_7; VAR_8++) {
  VAR_6->lut_r[VAR_8] = VAR_1[VAR_8] >> 6;
  VAR_6->lut_g[VAR_8] = VAR_2[VAR_8] >> 6;
  VAR_6->lut_b[VAR_8] = VAR_3[VAR_8] >> 6;
 }
 FUNC_0(VAR_0);
}
