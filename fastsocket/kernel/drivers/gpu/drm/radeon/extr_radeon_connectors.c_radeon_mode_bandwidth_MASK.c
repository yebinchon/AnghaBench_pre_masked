
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int htotal; unsigned int vtotal; int clock; unsigned int hdisplay; unsigned int vdisplay; } ;



__attribute__((used)) static unsigned FUNC_0(struct drm_display_mode *VAR_0, int VAR_1)
{
 unsigned VAR_2, VAR_3, VAR_4;

 if (!VAR_0->htotal || !VAR_0->vtotal || !VAR_0->clock) {
  return 0;
 }

 VAR_2 = VAR_0->hdisplay * VAR_0->vdisplay;
 VAR_3 = VAR_0->htotal * VAR_0->vtotal;
 VAR_4 = ((VAR_0->clock >> 10) * VAR_1 * (VAR_2 >> 10)) * 1000;
 return VAR_4/(VAR_3);
}
