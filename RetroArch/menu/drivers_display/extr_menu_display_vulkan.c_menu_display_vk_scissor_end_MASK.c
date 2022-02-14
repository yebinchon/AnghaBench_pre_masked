
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int use_scissor; int dirty; } ;
struct TYPE_6__ {TYPE_1__ tracker; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_7__ {scalar_t__ userdata; } ;
typedef TYPE_3__ video_frame_info_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(video_frame_info_t *VAR_1)
{
   vk_t *VAR_2 = (vk_t*)VAR_1->userdata;

   VAR_2->tracker.use_scissor = 0;
   VAR_2->tracker.dirty |= VAR_0;
}
