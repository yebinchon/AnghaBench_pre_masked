
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_60__ TYPE_9__ ;
typedef struct TYPE_59__ TYPE_8__ ;
typedef struct TYPE_58__ TYPE_7__ ;
typedef struct TYPE_57__ TYPE_6__ ;
typedef struct TYPE_56__ TYPE_5__ ;
typedef struct TYPE_55__ TYPE_4__ ;
typedef struct TYPE_54__ TYPE_42__ ;
typedef struct TYPE_53__ TYPE_3__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_1__ ;
typedef struct TYPE_50__ TYPE_16__ ;
typedef struct TYPE_49__ TYPE_15__ ;
typedef struct TYPE_48__ TYPE_14__ ;
typedef struct TYPE_47__ TYPE_13__ ;
typedef struct TYPE_46__ TYPE_12__ ;
typedef struct TYPE_45__ TYPE_11__ ;
typedef struct TYPE_44__ TYPE_10__ ;


struct TYPE_48__ {unsigned int width; unsigned int height; scalar_t__ materialui_color_theme; } ;
typedef TYPE_14__ video_frame_info_t ;
struct TYPE_60__ {scalar_t__ menu_ticker_type; } ;
struct TYPE_57__ {scalar_t__ menu_ticker_smooth; } ;
struct TYPE_49__ {TYPE_9__ uints; TYPE_6__ bools; } ;
typedef TYPE_15__ settings_t ;
typedef int msg ;
struct TYPE_55__ {scalar_t__ vertices; } ;
struct TYPE_56__ {TYPE_4__ coords; } ;
struct TYPE_54__ {TYPE_5__ carr; } ;
struct TYPE_46__ {int font; TYPE_42__ raster_block; } ;
struct TYPE_45__ {int font; TYPE_42__ raster_block; } ;
struct TYPE_53__ {int font; TYPE_42__ raster_block; } ;
struct TYPE_47__ {TYPE_12__ hint; TYPE_11__ list; TYPE_3__ title; } ;
struct TYPE_52__ {scalar_t__ type; int y; int x; } ;
struct TYPE_51__ {int * list; } ;
struct TYPE_44__ {int screen_fade; int list_highlighted_background; } ;
struct TYPE_59__ {int type_enum; int idx; } ;
struct TYPE_58__ {int type_enum; int idx; } ;
struct TYPE_50__ {scalar_t__ color_theme; float transition_x_offset; char* msgbox; TYPE_13__ font_data; TYPE_2__ pointer; TYPE_1__ textures; int cursor_size; scalar_t__ mouse_show; TYPE_10__ colors; scalar_t__ nav_bar_layout_width; TYPE_8__ ticker; TYPE_7__ ticker_smooth; scalar_t__ use_smooth_ticker; } ;
typedef TYPE_16__ materialui_handle_t ;
typedef enum menu_animation_ticker_type { ____Placeholder_menu_animation_ticker_type } menu_animation_ticker_type ;
typedef enum materialui_color_theme { ____Placeholder_materialui_color_theme } materialui_color_theme ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_15__* FUNC_0 () ;
 int FUNC_1 (int ,TYPE_42__*) ;
 int FUNC_2 (unsigned int,unsigned int,int ,TYPE_14__*) ;
 int FUNC_3 (TYPE_16__*) ;
 int FUNC_4 (TYPE_16__*) ;
 int FUNC_5 (TYPE_16__*,int) ;
 int FUNC_6 (TYPE_16__*,TYPE_14__*) ;
 int FUNC_7 (TYPE_16__*,TYPE_14__*,unsigned int,unsigned int,unsigned int,int,size_t) ;
 int FUNC_8 (TYPE_16__*,TYPE_14__*,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_16__*,TYPE_14__*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_10 (TYPE_16__*,TYPE_14__*,unsigned int,unsigned int,int) ;
 int FUNC_11 (TYPE_16__*,TYPE_14__*,unsigned int,char*) ;
 int FUNC_12 (TYPE_16__*,TYPE_14__*,unsigned int,unsigned int) ;
 int FUNC_13 (TYPE_16__*,TYPE_14__*,unsigned int,unsigned int,unsigned int,int,size_t,int ) ;
 int FUNC_14 (TYPE_16__*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_14__*,float*,int ,int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_18 (int ,int ,TYPE_14__*,int ,int ,int) ;
 int FUNC_19 (TYPE_14__*,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_20 () ;
 int FUNC_21 (unsigned int,unsigned int) ;
 int FUNC_22 (unsigned int,unsigned int) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 char* FUNC_25 () ;
 scalar_t__ FUNC_26 () ;
 char* FUNC_27 () ;
 size_t FUNC_28 () ;
 int FUNC_29 (char*,int,char*,char const*,char const*) ;
 int FUNC_30 (char*) ;

__attribute__((used)) static void FUNC_31(void *VAR_3, video_frame_info_t *VAR_4)
{
   materialui_handle_t *VAR_5 = (materialui_handle_t*)VAR_3;
   settings_t *VAR_6 = FUNC_0();
   unsigned VAR_7 = VAR_4->width;
   unsigned VAR_8 = VAR_4->height;
   unsigned VAR_9 = FUNC_20();
   size_t VAR_10 = FUNC_28();
   int VAR_11;

   if (!VAR_5 || !VAR_6)
      return;

   FUNC_21(VAR_7, VAR_8);


   FUNC_1(VAR_5->font_data.title.font, &VAR_5->font_data.title.raster_block);
   FUNC_1(VAR_5->font_data.list.font, &VAR_5->font_data.list.raster_block);
   FUNC_1(VAR_5->font_data.hint.font, &VAR_5->font_data.hint.raster_block);

   VAR_5->font_data.title.raster_block.carr.coords.vertices = 0;
   VAR_5->font_data.list.raster_block.carr.coords.vertices = 0;
   VAR_5->font_data.hint.raster_block.carr.coords.vertices = 0;


   if (VAR_5->color_theme != VAR_4->materialui_color_theme)
   {
      FUNC_5(VAR_5, (enum materialui_color_theme)VAR_4->materialui_color_theme);
      VAR_5->color_theme = (enum materialui_color_theme)VAR_4->materialui_color_theme;
   }


   VAR_5->use_smooth_ticker = VAR_6->bools.menu_ticker_smooth;

   if (VAR_5->use_smooth_ticker)
   {
      VAR_5->ticker_smooth.idx = FUNC_16();
      VAR_5->ticker_smooth.type_enum = (enum menu_animation_ticker_type)VAR_6->uints.menu_ticker_type;
   }
   else
   {
      VAR_5->ticker.idx = FUNC_15();
      VAR_5->ticker.type_enum = (enum menu_animation_ticker_type)VAR_6->uints.menu_ticker_type;
   }



   FUNC_4(VAR_5);



   VAR_11 = (int)(VAR_5->transition_x_offset * (float)((int)VAR_7 - (int)VAR_5->nav_bar_layout_width));


   FUNC_6(VAR_5, VAR_4);




   FUNC_9(
         VAR_5, VAR_4, VAR_7, VAR_8, VAR_9, VAR_11);


   FUNC_13(
         VAR_5, VAR_4, VAR_7, VAR_8, VAR_9, VAR_11, VAR_10,
         VAR_5->colors.list_highlighted_background);


   FUNC_7(
         VAR_5, VAR_4, VAR_7, VAR_8, VAR_9, VAR_11, VAR_10);
   FUNC_14(VAR_5, VAR_7, VAR_8, VAR_9, VAR_11);
   FUNC_10(VAR_5, VAR_4, VAR_7, VAR_8, VAR_11);



   FUNC_2(VAR_7, VAR_8, VAR_5->font_data.list.font, VAR_4);
   FUNC_2(VAR_7, VAR_8, VAR_5->font_data.hint.font, VAR_4);

   VAR_5->font_data.list.raster_block.carr.coords.vertices = 0;
   VAR_5->font_data.hint.raster_block.carr.coords.vertices = 0;


   FUNC_8(VAR_5, VAR_4, VAR_7, VAR_8);


   FUNC_12(VAR_5, VAR_4, VAR_7, VAR_8);



   FUNC_2(VAR_7, VAR_8, VAR_5->font_data.title.font, VAR_4);
   FUNC_2(VAR_7, VAR_8, VAR_5->font_data.hint.font, VAR_4);

   VAR_5->font_data.title.raster_block.carr.coords.vertices = 0;
   VAR_5->font_data.hint.raster_block.carr.coords.vertices = 0;


   if (FUNC_26())
   {
      char VAR_12[255];
      const char *VAR_13 = FUNC_25();
      const char *VAR_14 = FUNC_27();

      VAR_12[0] = '\0';


      FUNC_19(VAR_4,
            0, 0, VAR_7, VAR_8, VAR_7, VAR_8, VAR_5->colors.screen_fade);


      FUNC_29(VAR_12, sizeof(VAR_12), "%s\n%s", VAR_14, VAR_13);
      FUNC_11(VAR_5, VAR_4, VAR_8 / 4, VAR_12);


      FUNC_18(
            VAR_5->textures.list[VAR_1],
            VAR_5->font_data.list.font,
            VAR_4,
            FUNC_23(), FUNC_24(),
            0xFFFFFFFF);



      FUNC_2(VAR_7, VAR_8, VAR_5->font_data.list.font, VAR_4);
      VAR_5->font_data.list.raster_block.carr.coords.vertices = 0;
   }


   if (!FUNC_30(VAR_5->msgbox))
   {

      FUNC_19(VAR_4,
            0, 0, VAR_7, VAR_8, VAR_7, VAR_8, VAR_5->colors.screen_fade);


      FUNC_11(VAR_5, VAR_4, VAR_8 / 2, VAR_5->msgbox);
      VAR_5->msgbox[0] = '\0';



      FUNC_2(VAR_7, VAR_8, VAR_5->font_data.list.font, VAR_4);
      VAR_5->font_data.list.raster_block.carr.coords.vertices = 0;
   }


   if (VAR_5->mouse_show && (VAR_5->pointer.type != VAR_0))
   {
      float VAR_15[16] = {
         1.0f, 1.0f, 1.0f, 1.0f,
         1.0f, 1.0f, 1.0f, 1.0f,
         1.0f, 1.0f, 1.0f, 1.0f,
         1.0f, 1.0f, 1.0f, 1.0f
      };

      FUNC_17(
            VAR_4,
            VAR_15,
            VAR_5->cursor_size,
            VAR_5->textures.list[VAR_2],
            VAR_5->pointer.x,
            VAR_5->pointer.y,
            VAR_7,
            VAR_8);
   }



   FUNC_3(VAR_5);


   FUNC_1(VAR_5->font_data.title.font, ((void*)0));
   FUNC_1(VAR_5->font_data.list.font, ((void*)0));
   FUNC_1(VAR_5->font_data.hint.font, ((void*)0));

   FUNC_22(VAR_7, VAR_8);
}
