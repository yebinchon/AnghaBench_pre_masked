
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ texture; } ;
typedef TYPE_1__ menu_display_ctx_draw_t ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_2__ d3d9_video_t ;
typedef int LPDIRECT3DTEXTURE9 ;
typedef int LPDIRECT3DDEVICE9 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(menu_display_ctx_draw_t *VAR_2,
      d3d9_video_t *VAR_3)
{
   LPDIRECT3DDEVICE9 VAR_4 = VAR_3->dev;

   FUNC_5(VAR_4, 0, (LPDIRECT3DTEXTURE9)VAR_2->texture);
   FUNC_0(VAR_4, 0, VAR_0);
   FUNC_1(VAR_4, 0, VAR_0);
   FUNC_3(VAR_4, 0, VAR_1);
   FUNC_2(VAR_4, 0, VAR_1);
   FUNC_4(VAR_4, 0, VAR_1);
}
