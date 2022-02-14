
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_9__ {int const* vertex; } ;
struct TYPE_10__ {size_t tex_index; TYPE_2__ coords; TYPE_1__* fbo_rect; int * texture; } ;
typedef TYPE_3__ gl_t ;
struct TYPE_11__ {scalar_t__ has_srgb_fbo; int * fbo; } ;
typedef TYPE_4__ gl2_renderchain_data_t ;
struct TYPE_8__ {int img_height; int img_width; } ;
typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(
      gl_t *VAR_2,
      gl2_renderchain_data_t *VAR_3,
      video_frame_info_t *VAR_4)
{



   static const GLfloat VAR_5[] = {
      0, 0,
      1, 0,
      0, 1,
      1, 1
   };
   FUNC_2(VAR_1, VAR_2->texture[VAR_2->tex_index]);
   FUNC_0(VAR_3->fbo[0]);

   FUNC_1(VAR_2,
         VAR_4, VAR_2->fbo_rect[0].img_width,
         VAR_2->fbo_rect[0].img_height, 1, 0);





   VAR_2->coords.vertex = VAR_5;





}
