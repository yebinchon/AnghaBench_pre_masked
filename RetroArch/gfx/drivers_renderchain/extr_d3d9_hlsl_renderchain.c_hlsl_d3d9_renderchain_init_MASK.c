
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int video_info_t ;
struct LinkInfo {int dummy; } ;
struct TYPE_9__ {int pixel_size; int dev; scalar_t__ frame_count; int * final_viewport; } ;
struct TYPE_7__ {int stock_shader; TYPE_6__ chain; } ;
typedef TYPE_1__ hlsl_renderchain_t ;
struct TYPE_8__ {scalar_t__ renderchain_data; } ;
typedef TYPE_2__ d3d9_video_t ;
typedef int LPDIRECT3DDEVICE9 ;
typedef int D3DVIEWPORT9 ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,TYPE_6__*,struct LinkInfo const*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_5(
      d3d9_video_t *VAR_3,
      const video_info_t *VAR_4,
      LPDIRECT3DDEVICE9 VAR_5,
      const D3DVIEWPORT9 *VAR_6,
      const struct LinkInfo *VAR_7,
      bool VAR_8
      )
{
   hlsl_renderchain_t *VAR_9 = (hlsl_renderchain_t*)
      VAR_3->renderchain_data;
   unsigned VAR_10 = (VAR_8)
      ? VAR_1 : VAR_0;

   if (!VAR_9)
      return 0;
   if (!FUNC_4(VAR_3, VAR_9))
   {
      FUNC_0("[D3D9 HLSL]: Failed to initialize shader subsystem.\n");
      return 0;
   }

   VAR_9->chain.dev = VAR_5;
   VAR_9->chain.final_viewport = (D3DVIEWPORT9*)VAR_6;
   VAR_9->chain.frame_count = 0;
   VAR_9->chain.pixel_size = (VAR_10 == VAR_0) ? 2 : 4;

   if (!FUNC_3(VAR_5, &VAR_9->chain, VAR_7, VAR_10))
      return 0;
   if (!FUNC_2(VAR_9->chain.dev, &VAR_9->stock_shader, VAR_2))
      return 0;

   FUNC_1(&VAR_9->stock_shader, VAR_5);

   return 1;
}
