
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_13__ {int vertices; } ;
typedef TYPE_4__ video_coords_t ;
struct TYPE_14__ {TYPE_2__* gl; TYPE_3__* atlas; } ;
typedef TYPE_5__ gl_raster_t ;
struct TYPE_12__ {int dirty; } ;
struct TYPE_11__ {int mvp_no_rot; int shader_data; TYPE_1__* shader; } ;
struct TYPE_10__ {int (* set_mvp ) (int ,int *) ;int (* set_coords ) (int ,TYPE_4__ const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,TYPE_4__ const*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(gl_raster_t *VAR_1,
      const video_coords_t *VAR_2,
      video_frame_info_t *VAR_3)
{
   if (VAR_1->atlas->dirty)
   {
      FUNC_1(VAR_1);
      VAR_1->atlas->dirty = 0;
   }

   VAR_1->gl->shader->set_coords(VAR_1->gl->shader_data, VAR_2);
   VAR_1->gl->shader->set_mvp(VAR_1->gl->shader_data,
         &VAR_1->gl->mvp_no_rot);

   FUNC_0(VAR_0, 0, VAR_2->vertices);
}
