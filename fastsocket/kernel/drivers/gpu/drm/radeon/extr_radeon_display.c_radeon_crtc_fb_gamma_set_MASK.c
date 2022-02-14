
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct radeon_crtc {int* lut_r; int* lut_g; int* lut_b; } ;
struct drm_crtc {int dummy; } ;


 struct radeon_crtc* FUNC_0 (struct drm_crtc*) ;

void FUNC_1(struct drm_crtc *VAR_0, u16 VAR_1, u16 VAR_2,
         u16 VAR_3, int VAR_4)
{
 struct radeon_crtc *VAR_5 = FUNC_0(VAR_0);

 VAR_5->lut_r[VAR_4] = VAR_1 >> 6;
 VAR_5->lut_g[VAR_4] = VAR_2 >> 6;
 VAR_5->lut_b[VAR_4] = VAR_3 >> 6;
}
