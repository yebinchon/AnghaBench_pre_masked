
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_cmdline_mode {int specified; } ;
struct drm_fb_helper_connector {struct drm_cmdline_mode cmdline_mode; } ;



__attribute__((used)) static bool FUNC_0(struct drm_fb_helper_connector *VAR_0)
{
 struct drm_cmdline_mode *VAR_1;
 VAR_1 = &VAR_0->cmdline_mode;
 return VAR_1->specified;
}
