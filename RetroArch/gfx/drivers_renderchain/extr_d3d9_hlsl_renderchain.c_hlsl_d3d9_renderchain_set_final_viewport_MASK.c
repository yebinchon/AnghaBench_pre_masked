
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chain; } ;
typedef TYPE_1__ hlsl_renderchain_t ;
typedef int d3d9_video_t ;
struct TYPE_5__ {int dev; int * final_viewport; } ;
typedef TYPE_2__ d3d9_renderchain_t ;
typedef int D3DVIEWPORT9 ;


 int FUNC_0 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_1(
      d3d9_video_t *VAR_0,
      void *VAR_1,
      const D3DVIEWPORT9 *VAR_2)
{
   hlsl_renderchain_t *VAR_3 = (hlsl_renderchain_t*)VAR_1;
   d3d9_renderchain_t *VAR_4 = (d3d9_renderchain_t*)&VAR_3->chain;

   if (VAR_4 && VAR_2)
      VAR_4->final_viewport = (D3DVIEWPORT9*)VAR_2;

   FUNC_0(VAR_4->dev, VAR_4, VAR_0);
}
