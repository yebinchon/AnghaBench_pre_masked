
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int video_frame_info_t ;
struct TYPE_16__ {int vertices; int color; int tex_coord; int vertex; } ;
typedef TYPE_5__ video_coords_t ;
struct TYPE_17__ {TYPE_10__* gl; int tex; TYPE_1__* atlas; } ;
typedef TYPE_6__ gl_core_raster_t ;
struct TYPE_15__ {int data; } ;
struct TYPE_13__ {scalar_t__ flat_ubo_vertex; } ;
struct TYPE_14__ {TYPE_2__ font_loc; } ;
struct TYPE_12__ {int dirty; } ;
struct TYPE_11__ {TYPE_4__ mvp_no_rot; TYPE_3__ pipelines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (int,int,int ,int ,int,void*) ;
 int FUNC_8 (TYPE_10__*,int ,int) ;
 int FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_10(gl_core_raster_t *VAR_6,
      const video_coords_t *VAR_7,
      video_frame_info_t *VAR_8)
{
   if (VAR_6->atlas->dirty)
   {
      FUNC_9(VAR_6);
      VAR_6->atlas->dirty = 0;
   }

   FUNC_0(VAR_3);
   FUNC_2(VAR_4, VAR_6->tex);

   if (VAR_6->gl->pipelines.font_loc.flat_ubo_vertex >= 0)
   {
      FUNC_6(VAR_6->gl->pipelines.font_loc.flat_ubo_vertex,
                   4, VAR_6->gl->mvp_no_rot.data);
   }

   FUNC_5(0);
   FUNC_5(1);
   FUNC_5(2);

   FUNC_8(VAR_6->gl, VAR_7->vertex, 2 * sizeof(float) * VAR_7->vertices);
   FUNC_7(0, 2, VAR_2, VAR_1, 2 * sizeof(float), (void *)(uintptr_t)0);

   FUNC_8(VAR_6->gl, VAR_7->tex_coord, 2 * sizeof(float) * VAR_7->vertices);
   FUNC_7(1, 2, VAR_2, VAR_1, 2 * sizeof(float), (void *)(uintptr_t)0);

   FUNC_8(VAR_6->gl, VAR_7->color, 4 * sizeof(float) * VAR_7->vertices);
   FUNC_7(2, 4, VAR_2, VAR_1, 4 * sizeof(float), (void *)(uintptr_t)0);

   FUNC_4(VAR_5, 0, VAR_7->vertices);

   FUNC_3(0);
   FUNC_3(1);
   FUNC_3(2);
   FUNC_1(VAR_0, 0);
}
