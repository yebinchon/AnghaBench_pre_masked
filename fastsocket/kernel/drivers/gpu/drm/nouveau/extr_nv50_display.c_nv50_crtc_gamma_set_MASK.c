
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t u32 ;
typedef void* u16 ;
struct TYPE_2__ {void** b; void** g; void** r; } ;
struct nouveau_crtc {TYPE_1__ lut; } ;
struct drm_crtc {int dummy; } ;


 size_t FUNC_0 (size_t,size_t) ;
 struct nouveau_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_3(struct drm_crtc *VAR_0, u16 *VAR_1, u16 *VAR_2, u16 *VAR_3,
      uint32_t VAR_4, uint32_t VAR_5)
{
 struct nouveau_crtc *VAR_6 = FUNC_1(VAR_0);
 u32 VAR_7 = FUNC_0(VAR_4 + VAR_5, (u32)256);
 u32 VAR_8;

 for (VAR_8 = VAR_4; VAR_8 < VAR_7; VAR_8++) {
  VAR_6->lut.r[VAR_8] = VAR_1[VAR_8];
  VAR_6->lut.g[VAR_8] = VAR_2[VAR_8];
  VAR_6->lut.b[VAR_8] = VAR_3[VAR_8];
 }

 FUNC_2(VAR_0);
}
