
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_avi_infoframe {int active_aspect; int picture_aspect; int video_code; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_display_mode const*) ;
 int FUNC_1 (struct hdmi_avi_infoframe*) ;

int
FUNC_2(struct hdmi_avi_infoframe *VAR_3,
      const struct drm_display_mode *VAR_4)
{
 int VAR_5;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->video_code = FUNC_0(VAR_4);
 if (!VAR_3->video_code)
  return 0;

 VAR_3->picture_aspect = VAR_2;
 VAR_3->active_aspect = VAR_1;

 return 0;
}
