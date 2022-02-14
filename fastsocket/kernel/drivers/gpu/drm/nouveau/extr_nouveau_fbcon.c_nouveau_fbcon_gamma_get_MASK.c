
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int * b; int * g; int * r; } ;
struct nouveau_crtc {TYPE_1__ lut; } ;
struct drm_crtc {int dummy; } ;


 struct nouveau_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0, u16 *VAR_1, u16 *VAR_2,
        u16 *VAR_3, int VAR_4)
{
 struct nouveau_crtc *VAR_5 = FUNC_0(VAR_0);

 *VAR_1 = VAR_5->lut.r[VAR_4];
 *VAR_2 = VAR_5->lut.g[VAR_4];
 *VAR_3 = VAR_5->lut.b[VAR_4];
}
