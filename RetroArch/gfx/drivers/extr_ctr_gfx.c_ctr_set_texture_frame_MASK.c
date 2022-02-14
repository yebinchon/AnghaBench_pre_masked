
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int texture_width; int texture_height; int texture_swizzled; TYPE_3__* texture_linear; TYPE_3__* frame_coords; } ;
struct TYPE_6__ {int menu_texture_frame_enable; TYPE_1__ menu; } ;
typedef TYPE_2__ ctr_video_t ;
typedef int ctr_vertex_t ;
struct TYPE_7__ {unsigned int x0; int y0; unsigned int x1; unsigned int y1; unsigned int u1; unsigned int v1; scalar_t__ v0; scalar_t__ u0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int,TYPE_3__*,int,int,int ,int,int ,int,int ,int) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_3(void* VAR_3, const void* VAR_4, bool VAR_5,
                                  unsigned VAR_6, unsigned VAR_7, float VAR_8)
{
   int VAR_9;
   ctr_video_t* VAR_10 = (ctr_video_t*)VAR_3;
   int VAR_11 = VAR_6;
   (void)VAR_5;
   (void)VAR_8;

   if(!VAR_10 || !VAR_4)
      return;

   if (VAR_11 > VAR_10->menu.texture_width)
      VAR_11 = VAR_10->menu.texture_width;

   if (VAR_7 > (unsigned)VAR_10->menu.texture_height)
      VAR_7 = (unsigned)VAR_10->menu.texture_height;

   const uint16_t* VAR_12 = VAR_4;
   uint16_t* VAR_13 = (uint16_t*)VAR_10->menu.texture_linear;
   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   {
      FUNC_2(VAR_13, VAR_12, VAR_11 * sizeof(uint16_t));
      VAR_13 += VAR_10->menu.texture_width;
      VAR_12 += VAR_6;
   }

   VAR_10->menu.frame_coords->x0 = (VAR_2 - VAR_6) / 2;
   VAR_10->menu.frame_coords->y0 = (VAR_1 - VAR_7) / 2;
   VAR_10->menu.frame_coords->x1 = VAR_10->menu.frame_coords->x0 + VAR_6;
   VAR_10->menu.frame_coords->y1 = VAR_10->menu.frame_coords->y0 + VAR_7;
   VAR_10->menu.frame_coords->u0 = 0;
   VAR_10->menu.frame_coords->v0 = 0;
   VAR_10->menu.frame_coords->u1 = VAR_6;
   VAR_10->menu.frame_coords->v1 = VAR_7;
   FUNC_0(VAR_10->menu.frame_coords, sizeof(ctr_vertex_t));
   VAR_10->menu_texture_frame_enable = 1;
   FUNC_0(VAR_10->menu.texture_linear,
                         VAR_10->menu.texture_width * VAR_10->menu.texture_height * sizeof(uint16_t));

   FUNC_1(0, VAR_10->menu.texture_linear, VAR_10->menu.texture_width, VAR_10->menu.texture_height, VAR_0,0,
                  VAR_10->menu.texture_swizzled, VAR_10->menu.texture_width, VAR_0, 1);
}
