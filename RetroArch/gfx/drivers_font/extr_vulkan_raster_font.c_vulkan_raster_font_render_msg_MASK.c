
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_9__ range; struct vk_vertex* pv; scalar_t__ vertices; TYPE_4__* vk; } ;
typedef TYPE_3__ vulkan_raster_t ;
struct TYPE_11__ {float width; float height; } ;
struct TYPE_13__ {TYPE_2__ vp; TYPE_1__* chain; int context; } ;
typedef TYPE_4__ vk_t ;
struct TYPE_14__ {unsigned int width; unsigned int height; float font_msg_pos_x; float font_msg_pos_y; float font_msg_color_r; float font_msg_color_g; float font_msg_color_b; } ;
typedef TYPE_5__ video_frame_info_t ;
struct vk_vertex {int dummy; } ;
struct font_params {float x; float y; float scale; int full_screen; int text_align; int drop_x; int drop_y; float drop_mod; float drop_alpha; int color; } ;
typedef enum text_alignment { ____Placeholder_text_alignment } text_alignment ;
struct TYPE_10__ {int vbo; } ;


 float FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (int ) ;
 float FUNC_3 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_4 (char const*) ;
 int FUNC_5 (unsigned int,unsigned int,int,int) ;
 int FUNC_6 (int ,int *,int,TYPE_9__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,char const*,float,float*,float,float,int) ;

__attribute__((used)) static void FUNC_9(
      video_frame_info_t *VAR_1,
      void *VAR_2, const char *VAR_3,
      const struct font_params *VAR_4)
{
   float VAR_5[4], VAR_6[4];
   int VAR_7, VAR_8;
   bool VAR_9;
   unsigned VAR_10;
   enum text_alignment VAR_11;
   float VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
   vk_t *VAR_17 = ((void*)0);
   vulkan_raster_t *VAR_18 = (vulkan_raster_t*)VAR_2;
   unsigned VAR_19 = VAR_1->width;
   unsigned VAR_20 = VAR_1->height;

   if (!VAR_18 || !VAR_3 || !*VAR_3)
      return;

   VAR_17 = VAR_18->vk;

   if (VAR_4)
   {
      VAR_12 = VAR_4->x;
      VAR_13 = VAR_4->y;
      VAR_14 = VAR_4->scale;
      VAR_9 = VAR_4->full_screen;
      VAR_11 = VAR_4->text_align;
      VAR_7 = VAR_4->drop_x;
      VAR_8 = VAR_4->drop_y;
      VAR_15 = VAR_4->drop_mod;
      VAR_16 = VAR_4->drop_alpha;

      VAR_5[0] = FUNC_3(VAR_4->color) / 255.0f;
      VAR_5[1] = FUNC_2(VAR_4->color) / 255.0f;
      VAR_5[2] = FUNC_1(VAR_4->color) / 255.0f;
      VAR_5[3] = FUNC_0(VAR_4->color) / 255.0f;


      if (VAR_5[3] <= 0.0f)
         VAR_5[3] = 1.0f;
   }
   else
   {
      VAR_12 = VAR_1->font_msg_pos_x;
      VAR_13 = VAR_1->font_msg_pos_y;
      VAR_14 = 1.0f;
      VAR_9 = 1;
      VAR_11 = VAR_0;
      VAR_7 = -2;
      VAR_8 = -2;
      VAR_15 = 0.3f;
      VAR_16 = 1.0f;

      VAR_5[0] = VAR_1->font_msg_color_r;
      VAR_5[1] = VAR_1->font_msg_color_g;
      VAR_5[2] = VAR_1->font_msg_color_b;
      VAR_5[3] = 1.0f;
   }

   FUNC_5(VAR_19, VAR_20, VAR_9, 0);

   VAR_10 = FUNC_4(VAR_3);
   if (VAR_7 || VAR_8)
      VAR_10 *= 2;

   if (!FUNC_6(VAR_18->vk->context, &VAR_18->vk->chain->vbo,
         6 * sizeof(struct vk_vertex) * VAR_10, &VAR_18->range))
      return;

   VAR_18->vertices = 0;
   VAR_18->pv = (struct vk_vertex*)VAR_18->range.data;

   if (VAR_7 || VAR_8)
   {
      VAR_6[0] = VAR_5[0] * VAR_15;
      VAR_6[1] = VAR_5[1] * VAR_15;
      VAR_6[2] = VAR_5[2] * VAR_15;
      VAR_6[3] = VAR_5[3] * VAR_16;

      FUNC_8(VAR_18, VAR_3, VAR_14, VAR_6,
            VAR_12 + VAR_14 * VAR_7 / VAR_17->vp.width, VAR_13 +
            VAR_14 * VAR_8 / VAR_17->vp.height, VAR_11);
   }

   FUNC_8(VAR_18, VAR_3, VAR_14,
         VAR_5, VAR_12, VAR_13, VAR_11);
   FUNC_7(VAR_18);
}
