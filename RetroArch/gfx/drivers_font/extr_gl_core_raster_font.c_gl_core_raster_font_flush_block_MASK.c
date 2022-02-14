
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_8__ {int vertices; } ;
struct TYPE_7__ {TYPE_2__ coords; } ;
struct TYPE_9__ {int fullscreen; TYPE_1__ carr; } ;
typedef TYPE_3__ video_font_raster_block_t ;
typedef int video_coords_t ;
struct TYPE_10__ {scalar_t__ gl; TYPE_3__* block; } ;
typedef TYPE_4__ gl_core_raster_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;
 int FUNC_2 (unsigned int,unsigned int,TYPE_4__*,int ) ;
 int FUNC_3 (unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_4(unsigned VAR_1, unsigned VAR_2,
      void *VAR_3, video_frame_info_t *VAR_4)
{
   gl_core_raster_t *VAR_5 = (gl_core_raster_t*)VAR_3;
   video_font_raster_block_t *VAR_6 = VAR_5 ? VAR_5->block : ((void*)0);

   if (!VAR_5 || !VAR_6 || !VAR_6->carr.coords.vertices)
      return;

   FUNC_2(VAR_1, VAR_2, VAR_5, VAR_6->fullscreen);
   FUNC_1(VAR_5, (video_coords_t*)&VAR_6->carr.coords,
         VAR_4);

   if (VAR_5->gl)
   {
      FUNC_0(VAR_0);
      FUNC_3(VAR_1, VAR_2, VAR_6->fullscreen, 1);
   }
}
