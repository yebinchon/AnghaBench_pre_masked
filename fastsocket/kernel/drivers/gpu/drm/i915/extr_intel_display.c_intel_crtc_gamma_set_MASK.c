
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u16 ;
struct intel_crtc {int* lut_r; int* lut_g; int* lut_b; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*) ;
 struct intel_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0, u16 *VAR_1, u16 *VAR_2,
     u16 *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 int VAR_6 = (VAR_4 + VAR_5 > 256) ? 256 : VAR_4 + VAR_5, VAR_7;
 struct intel_crtc *VAR_8 = FUNC_1(VAR_0);

 for (VAR_7 = VAR_4; VAR_7 < VAR_6; VAR_7++) {
  VAR_8->lut_r[VAR_7] = VAR_1[VAR_7] >> 8;
  VAR_8->lut_g[VAR_7] = VAR_2[VAR_7] >> 8;
  VAR_8->lut_b[VAR_7] = VAR_3[VAR_7] >> 8;
 }

 FUNC_0(VAR_0);
}
