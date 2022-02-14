
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int chroma_v_index; int chroma_u_index; int * luma_index; int render_func; int fourcc; } ;
typedef TYPE_1__ xv_t ;
struct TYPE_11__ {scalar_t__ rgb32; } ;
typedef TYPE_2__ video_info_t ;
typedef int XvPortID ;
struct TYPE_12__ {scalar_t__ type; int bits_per_pixel; scalar_t__ format; scalar_t__* component_order; int id; } ;
typedef TYPE_3__ XvImageFormatValues ;
struct TYPE_13__ {scalar_t__* components; int v_index; int u_index; int * luma_index; int render_16; int render_32; } ;
typedef int Display ;


 unsigned int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ,int ,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_3(xv_t *VAR_4, Display *VAR_5,
      XvPortID VAR_6, const video_info_t *VAR_7)
{
   int VAR_8;
   unsigned VAR_9;
   int VAR_10;
   XvImageFormatValues *VAR_11 = FUNC_2(
         VAR_3, VAR_6, &VAR_10);

   if (!VAR_11)
      return 0;

   for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
   {
      for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++)
      {
         if (VAR_11[VAR_8].type == VAR_1
               && VAR_11[VAR_8].bits_per_pixel == 16
               && VAR_11[VAR_8].format == VAR_0)
         {
            if (VAR_11[VAR_8].component_order[0] == VAR_2[VAR_9].components[0] &&
                  VAR_11[VAR_8].component_order[1] == VAR_2[VAR_9].components[1] &&
                  VAR_11[VAR_8].component_order[2] == VAR_2[VAR_9].components[2] &&
                  VAR_11[VAR_8].component_order[3] == VAR_2[VAR_9].components[3])
            {
               VAR_4->fourcc = VAR_11[VAR_8].id;
               VAR_4->render_func = VAR_7->rgb32
                  ? VAR_2[VAR_9].render_32 : VAR_2[VAR_9].render_16;

               VAR_4->luma_index[0] = VAR_2[VAR_9].luma_index[0];
               VAR_4->luma_index[1] = VAR_2[VAR_9].luma_index[1];
               VAR_4->chroma_u_index = VAR_2[VAR_9].u_index;
               VAR_4->chroma_v_index = VAR_2[VAR_9].v_index;
               FUNC_1(VAR_11);
               return 1;
            }
         }
      }
   }

   FUNC_1(VAR_11);
   return 0;
}
