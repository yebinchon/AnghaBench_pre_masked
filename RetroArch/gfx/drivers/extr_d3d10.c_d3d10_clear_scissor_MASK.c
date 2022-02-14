
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_8__ {int device; } ;
typedef TYPE_2__ d3d10_video_t ;
struct TYPE_9__ {int bottom; int right; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_3__ D3D10_RECT ;


 int FUNC_0 (int ,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(d3d10_video_t *VAR_0, video_frame_info_t *VAR_1)
{
   D3D10_RECT VAR_2;

   VAR_2.left = 0;
   VAR_2.top = 0;
   VAR_2.right = VAR_1->width;
   VAR_2.bottom = VAR_1->height;

   FUNC_0(VAR_0->device, 1, &VAR_2);
}
