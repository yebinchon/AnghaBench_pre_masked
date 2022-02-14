
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ texture; } ;
typedef TYPE_1__ menu_display_ctx_draw_t ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_2__ d3d8_video_t ;
typedef int LPDIRECT3DDEVICE8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,void*) ;

__attribute__((used)) static void FUNC_5(menu_display_ctx_draw_t *VAR_2,
      d3d8_video_t *VAR_3)
{
   LPDIRECT3DDEVICE8 VAR_4 = VAR_3->dev;

   FUNC_4(VAR_3->dev, 0, (void*)VAR_2->texture);
   FUNC_0(VAR_3->dev, 0, VAR_0);
   FUNC_1(VAR_3->dev, 0, VAR_0);
   FUNC_3(VAR_3->dev, 0, VAR_1);
   FUNC_2(VAR_3->dev, 0, VAR_1);
}
