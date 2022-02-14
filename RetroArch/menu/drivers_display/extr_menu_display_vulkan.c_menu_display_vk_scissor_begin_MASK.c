
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int width; unsigned int height; } ;
struct TYPE_8__ {int x; int y; } ;
struct TYPE_10__ {TYPE_2__ extent; TYPE_1__ offset; } ;
struct TYPE_11__ {int use_scissor; int dirty; TYPE_3__ scissor; } ;
struct TYPE_12__ {TYPE_4__ tracker; } ;
typedef TYPE_5__ vk_t ;
struct TYPE_13__ {scalar_t__ userdata; } ;
typedef TYPE_6__ video_frame_info_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(video_frame_info_t *VAR_1,
      int VAR_2, int VAR_3, unsigned VAR_4, unsigned VAR_5)
{
   vk_t *VAR_6 = (vk_t*)VAR_1->userdata;

   VAR_6->tracker.use_scissor = 1;
   VAR_6->tracker.scissor.offset.x = VAR_2;
   VAR_6->tracker.scissor.offset.y = VAR_3;
   VAR_6->tracker.scissor.extent.width = VAR_4;
   VAR_6->tracker.scissor.extent.height = VAR_5;
   VAR_6->tracker.dirty |= VAR_0;
}
