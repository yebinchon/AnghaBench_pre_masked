
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned int width; unsigned int height; float font_msg_pos_x; float font_msg_pos_y; float font_msg_color_r; float font_msg_color_g; float font_msg_color_b; } ;
typedef TYPE_3__ video_frame_info_t ;
struct string_list {unsigned int size; TYPE_1__* elems; } ;
struct font_params {float x; float y; int drop_x; int drop_y; float drop_mod; float drop_alpha; float scale; unsigned int text_align; int color; } ;
struct TYPE_11__ {TYPE_2__* gdi; } ;
typedef TYPE_4__ gdi_raster_t ;
struct TYPE_12__ {int cx; unsigned int cy; int member_0; } ;
struct TYPE_9__ {scalar_t__ bmp_old; int memDC; scalar_t__ bmp; } ;
struct TYPE_8__ {int data; } ;
typedef TYPE_5__ SIZE ;
typedef scalar_t__ HBITMAP ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int,TYPE_5__*) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;



 int VAR_0 ;
 int FUNC_8 (int ,unsigned int,unsigned int,int ,int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (struct string_list*) ;
 struct string_list* FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(
      video_frame_info_t *VAR_1,
      void *VAR_2, const char *VAR_3,
      const struct font_params *VAR_4)
{
   float VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
   int VAR_10, VAR_11, VAR_12;
   unsigned VAR_13;
   unsigned VAR_14, VAR_15, VAR_16, VAR_17;
   unsigned VAR_18;
   unsigned VAR_19, VAR_20, VAR_21;
   unsigned VAR_22, VAR_23, VAR_24;
   gdi_raster_t *VAR_25 = (gdi_raster_t*)VAR_2;
   unsigned VAR_26 = VAR_1->width;
   unsigned VAR_27 = VAR_1->height;
   SIZE VAR_28 = {0};
   struct string_list *VAR_29 = ((void*)0);

   if (!VAR_25 || FUNC_9(VAR_3) || !VAR_25->gdi)
      return;

   if (VAR_4)
   {
      VAR_5 = VAR_4->x;
      VAR_6 = VAR_4->y;
      VAR_10 = VAR_4->drop_x;
      VAR_11 = VAR_4->drop_y;
      VAR_8 = VAR_4->drop_mod;
      VAR_9 = VAR_4->drop_alpha;
      VAR_7 = VAR_4->scale;
      VAR_18 = VAR_4->text_align;

      VAR_19 = FUNC_2(VAR_4->color);
      VAR_20 = FUNC_1(VAR_4->color);
      VAR_21 = FUNC_0(VAR_4->color);
   }
   else
   {
      VAR_5 = VAR_1->font_msg_pos_x;
      VAR_6 = VAR_1->font_msg_pos_y;
      VAR_10 = -2;
      VAR_11 = -2;
      VAR_8 = 0.3f;
      VAR_9 = 1.0f;
      VAR_7 = 1.0f;
      VAR_18 = 129;
      VAR_19 = VAR_1->font_msg_color_r * 255.0f;
      VAR_20 = VAR_1->font_msg_color_g * 255.0f;
      VAR_21 = VAR_1->font_msg_color_b * 255.0f;
   }

   VAR_12 = FUNC_12(VAR_3);

   FUNC_3(VAR_25->gdi->memDC, VAR_3, VAR_12, &VAR_28);

   switch (VAR_18)
   {
      case 129:
         VAR_14 = VAR_5 * VAR_26 * VAR_7;
         VAR_16 = VAR_10 * VAR_26 * VAR_7;
         break;
      case 128:
         VAR_14 = (VAR_5 * VAR_26 * VAR_7) - VAR_28.cx;
         VAR_16 = (VAR_10 * VAR_26 * VAR_7) - VAR_28.cx;
         break;
      case 130:
         VAR_14 = (VAR_5 * VAR_26 * VAR_7) - (VAR_28.cx / 2);
         VAR_16 = (VAR_10 * VAR_26 * VAR_7) - (VAR_28.cx / 2);
         break;
      default:
         VAR_14 = 0;
         VAR_16 = 0;
         break;
   }

   VAR_15 = VAR_27 - (VAR_6 * VAR_27 * VAR_7) - VAR_28.cy;
   VAR_17 = VAR_27 - (VAR_11 * VAR_27 * VAR_7) - VAR_28.cy;

   VAR_25->gdi->bmp_old = (HBITMAP)FUNC_5(VAR_25->gdi->memDC, VAR_25->gdi->bmp);

   FUNC_6(VAR_25->gdi->memDC, VAR_0);

   VAR_29 = FUNC_11(VAR_3, "\n");

   if (VAR_10 || VAR_11)
   {
      float VAR_30 = VAR_9;
      VAR_22 = VAR_19 * VAR_8 * VAR_30;
      VAR_23 = VAR_20 * VAR_8 * VAR_30;
      VAR_24 = VAR_21 * VAR_8 * VAR_30;

      FUNC_7(VAR_25->gdi->memDC, FUNC_4(VAR_22, VAR_23, VAR_24));

      if (VAR_29)
      {
         for (VAR_13 = 0; VAR_13 < VAR_29->size; VAR_13++)
            FUNC_8(VAR_25->gdi->memDC, VAR_16, VAR_17 + (VAR_28.cy * VAR_13), VAR_29->elems[VAR_13].data, FUNC_13(VAR_29->elems[VAR_13].data));
      }
   }

   FUNC_7(VAR_25->gdi->memDC, FUNC_4(VAR_19, VAR_20, VAR_21));

   if (VAR_29)
   {
      for (VAR_13 = 0; VAR_13 < VAR_29->size; VAR_13++)
         FUNC_8(VAR_25->gdi->memDC, VAR_14, VAR_15 + (VAR_28.cy * VAR_13), VAR_29->elems[VAR_13].data, FUNC_13(VAR_29->elems[VAR_13].data));

      FUNC_10(VAR_29);
   }

   FUNC_5(VAR_25->gdi->memDC, VAR_25->gdi->bmp_old);
}
