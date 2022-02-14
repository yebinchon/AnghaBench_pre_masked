
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ userdata; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_7__ {int context; } ;
typedef TYPE_2__ d3d11_video_t ;
struct TYPE_8__ {int left; int top; unsigned int right; unsigned int bottom; } ;
typedef TYPE_3__ D3D11_RECT ;


 int FUNC_0 (int ,int,TYPE_3__*) ;

void FUNC_1(video_frame_info_t *VAR_0, int VAR_1, int VAR_2, unsigned VAR_3, unsigned VAR_4)
{
   D3D11_RECT VAR_5;
   d3d11_video_t *VAR_6 = (d3d11_video_t*)VAR_0->userdata;

   if (!VAR_6 || !VAR_3 || !VAR_4)
      return;

   VAR_5.left = VAR_1;
   VAR_5.top = VAR_2;
   VAR_5.right = VAR_3 + VAR_1;
   VAR_5.bottom = VAR_4 + VAR_2;

   FUNC_0(VAR_6->context, 1, &VAR_5);
}
