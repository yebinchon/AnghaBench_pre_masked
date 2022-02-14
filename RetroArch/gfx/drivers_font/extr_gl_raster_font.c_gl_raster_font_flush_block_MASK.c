
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_8__ {int vertices; } ;
struct TYPE_9__ {TYPE_1__ coords; } ;
struct TYPE_11__ {int fullscreen; TYPE_2__ carr; } ;
typedef TYPE_4__ video_font_raster_block_t ;
typedef int video_coords_t ;
struct TYPE_12__ {TYPE_3__* gl; TYPE_4__* block; } ;
typedef TYPE_5__ gl_raster_t ;
struct TYPE_10__ {size_t tex_index; int * texture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int *,int *) ;
 int FUNC_3 (unsigned int,unsigned int,TYPE_5__*,int ) ;
 int FUNC_4 (unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_5(unsigned VAR_2, unsigned VAR_3,
      void *VAR_4, video_frame_info_t *VAR_5)
{
   gl_raster_t *VAR_6 = (gl_raster_t*)VAR_4;
   video_font_raster_block_t *VAR_7 = VAR_6 ? VAR_6->block : ((void*)0);

   if (!VAR_6 || !VAR_7 || !VAR_7->carr.coords.vertices)
      return;

   FUNC_3(VAR_2, VAR_3, VAR_6, VAR_7->fullscreen);
   FUNC_2(VAR_6, (video_coords_t*)&VAR_7->carr.coords,
         VAR_5);

   if (VAR_6->gl)
   {

      FUNC_0(VAR_1, VAR_6->gl->texture[VAR_6->gl->tex_index]);

      FUNC_1(VAR_0);
      FUNC_4(VAR_2, VAR_3, VAR_7->fullscreen, 1);
   }
}
