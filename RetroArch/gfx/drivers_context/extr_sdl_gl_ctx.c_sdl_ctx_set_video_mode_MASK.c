
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int monitor_index; scalar_t__ windowed_fullscreen; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_5__ {unsigned int g_new_width; unsigned int g_new_height; int g_full; unsigned int g_width; unsigned int g_height; scalar_t__ g_ctx; scalar_t__ g_win; } ;
typedef TYPE_2__ gfx_ctx_sdl_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int ,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,int ,unsigned int) ;
 int FUNC_5 (scalar_t__,unsigned int) ;
 int FUNC_6 (scalar_t__,unsigned int,unsigned int) ;
 int FUNC_7 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static bool FUNC_10(void *VAR_8,
      video_frame_info_t *VAR_9,
      unsigned VAR_10, unsigned VAR_11,
      bool VAR_12)
{
   unsigned VAR_13 = 0;
   gfx_ctx_sdl_data_t *VAR_14 = (gfx_ctx_sdl_data_t*)VAR_8;

   VAR_14->g_new_width = VAR_10;
   VAR_14->g_new_height = VAR_11;
   if (VAR_12)
      VAR_13 = VAR_3;

   VAR_14->g_win = FUNC_4(VAR_10, VAR_11, 0, VAR_4 | VAR_13);


   if (!VAR_14->g_win)
      goto error;
   VAR_14->g_full = VAR_12;
   VAR_14->g_width = VAR_10;
   VAR_14->g_height = VAR_11;

   return 1;

error:
   FUNC_0("[SDL_GL]: Failed to set video mode: %s\n", FUNC_3());
   return 0;
}
