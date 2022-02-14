
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int overlay_interface; int set_shader; int set_rotation; int set_viewport; int read_viewport; } ;
typedef TYPE_1__ video_driver_t ;
struct TYPE_8__ {int * poke_interface; int * overlay_interface; int * set_shader; int * set_rotation; int * set_viewport; int * read_viewport; } ;
struct TYPE_7__ {TYPE_5__ video_thread; } ;
typedef TYPE_2__ thread_video_t ;


 TYPE_5__ VAR_0 ;

__attribute__((used)) static void FUNC_0(
      thread_video_t *VAR_1,
      const video_driver_t *VAR_2)
{
   VAR_1->video_thread = VAR_0;


   if (!VAR_2->read_viewport)
      VAR_1->video_thread.read_viewport = ((void*)0);
   if (!VAR_2->set_viewport)
      VAR_1->video_thread.set_viewport = ((void*)0);
   if (!VAR_2->set_rotation)
      VAR_1->video_thread.set_rotation = ((void*)0);
   if (!VAR_2->set_shader)
      VAR_1->video_thread.set_shader = ((void*)0);






   if (!VAR_1->video_thread.poke_interface)
      VAR_1->video_thread.poke_interface = ((void*)0);
}
