
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* video_driver_data; } ;
struct TYPE_5__ {int images_count; int ** images; int const* render; TYPE_1__ render_info; } ;
typedef TYPE_2__ video_layout_state_t ;
typedef int video_layout_render_interface_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void**,int,int) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_0 ;

void FUNC_3(void *VAR_1, const video_layout_render_interface_t *VAR_2)
{
   if (VAR_0)
      FUNC_2();

   VAR_0 = (video_layout_state_t*)FUNC_0(1, sizeof(video_layout_state_t));
   VAR_0->render_info.video_driver_data = VAR_1;
   VAR_0->render = VAR_2;

   FUNC_1((void**)&VAR_0->images, sizeof(void*), 1);

   VAR_0->images[0] = ((void*)0);
   VAR_0->images_count = 1;
}
