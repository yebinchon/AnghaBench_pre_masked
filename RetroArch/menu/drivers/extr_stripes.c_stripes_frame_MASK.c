
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_30__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_10__ ;


struct TYPE_38__ {unsigned int width; unsigned int height; scalar_t__ xmb_alpha_factor; } ;
typedef TYPE_5__ video_frame_info_t ;
struct TYPE_39__ {double width; float alpha; uintptr_t icon; float x; double y; float zoom; } ;
typedef TYPE_6__ stripes_node_t ;
struct TYPE_33__ {int * list; } ;
struct TYPE_36__ {scalar_t__ vertices; } ;
struct TYPE_37__ {TYPE_3__ coords; } ;
struct TYPE_35__ {TYPE_4__ carr; } ;
struct TYPE_40__ {int icon_spacing_horizontal; int icon_size; float alpha; unsigned int system_tab_end; double categories_x_pos; double categories_angle; TYPE_1__ textures; int cursor_size; scalar_t__ mouse_show; int * box_message; int font2; int font; int shadow_offset; TYPE_30__ raster_block2; TYPE_30__ raster_block; } ;
typedef TYPE_7__ stripes_handle_t ;
struct TYPE_34__ {float menu_scale_factor; } ;
struct TYPE_41__ {TYPE_2__ floats; } ;
typedef TYPE_8__ settings_t ;
typedef int msg ;
struct TYPE_42__ {int y; int x; } ;
typedef TYPE_9__ menu_input_pointer_t ;
struct TYPE_32__ {float rotation; int scale_x; int scale_y; int scale_z; int scale_enable; int * matrix; } ;
typedef TYPE_10__ menu_display_ctx_rotate_draw_t ;
typedef int math_matrix_4x4 ;
typedef int file_list_t ;


 int FUNC_0 (double,double,double,float*) ;
 int VAR_0 ;
 float FUNC_1 (float,float) ;
 size_t VAR_1 ;
 TYPE_8__* FUNC_2 () ;
 int FUNC_3 (int ,TYPE_30__*) ;
 int FUNC_4 (unsigned int,unsigned int,int ,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,scalar_t__*,int ,int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_5__*,double,int ,double,int ,double,unsigned int,double,unsigned int,unsigned int,unsigned int,float*) ;
 int FUNC_10 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_11 (scalar_t__*,float) ;
 int FUNC_12 (unsigned int,unsigned int) ;
 char* FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 char* FUNC_15 () ;
 int FUNC_16 (TYPE_9__*) ;
 size_t FUNC_17 () ;
 int FUNC_18 (char*,int,char*,char const*,char const*) ;
 int FUNC_19 (int *) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_20 (TYPE_7__*,TYPE_5__*,unsigned int,unsigned int) ;
 int FUNC_21 (TYPE_7__*,TYPE_5__*,unsigned int,unsigned int) ;
 int FUNC_22 (TYPE_5__*,double,int *,uintptr_t,float,float,unsigned int,unsigned int,double,float,float,scalar_t__*,int ) ;
 TYPE_6__* FUNC_23 (TYPE_7__*,unsigned int) ;
 scalar_t__* VAR_4 ;
 unsigned int FUNC_24 (TYPE_7__*,int ) ;
 int FUNC_25 (TYPE_5__*,TYPE_7__*,char*) ;
 int FUNC_26 (char*,int *,int) ;

__attribute__((used)) static void FUNC_27(void *VAR_5, video_frame_info_t *VAR_6)
{
   math_matrix_4x4 VAR_7;
   unsigned VAR_8;
   menu_display_ctx_rotate_draw_t VAR_9;
   char VAR_10[1024];
   char VAR_11[255];
   char VAR_12[255];
   size_t VAR_13 = 0;
   size_t VAR_14 = 0;
   const int VAR_15 = 50;
   bool VAR_16 = 0;
   file_list_t *VAR_17 = ((void*)0);
   unsigned VAR_18 = VAR_6->width;
   unsigned VAR_19 = VAR_6->height;
   const float VAR_20 = 0.96;
   float VAR_21 = 0.0f;
   float VAR_22 = 0.0f;
   float VAR_23 = 285;
   stripes_handle_t *VAR_24 = (stripes_handle_t*)VAR_5;
   settings_t *VAR_25 = FUNC_2();

   if (!VAR_24)
      return;

   VAR_21 = (VAR_25->floats.menu_scale_factor * (float)VAR_18) / 1920.0f;
   VAR_22 = VAR_24->icon_spacing_horizontal * 4 - VAR_24->icon_size / 4;

   VAR_10[0] = '\0';
   VAR_11[0] = '\0';
   VAR_12[0] = '\0';

   FUNC_3(VAR_24->font, &VAR_24->raster_block);
   FUNC_3(VAR_24->font2, &VAR_24->raster_block2);

   VAR_24->raster_block.carr.coords.vertices = 0;
   VAR_24->raster_block2.carr.coords.vertices = 0;

   FUNC_11(VAR_2, FUNC_1(
         (float)VAR_6->xmb_alpha_factor/100, VAR_24->alpha));
   FUNC_11(VAR_3, VAR_24->alpha);

   FUNC_20(
         VAR_24,
         VAR_6,
         VAR_18,
         VAR_19);

   VAR_13 = FUNC_17();

   VAR_9.matrix = &VAR_7;
   VAR_9.rotation = 0;
   VAR_9.scale_x = 1;
   VAR_9.scale_y = 1;
   VAR_9.scale_z = 1;
   VAR_9.scale_enable = 1;

   FUNC_10(&VAR_9, VAR_6);
   FUNC_6(VAR_6);


   for (VAR_8 = 0; VAR_8 <= FUNC_24(VAR_24, VAR_0)
      + VAR_24->system_tab_end; VAR_8++)
   {
      stripes_node_t *VAR_26 = FUNC_23(VAR_24, VAR_8);

      if (!VAR_26)
         continue;

      float VAR_27[3];
      FUNC_0(0.07*(float)VAR_8,0.5,0.5, &VAR_27[0]) ;
      float VAR_28[16] = {
         VAR_27[0], VAR_27[1], VAR_27[2], 0.55,
         VAR_27[0], VAR_27[1], VAR_27[2], 0.55,
         VAR_27[0], VAR_27[1], VAR_27[2], 0.55,
         VAR_27[0], VAR_27[1], VAR_27[2], 0.55,
      };

      FUNC_9(
            VAR_6,
            VAR_24->categories_x_pos + VAR_23,
            0,
            VAR_24->categories_x_pos + VAR_23 + VAR_26->width,
            0,
            VAR_24->categories_x_pos + VAR_23 + VAR_24->categories_angle,
            VAR_6->height,
            VAR_24->categories_x_pos + VAR_23 + VAR_24->categories_angle + VAR_26->width,
            VAR_6->height,
            VAR_6->width, VAR_6->height,
            &VAR_28[0]);

      FUNC_6(VAR_6);

      VAR_23 += VAR_26->width;
   }

   VAR_23 = 285;


   for (VAR_8 = 0; VAR_8 <= FUNC_24(VAR_24, VAR_0)
      + VAR_24->system_tab_end; VAR_8++)
   {
      stripes_node_t *VAR_29 = FUNC_23(VAR_24, VAR_8);

      if (!VAR_29)
         continue;

      FUNC_11(VAR_4, FUNC_1(VAR_29->alpha, VAR_24->alpha));

      if (VAR_4[3] != 0)
      {
         menu_display_ctx_rotate_draw_t VAR_30;
         math_matrix_4x4 VAR_31;
         uintptr_t VAR_32 = VAR_29->icon;
         float VAR_33 = VAR_24->categories_x_pos + VAR_23 + VAR_29->x + VAR_29->width / 2.0
                                    - VAR_24->icon_size / 2.0;
         float VAR_34 = VAR_29->y + VAR_24->icon_size / 2.0;
         float VAR_35 = 0;
         float VAR_36 = VAR_29->zoom;

         VAR_30.matrix = &VAR_31;
         VAR_30.rotation = VAR_35;
         VAR_30.scale_x = VAR_36;
         VAR_30.scale_y = VAR_36;
         VAR_30.scale_z = 1;
         VAR_30.scale_enable = 1;

         FUNC_10(&VAR_30, VAR_6);

         FUNC_22(VAR_6,
               VAR_24->icon_size,
               &VAR_31,
               VAR_32,
               VAR_33,
               VAR_34,
               VAR_18,
               VAR_19,
               1.0,
               VAR_35,
               VAR_36,
               &VAR_4[0],
               VAR_24->shadow_offset);
      }

      VAR_23 += VAR_29->width;
   }

   FUNC_7(VAR_6);
   FUNC_4(VAR_6->width, VAR_6->height, VAR_24->font,
         VAR_6);
   FUNC_3(VAR_24->font, ((void*)0));

   FUNC_4(VAR_6->width, VAR_6->height, VAR_24->font2,
         VAR_6);
   FUNC_3(VAR_24->font2, ((void*)0));

   if (FUNC_14())
   {
      const char *VAR_37 = FUNC_13();
      const char *VAR_38 = FUNC_15();

      FUNC_18(VAR_10, sizeof(VAR_10), "%s\n%s", VAR_38, VAR_37);
      VAR_16 = 1;
   }

   if (!FUNC_19(VAR_24->box_message))
   {
      FUNC_26(VAR_10, VAR_24->box_message,
            sizeof(VAR_10));
      FUNC_5(VAR_24->box_message);
      VAR_24->box_message = ((void*)0);
      VAR_16 = 1;
   }

   if (VAR_16)
   {
      FUNC_21(VAR_24, VAR_6, VAR_18, VAR_19);
      FUNC_25(
            VAR_6, VAR_24, VAR_10);
   }


   if (VAR_24->mouse_show)
   {
      menu_input_pointer_t VAR_39;
      FUNC_16(&VAR_39);

      FUNC_11(VAR_3, FUNC_1(VAR_24->alpha, 1.00f));
      FUNC_8(
            VAR_6,
            &VAR_3[0],
            VAR_24->cursor_size,
            VAR_24->textures.list[VAR_1],
            VAR_39.x,
            VAR_39.y,
            VAR_18,
            VAR_19);
   }

   FUNC_12(VAR_6->width, VAR_6->height);
}
