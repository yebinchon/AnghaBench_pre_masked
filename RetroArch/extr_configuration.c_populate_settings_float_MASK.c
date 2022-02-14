
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_float_setting {int dummy; } ;
struct TYPE_4__ {int video_msg_bgcolor_opacity; int input_analog_sensitivity; int input_analog_deadzone; int slowmotion_ratio; int fastforward_ratio; int video_font_size; int video_msg_pos_y; int video_msg_pos_x; int menu_rgui_particle_effect_speed; int menu_ticker_speed; int menu_header_opacity; int menu_footer_opacity; int menu_framebuffer_opacity; int menu_wallpaper_opacity; int menu_scale_factor; int input_overlay_scale; int input_overlay_opacity; int audio_mixer_volume; int audio_volume; int audio_max_timing_skew; int video_refresh_rate; int crt_video_refresh_rate; int video_scale; int video_aspect_ratio; } ;
struct TYPE_5__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 float VAR_11 ;
 float VAR_12 ;
 float VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int *,int,float,int) ;
 float VAR_15 ;
 float VAR_16 ;
 int * FUNC_1 (int ) ;
 float VAR_17 ;
 scalar_t__ FUNC_2 (int,int) ;
 int * FUNC_3 (int ) ;
 float VAR_18 ;
 float VAR_19 ;
 float VAR_20 ;
 float VAR_21 ;
 float VAR_22 ;
 float VAR_23 ;
 float VAR_24 ;
 float VAR_25 ;

__attribute__((used)) static struct config_float_setting *FUNC_4(settings_t *VAR_26, int *VAR_27)
{
   unsigned VAR_28 = 0;
   struct config_float_setting *VAR_29 = (struct config_float_setting*)FUNC_2(1, (*VAR_27 + 1) * sizeof(struct config_float_setting));

   if (!VAR_29)
      return ((void*)0);

   FUNC_0("video_aspect_ratio", &VAR_26->floats.video_aspect_ratio, 1, VAR_1, 0);
   FUNC_0("video_scale", &VAR_26->floats.video_scale, 0, 0.0f, 0);
   FUNC_0("crt_video_refresh_rate", &VAR_26->floats.crt_video_refresh_rate, 1, VAR_4, 0);
   FUNC_0("video_refresh_rate", &VAR_26->floats.video_refresh_rate, 1, VAR_11, 0);
   FUNC_0("audio_rate_control_delta", FUNC_1(VAR_0), 1, VAR_10, 0);
   FUNC_0("audio_max_timing_skew", &VAR_26->floats.audio_max_timing_skew, 1, VAR_8, 0);
   FUNC_0("audio_volume", &VAR_26->floats.audio_volume, 1, VAR_3, 0);
   FUNC_0("video_message_pos_x", &VAR_26->floats.video_msg_pos_x, 1, VAR_24, 0);
   FUNC_0("video_message_pos_y", &VAR_26->floats.video_msg_pos_y, 1, VAR_25, 0);
   FUNC_0("video_font_size", &VAR_26->floats.video_font_size, 1, VAR_6, 0);
   FUNC_0("fastforward_ratio", &VAR_26->floats.fastforward_ratio, 1, VAR_5, 0);
   FUNC_0("slowmotion_ratio", &VAR_26->floats.slowmotion_ratio, 1, VAR_13, 0);
   FUNC_0("input_axis_threshold", FUNC_3(VAR_14), 1, VAR_17, 0);
   FUNC_0("input_analog_deadzone", &VAR_26->floats.input_analog_deadzone, 1, VAR_15, 0);
   FUNC_0("input_analog_sensitivity", &VAR_26->floats.input_analog_sensitivity, 1, VAR_16, 0);
   FUNC_0("video_msg_bgcolor_opacity", &VAR_26->floats.video_msg_bgcolor_opacity, 1, VAR_23, 0);

   *VAR_27 = VAR_28;

   return VAR_29;
}
