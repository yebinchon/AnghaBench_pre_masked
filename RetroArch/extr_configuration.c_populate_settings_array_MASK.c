
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct config_array_setting {int dummy; } ;
struct TYPE_4__ {int ai_service_url; int discord_app_id; int twitch_stream_key; int youtube_stream_key; int midi_output; int midi_input; int midi_driver; int netplay_mitm_server; int led_driver; int bundle_assets_dst_subdir; int bundle_assets_dst; int bundle_assets_src; int input_keyboard_layout; int input_joypad_driver; int input_driver; int audio_resampler; int audio_driver; int video_context_driver; int cheevos_token; int cheevos_password; int cheevos_username; int camera_device; int audio_device; int menu_driver; int location_driver; int wifi_driver; int camera_driver; int record_driver; int video_driver; } ;
struct TYPE_5__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;


 int * VAR_0 ;
 int FUNC_0 (char*,int ,int,int *,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static struct config_array_setting *FUNC_2(settings_t *VAR_4, int *VAR_5)
{
   unsigned VAR_6 = 0;
   struct config_array_setting *VAR_7 = (struct config_array_setting*)FUNC_1(1, (*VAR_5 + 1) * sizeof(struct config_array_setting));

   if (!VAR_7)
      return ((void*)0);


   FUNC_0("video_driver", VAR_4->arrays.video_driver, 0, ((void*)0), 1);
   FUNC_0("record_driver", VAR_4->arrays.record_driver, 0, ((void*)0), 1);
   FUNC_0("camera_driver", VAR_4->arrays.camera_driver, 0, ((void*)0), 1);
   FUNC_0("wifi_driver", VAR_4->arrays.wifi_driver, 0, ((void*)0), 1);
   FUNC_0("location_driver", VAR_4->arrays.location_driver,0, ((void*)0), 1);



   FUNC_0("audio_device", VAR_4->arrays.audio_device, 0, ((void*)0), 1);
   FUNC_0("camera_device", VAR_4->arrays.camera_device, 0, ((void*)0), 1);





   FUNC_0("video_context_driver", VAR_4->arrays.video_context_driver, 0, ((void*)0), 1);
   FUNC_0("audio_driver", VAR_4->arrays.audio_driver, 0, ((void*)0), 1);
   FUNC_0("audio_resampler", VAR_4->arrays.audio_resampler, 0, ((void*)0), 1);
   FUNC_0("input_driver", VAR_4->arrays.input_driver, 0, ((void*)0), 1);
   FUNC_0("input_joypad_driver", VAR_4->arrays.input_joypad_driver, 0, ((void*)0), 1);
   FUNC_0("input_keyboard_layout", VAR_4->arrays.input_keyboard_layout, 0, ((void*)0), 1);
   FUNC_0("bundle_assets_src_path", VAR_4->arrays.bundle_assets_src, 0, ((void*)0), 1);
   FUNC_0("bundle_assets_dst_path", VAR_4->arrays.bundle_assets_dst, 0, ((void*)0), 1);
   FUNC_0("bundle_assets_dst_path_subdir", VAR_4->arrays.bundle_assets_dst_subdir, 0, ((void*)0), 1);
   FUNC_0("led_driver", VAR_4->arrays.led_driver, 0, ((void*)0), 1);
   FUNC_0("netplay_mitm_server", VAR_4->arrays.netplay_mitm_server, 0, ((void*)0), 1);
   FUNC_0("midi_driver", VAR_4->arrays.midi_driver, 0, ((void*)0), 1);
   FUNC_0("midi_input", VAR_4->arrays.midi_input, 1, VAR_2, 1);
   FUNC_0("midi_output", VAR_4->arrays.midi_output, 1, VAR_3, 1);
   FUNC_0("youtube_stream_key", VAR_4->arrays.youtube_stream_key, 1, ((void*)0), 1);
   FUNC_0("twitch_stream_key", VAR_4->arrays.twitch_stream_key, 1, ((void*)0), 1);
   FUNC_0("discord_app_id", VAR_4->arrays.discord_app_id, 1, VAR_1, 1);
   FUNC_0("ai_service_url", VAR_4->arrays.ai_service_url, 1, VAR_0, 1);

   *VAR_5 = VAR_6;

   return VAR_7;
}
