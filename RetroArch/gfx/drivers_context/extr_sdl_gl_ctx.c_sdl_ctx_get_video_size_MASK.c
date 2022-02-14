
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int video_monitor_index; } ;
struct TYPE_10__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {unsigned int g_width; unsigned int g_height; int g_win; } ;
typedef TYPE_3__ gfx_ctx_sdl_data_t ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_12__ {unsigned int w; unsigned int h; int member_0; } ;
typedef TYPE_4__ SDL_Rect ;
typedef TYPE_5__ SDL_DisplayMode ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,TYPE_5__*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_4__** FUNC_3 (int *,int) ;
 TYPE_2__* FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_2,
      unsigned *VAR_3, unsigned *VAR_4)
{
   settings_t *VAR_5 = FUNC_4();
   gfx_ctx_sdl_data_t *VAR_6 = (gfx_ctx_sdl_data_t*)VAR_2;

   if (!VAR_6)
      return;

   *VAR_3 = VAR_6->g_width;
   *VAR_4 = VAR_6->g_height;

   if (!VAR_6->g_win)
   {
      SDL_Rect **VAR_7 = FUNC_3(((void*)0), VAR_0|VAR_1);
      SDL_Rect VAR_8 = {0};

      if (!VAR_7)
         FUNC_0("[SDL_GL]: Failed to detect available video modes: %s\n",
                    FUNC_2());
      else if (*VAR_7)
         VAR_8 = **VAR_7;


      *VAR_3 = VAR_8.w;
      *VAR_4 = VAR_8.h;
   }
}
