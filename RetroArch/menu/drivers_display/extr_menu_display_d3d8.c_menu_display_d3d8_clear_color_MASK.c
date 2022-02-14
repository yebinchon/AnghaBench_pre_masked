
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ userdata; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_7__ {float a; float r; float g; float b; } ;
typedef TYPE_2__ menu_display_ctx_clearcolor_t ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_3__ d3d8_video_t ;
typedef int DWORD ;


 int FUNC_0 (float) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(
      menu_display_ctx_clearcolor_t *VAR_1, video_frame_info_t *VAR_2)
{
   DWORD VAR_3 = 0;
   d3d8_video_t *VAR_4 = (d3d8_video_t*)VAR_2->userdata;

   if (!VAR_4 || !VAR_1)
      return;

   VAR_3 = FUNC_1(
         FUNC_0(VAR_1->a * 255.0f),
         FUNC_0(VAR_1->r * 255.0f),
         FUNC_0(VAR_1->g * 255.0f),
         FUNC_0(VAR_1->b * 255.0f)
         );

   FUNC_2(VAR_4->dev, 0, ((void*)0), VAR_0, VAR_3, 0, 0);
}
