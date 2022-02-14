
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct font_atlas {int height; int width; int buffer; } ;
struct TYPE_12__ {int video_msg_color_r; int video_msg_color_g; int video_msg_color_b; } ;
struct TYPE_11__ {int video_font_enable; } ;
struct TYPE_14__ {TYPE_2__ floats; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_13__ {int active; int tex; int h; int w; } ;
struct TYPE_15__ {int font_r; int font_g; int font_b; TYPE_3__ font; int renderer; int font_data; TYPE_8__* font_driver; } ;
typedef TYPE_5__ sdl2_video_t ;
struct TYPE_17__ {struct font_atlas* (* get_atlas ) (int ) ;} ;
struct TYPE_16__ {int r; int g; int b; int a; } ;
typedef int SDL_Surface ;
typedef int SDL_Palette ;
typedef TYPE_6__ SDL_Color ;


 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int * FUNC_2 (int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,TYPE_6__*,int ,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int VAR_1 ;
 TYPE_4__* FUNC_11 () ;
 int FUNC_12 (TYPE_8__**,int *,char const*,unsigned int) ;
 struct font_atlas* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(sdl2_video_t *VAR_2, const char *VAR_3,
                          unsigned VAR_4)
{
   int VAR_5, VAR_6, VAR_7, VAR_8;
   SDL_Color VAR_9[256];
   SDL_Surface *VAR_10 = ((void*)0);
   SDL_Palette *VAR_11 = ((void*)0);
   const struct font_atlas *VAR_12 = ((void*)0);
   settings_t *VAR_13 = FUNC_11();

   if (!VAR_13->bools.video_font_enable)
      return;

   if (!FUNC_12(
            &VAR_2->font_driver, &VAR_2->font_data,
            *VAR_3 ? VAR_3 : ((void*)0), VAR_4))
   {
      FUNC_0("[SDL]: Could not initialize fonts.\n");
      return;
   }

   VAR_6 = VAR_13->floats.video_msg_color_r * 255;
   VAR_7 = VAR_13->floats.video_msg_color_g * 255;
   VAR_8 = VAR_13->floats.video_msg_color_b * 255;

   VAR_6 = (VAR_6 < 0) ? 0 : (VAR_6 > 255 ? 255 : VAR_6);
   VAR_7 = (VAR_7 < 0) ? 0 : (VAR_7 > 255 ? 255 : VAR_7);
   VAR_8 = (VAR_8 < 0) ? 0 : (VAR_8 > 255 ? 255 : VAR_8);

   VAR_2->font_r = VAR_6;
   VAR_2->font_g = VAR_7;
   VAR_2->font_b = VAR_8;

   VAR_12 = VAR_2->font_driver->get_atlas(VAR_2->font_data);

   VAR_10 = FUNC_2(VAR_12->buffer, VAR_12->width,
         VAR_12->height, 8, VAR_12->width,
         0, 0, 0, 0);

   for (VAR_5 = 0; VAR_5 < 256; ++VAR_5)
   {
      VAR_9[VAR_5].r = VAR_9[VAR_5].g = VAR_9[VAR_5].b = VAR_5;
      VAR_9[VAR_5].a = 255;
   }

   VAR_11 = FUNC_1(256);
   FUNC_8(VAR_11, VAR_9, 0, 256);
   FUNC_9(VAR_10, VAR_11);
   FUNC_7(VAR_10, VAR_1, 0);

   VAR_2->font.tex = FUNC_3(VAR_2->renderer, VAR_10);

   if (VAR_2->font.tex)
   {
      VAR_2->font.w = VAR_12->width;
      VAR_2->font.h = VAR_12->height;
      VAR_2->font.active = 1;

      FUNC_10(VAR_2->font.tex, VAR_0);
   }
   else
      FUNC_0("[SDL]: Failed to initialize font texture: %s\n", FUNC_6());

   FUNC_4(VAR_11);
   FUNC_5(VAR_10);
}
