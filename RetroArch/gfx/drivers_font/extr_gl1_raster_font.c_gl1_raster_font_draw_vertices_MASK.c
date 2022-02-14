
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_12__ {int vertices; float* vertex; int tex_coord; int color; } ;
typedef TYPE_4__ video_coords_t ;
struct TYPE_13__ {TYPE_3__* gl; TYPE_1__* atlas; } ;
typedef TYPE_5__ gl1_raster_t ;
struct TYPE_10__ {int data; } ;
struct TYPE_11__ {TYPE_2__ mvp; } ;
struct TYPE_9__ {int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int,int ,int ,int ) ;
 int FUNC_12 (int,int ,int ,float*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (float*,float*,int) ;
 float* VAR_7 ;

__attribute__((used)) static void FUNC_15(gl1_raster_t *VAR_8,
      const video_coords_t *VAR_9,
      video_frame_info_t *VAR_10)
{
   if (VAR_8->atlas->dirty)
   {
      FUNC_1(VAR_8);
      VAR_8->atlas->dirty = 0;
   }

   FUNC_8(VAR_3);
   FUNC_10();
   FUNC_7(VAR_8->gl->mvp.data);

   FUNC_8(VAR_2);
   FUNC_10();
   FUNC_6();

   FUNC_5(VAR_0);
   FUNC_5(VAR_6);
   FUNC_5(VAR_4);
   FUNC_12(2, VAR_1, 0, VAR_9->vertex);


   FUNC_2(4, VAR_1, 0, VAR_9->color);
   FUNC_11(2, VAR_1, 0, VAR_9->tex_coord);

   FUNC_4(VAR_5, 0, VAR_9->vertices);

   FUNC_3(VAR_0);
   FUNC_3(VAR_4);
   FUNC_3(VAR_6);

   FUNC_8(VAR_2);
   FUNC_9();
   FUNC_8(VAR_3);
   FUNC_9();
}
