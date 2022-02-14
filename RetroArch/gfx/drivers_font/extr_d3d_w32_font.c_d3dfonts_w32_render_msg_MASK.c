
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int width; unsigned int height; int font_msg_color_r; int font_msg_color_g; int font_msg_color_b; } ;
typedef TYPE_2__ video_frame_info_t ;
struct font_params {int text_align; unsigned int x; double y; int drop_x; int drop_y; float drop_mod; float drop_alpha; int color; } ;
struct TYPE_9__ {int ascent; int font; TYPE_1__* d3d; } ;
typedef TYPE_3__ d3dfonts_t ;
struct TYPE_10__ {unsigned int left; unsigned int right; int top; unsigned int bottom; } ;
struct TYPE_7__ {TYPE_4__ font_rect_shifted; TYPE_4__ font_rect; } ;
typedef TYPE_4__ RECT ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;



 int FUNC_5 (int ,int *,void*,int,TYPE_4__*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_6(video_frame_info_t *VAR_3,
      void *VAR_4, const char *VAR_5, const struct font_params *VAR_6)
{
   unsigned VAR_7;
   unsigned VAR_8, VAR_9, VAR_10, VAR_11;
   RECT VAR_12, VAR_13;
   RECT *VAR_14 = ((void*)0);
   RECT *VAR_15 = ((void*)0);
   d3dfonts_t *VAR_16 = (d3dfonts_t*)VAR_4;
   unsigned VAR_17 = VAR_3->width;
   unsigned VAR_18 = VAR_3->height;
   float VAR_19 = 0.3f;
   float VAR_20 = 1.0f;
   int VAR_21 = -2;
   int VAR_22 = -2;

   if (!VAR_16 || !VAR_16->d3d || !VAR_5)
      return;

   VAR_7 = VAR_1;
   VAR_15 = &VAR_16->d3d->font_rect;
   VAR_14 = &VAR_16->d3d->font_rect_shifted;

   if(VAR_6)
   {
      VAR_8 = FUNC_1(VAR_6->color);
      VAR_9 = FUNC_4(VAR_6->color);
      VAR_10 = FUNC_3(VAR_6->color);
      VAR_11 = FUNC_2(VAR_6->color);

      switch (VAR_6->text_align)
      {
         case 128:
            VAR_7 = VAR_2;
            VAR_12.left = 0;
            VAR_12.right = VAR_6->x * VAR_17;
            break;
         case 130:
            VAR_7 = VAR_0;
            VAR_12.left = (VAR_6->x - 1.0) * VAR_17;
            VAR_12.right = (VAR_6->x + 1.0) * VAR_17;
            break;
         case 129:
         default:
            VAR_7 = VAR_1;
            VAR_12.left = VAR_6->x * VAR_17;
            VAR_12.right = VAR_17;
            break;
      }

      VAR_12.top = (1.0 - VAR_6->y) * VAR_18 - VAR_16->ascent;
      VAR_12.bottom = VAR_18;
      VAR_15 = &VAR_12;

      VAR_21 = VAR_6->drop_x;
      VAR_22 = VAR_6->drop_y;

      if(VAR_21 || VAR_22)
      {
         VAR_19 = VAR_6->drop_mod;
         VAR_20 = VAR_6->drop_alpha;
         VAR_13 = VAR_12;
         VAR_13.left += VAR_6->drop_x;
         VAR_13.right += VAR_6->drop_x;
         VAR_13.top -= VAR_6->drop_y;
         VAR_13.bottom -= VAR_6->drop_y;
         VAR_14 = &VAR_13;
      }
   }
   else
   {
      VAR_8 = 255;
      VAR_9 = VAR_3->font_msg_color_r * 255;
      VAR_10 = VAR_3->font_msg_color_g * 255;
      VAR_11 = VAR_3->font_msg_color_b * 255;
   }

   if(VAR_21 || VAR_22)
   {
      unsigned VAR_23 = VAR_8 * VAR_20;
      unsigned VAR_24 = VAR_9 * VAR_19;
      unsigned VAR_25 = VAR_10 * VAR_19;
      unsigned VAR_26 = VAR_11 * VAR_19;

      FUNC_5(VAR_16->font, ((void*)0),
            (void*)VAR_5, -1, VAR_14, VAR_7,
            FUNC_0(VAR_23 , VAR_24, VAR_25, VAR_26));
   }

   FUNC_5(VAR_16->font, ((void*)0), (void*)VAR_5, -1,
      VAR_15, VAR_7, FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11));
}
