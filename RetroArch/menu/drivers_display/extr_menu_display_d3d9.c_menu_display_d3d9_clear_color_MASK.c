
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
struct TYPE_8__ {scalar_t__ dev; } ;
typedef TYPE_3__ d3d9_video_t ;
typedef scalar_t__ LPDIRECT3DDEVICE9 ;
typedef int DWORD ;


 int FUNC_0 (float) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(
      menu_display_ctx_clearcolor_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   LPDIRECT3DDEVICE9 VAR_3;
   DWORD VAR_4 = 0;
   d3d9_video_t *VAR_5 = (d3d9_video_t*)VAR_2->userdata;

   if (!VAR_5 || !VAR_1)
      return;

   VAR_3 = (LPDIRECT3DDEVICE9)VAR_5->dev;

   VAR_4 = FUNC_1(
         FUNC_0(VAR_1->a * 255.0f),
         FUNC_0(VAR_1->r * 255.0f),
         FUNC_0(VAR_1->g * 255.0f),
         FUNC_0(VAR_1->b * 255.0f)
         );

   FUNC_2(VAR_3, 0, ((void*)0), VAR_0, VAR_4, 0, 0);
}
