
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_tv_mode_constants {int hor_total; int crtcPLL_M; int crtcPLL_N; int crtcPLL_post_div; } ;
struct radeon_encoder {int dummy; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct radeon_tv_mode_constants* FUNC_1 (struct radeon_encoder*,int *) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

void FUNC_3(struct drm_encoder *VAR_4,
      uint32_t *VAR_5, uint32_t *VAR_6,
      uint32_t *VAR_7, uint32_t *VAR_8)
{
 struct radeon_encoder *VAR_9 = FUNC_2(VAR_4);
 const struct radeon_tv_mode_constants *VAR_10;

 VAR_10 = FUNC_1(VAR_9, ((void*)0));
 if (!VAR_10)
  return;

 *VAR_5 = (VAR_10->hor_total & 0x7) | VAR_0;

 *VAR_6 = VAR_10->crtcPLL_M;

 *VAR_7 = (VAR_10->crtcPLL_N & 0x7ff) | (FUNC_0(VAR_10->crtcPLL_post_div) << 16);
 *VAR_8 &= ~(VAR_1 | VAR_3);
 *VAR_8 |= VAR_2;
}
