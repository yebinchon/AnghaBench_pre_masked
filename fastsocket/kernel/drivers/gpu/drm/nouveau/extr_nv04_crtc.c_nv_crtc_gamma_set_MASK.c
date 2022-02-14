
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* u16 ;
struct TYPE_4__ {scalar_t__ depth; void** b; void** g; void** r; } ;
struct TYPE_3__ {int fb; } ;
struct nouveau_crtc {TYPE_2__ lut; TYPE_1__ base; } ;
struct drm_crtc {int dummy; } ;


 struct nouveau_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_2(struct drm_crtc *VAR_0, u16 *VAR_1, u16 *VAR_2, u16 *VAR_3, uint32_t VAR_4,
    uint32_t VAR_5)
{
 int VAR_6 = (VAR_4 + VAR_5 > 256) ? 256 : VAR_4 + VAR_5, VAR_7;
 struct nouveau_crtc *VAR_8 = FUNC_0(VAR_0);

 for (VAR_7 = VAR_4; VAR_7 < VAR_6; VAR_7++) {
  VAR_8->lut.r[VAR_7] = VAR_1[VAR_7];
  VAR_8->lut.g[VAR_7] = VAR_2[VAR_7];
  VAR_8->lut.b[VAR_7] = VAR_3[VAR_7];
 }






 if (!VAR_8->base.fb) {
  VAR_8->lut.depth = 0;
  return;
 }

 FUNC_1(VAR_0);
}
