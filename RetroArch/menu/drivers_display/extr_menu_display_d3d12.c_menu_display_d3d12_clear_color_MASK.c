
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ userdata; } ;
typedef TYPE_3__ video_frame_info_t ;
typedef int menu_display_ctx_clearcolor_t ;
struct TYPE_7__ {size_t frame_index; int * desc_handles; } ;
struct TYPE_6__ {int cmd; } ;
struct TYPE_9__ {TYPE_2__ chain; TYPE_1__ queue; } ;
typedef TYPE_4__ d3d12_video_t ;


 int FUNC_0 (int ,int ,float*,int ,int *) ;

__attribute__((used)) static void FUNC_1(
      menu_display_ctx_clearcolor_t* VAR_0, video_frame_info_t *VAR_1)
{
   d3d12_video_t *VAR_2 = (d3d12_video_t*)VAR_1->userdata;

   if (!VAR_2 || !VAR_0)
      return;

   FUNC_0(
         VAR_2->queue.cmd, VAR_2->chain.desc_handles[VAR_2->chain.frame_index], (float*)VAR_0,
         0, ((void*)0));
}
