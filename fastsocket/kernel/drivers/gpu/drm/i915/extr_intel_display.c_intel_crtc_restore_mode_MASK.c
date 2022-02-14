
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int fb; int y; int x; int mode; } ;


 int FUNC_0 (struct drm_crtc*,int *,int ,int ,int ) ;

void FUNC_1(struct drm_crtc *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->mode, VAR_0->x, VAR_0->y, VAR_0->fb);
}
