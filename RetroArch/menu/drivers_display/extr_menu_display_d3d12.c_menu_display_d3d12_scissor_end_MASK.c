
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int height; int width; scalar_t__ userdata; } ;
typedef TYPE_2__ video_frame_info_t ;
struct TYPE_7__ {int cmd; } ;
struct TYPE_9__ {TYPE_1__ queue; } ;
typedef TYPE_3__ d3d12_video_t ;
struct TYPE_10__ {int bottom; int right; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_4__ D3D12_RECT ;


 int FUNC_0 (int ,int,TYPE_4__*) ;

void FUNC_1(video_frame_info_t *VAR_0)
{
   D3D12_RECT VAR_1;
   d3d12_video_t *VAR_2 = (d3d12_video_t*)VAR_0->userdata;

   if (!VAR_2)
      return;

   VAR_1.left = 0;
   VAR_1.top = 0;
   VAR_1.right = VAR_0->width;
   VAR_1.bottom = VAR_0->height;

   FUNC_0(VAR_2->queue.cmd, 1, &VAR_1);
}
