
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blend; } ;
struct TYPE_6__ {TYPE_1__ display; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_7__ {scalar_t__ userdata; } ;
typedef TYPE_3__ video_frame_info_t ;



__attribute__((used)) static void FUNC_0(video_frame_info_t *VAR_0)
{
   vk_t *VAR_1 = (vk_t*)VAR_0->userdata;

   if (VAR_1)
      VAR_1->display.blend = 1;
}
