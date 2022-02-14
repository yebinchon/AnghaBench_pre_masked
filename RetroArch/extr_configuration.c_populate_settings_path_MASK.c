
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct config_path_setting {int dummy; } ;
struct TYPE_8__ {int log_dir; int directory_screenshot; int directory_video_layout; int directory_overlay; int directory_menu_config; int directory_menu_content; int directory_audio_filter; int directory_autoconfig; int directory_runtime_log; int directory_playlist; int directory_thumbnails; int directory_dynamic_wallpapers; int directory_assets; int directory_core_assets; int directory_video_filter; int directory_video_shader; int directory_resampler; int directory_input_remapping; int directory_cache; int directory_system; int directory_content_history; int directory_cursor; int path_font; int path_stream_url; int path_stream_config; int path_record_config; int path_video_layout; int path_overlay; int path_content_image_history; int path_content_video_history; int path_content_music_history; int path_content_favorites; int path_content_history; int path_rgui_theme_preset; int path_menu_wallpaper; int path_cheat_database; int path_content_database; int path_libretro_info; int path_core_options; int directory_libretro; int netplay_spectate_password; int netplay_password; int netplay_server; int network_buildbot_assets_url; int network_buildbot_url; int path_audio_dsp_plugin; int path_softfilter_plugin; int username; int kiosk_mode_password; int menu_content_show_settings_password; int path_menu_xmb_font; } ;
struct TYPE_9__ {TYPE_2__ paths; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_7__ {int config_dir; int output_dir; } ;
struct TYPE_10__ {TYPE_1__ record; } ;
typedef TYPE_4__ global_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int *,int) ;
 int FUNC_1 (char*,int ,int,int *,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct config_path_setting *FUNC_6(settings_t *VAR_3, int *VAR_4)
{
   unsigned VAR_5 = 0;
   struct config_path_setting *VAR_6 = (struct config_path_setting*)FUNC_2(1, (*VAR_4 + 1) * sizeof(struct config_path_setting));

   if (!VAR_6)
      return ((void*)0);





   FUNC_1("content_show_settings_password", VAR_3->paths.menu_content_show_settings_password, 0, ((void*)0), 1);
   FUNC_1("kiosk_mode_password", VAR_3->paths.kiosk_mode_password, 0, ((void*)0), 1);
   FUNC_1("netplay_nickname", VAR_3->paths.username, 0, ((void*)0), 1);
   FUNC_1("video_filter", VAR_3->paths.path_softfilter_plugin, 0, ((void*)0), 1);
   FUNC_1("audio_dsp_plugin", VAR_3->paths.path_audio_dsp_plugin, 0, ((void*)0), 1);
   FUNC_1("core_updater_buildbot_cores_url", VAR_3->paths.network_buildbot_url, 0, ((void*)0), 1);
   FUNC_1("core_updater_buildbot_assets_url", VAR_3->paths.network_buildbot_assets_url, 0, ((void*)0), 1);





   FUNC_1("libretro_directory",
         VAR_3->paths.directory_libretro, 0, ((void*)0), 0);
   FUNC_1("core_options_path",
         VAR_3->paths.path_core_options, 0, ((void*)0), 1);
   FUNC_1("libretro_info_path",
         VAR_3->paths.path_libretro_info, 0, ((void*)0), 1);
   FUNC_1("content_database_path",
         VAR_3->paths.path_content_database, 0, ((void*)0), 1);
   FUNC_1("cheat_database_path",
         VAR_3->paths.path_cheat_database, 0, ((void*)0), 1);






   FUNC_1("content_history_path",
         VAR_3->paths.path_content_history, 0, ((void*)0), 1);
   FUNC_1("content_favorites_path",
         VAR_3->paths.path_content_favorites, 0, ((void*)0), 1);
   FUNC_1("content_music_history_path",
         VAR_3->paths.path_content_music_history, 0, ((void*)0), 1);
   FUNC_1("content_video_history_path",
         VAR_3->paths.path_content_video_history, 0, ((void*)0), 1);
   FUNC_1("content_image_history_path",
         VAR_3->paths.path_content_image_history, 0, ((void*)0), 1);
   FUNC_1("video_record_config",
         VAR_3->paths.path_record_config, 0, ((void*)0), 1);
   FUNC_1("video_stream_config",
         VAR_3->paths.path_stream_config, 0, ((void*)0), 1);
   FUNC_1("video_stream_url",
         VAR_3->paths.path_stream_url, 0, ((void*)0), 1);
   FUNC_1("video_font_path",
         VAR_3->paths.path_font, 0, ((void*)0), 1);
   FUNC_1("cursor_directory",
         VAR_3->paths.directory_cursor, 0, ((void*)0), 1);
   FUNC_1("content_history_dir",
         VAR_3->paths.directory_content_history, 0, ((void*)0), 1);
   FUNC_1("screenshot_directory",
         VAR_3->paths.directory_screenshot, 1, ((void*)0), 1);
   FUNC_1("system_directory",
         VAR_3->paths.directory_system, 1, ((void*)0), 1);
   FUNC_1("cache_directory",
         VAR_3->paths.directory_cache, 0, ((void*)0), 1);
   FUNC_1("input_remapping_directory",
         VAR_3->paths.directory_input_remapping, 0, ((void*)0), 1);
   FUNC_1("resampler_directory",
         VAR_3->paths.directory_resampler, 0, ((void*)0), 1);
   FUNC_1("video_shader_dir",
         VAR_3->paths.directory_video_shader, 1, ((void*)0), 1);
   FUNC_1("video_filter_dir",
         VAR_3->paths.directory_video_filter, 1, ((void*)0), 1);
   FUNC_1("core_assets_directory",
         VAR_3->paths.directory_core_assets, 1, ((void*)0), 1);
   FUNC_1("assets_directory",
         VAR_3->paths.directory_assets, 1, ((void*)0), 1);
   FUNC_1("dynamic_wallpapers_directory",
         VAR_3->paths.directory_dynamic_wallpapers, 1, ((void*)0), 1);
   FUNC_1("thumbnails_directory",
         VAR_3->paths.directory_thumbnails, 1, ((void*)0), 1);
   FUNC_1("playlist_directory",
         VAR_3->paths.directory_playlist, 1, ((void*)0), 1);
   FUNC_1("runtime_log_directory",
         VAR_3->paths.directory_runtime_log, 1, ((void*)0), 1);
   FUNC_1("joypad_autoconfig_dir",
         VAR_3->paths.directory_autoconfig, 0, ((void*)0), 1);
   FUNC_1("audio_filter_dir",
         VAR_3->paths.directory_audio_filter, 1, ((void*)0), 1);
   FUNC_1("savefile_directory",
         FUNC_3(VAR_0), 1, ((void*)0), 0);
   FUNC_1("savestate_directory",
         FUNC_3(VAR_1), 1, ((void*)0), 0);
   FUNC_1("libretro_path",
         FUNC_5(VAR_2), 0, ((void*)0), 0);

   FUNC_1(
         "screenshot_directory",
         VAR_3->paths.directory_screenshot, 1, ((void*)0), 0);

   {
      global_t *VAR_7 = FUNC_4();
      if (VAR_7)
      {
         FUNC_1("recording_output_directory",
               VAR_7->record.output_dir, 0, ((void*)0), 1);
         FUNC_1("recording_config_directory",
               VAR_7->record.config_dir, 0, ((void*)0), 1);
      }
   }

   FUNC_0("log_dir", VAR_3->paths.log_dir, 1, ((void*)0), 1);

   *VAR_4 = VAR_5;

   return VAR_6;
}
