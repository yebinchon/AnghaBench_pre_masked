
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ renderchain_data; int dev; } ;
typedef TYPE_1__ d3d8_video_t ;
struct TYPE_10__ {int frame_count; } ;
typedef TYPE_2__ d3d8_renderchain_t ;
typedef int LPDIRECT3DDEVICE8 ;


 int FUNC_0 (TYPE_2__*,void const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_2__*,int ,unsigned int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static bool FUNC_3(
      d3d8_video_t *VAR_0,
      const void *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5)
{
   LPDIRECT3DDEVICE8 VAR_6 = (LPDIRECT3DDEVICE8)VAR_0->dev;
   d3d8_renderchain_t *VAR_7 = (d3d8_renderchain_t*)VAR_0->renderchain_data;

   FUNC_0(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4);
   FUNC_2(VAR_0, VAR_7, 1, VAR_2, VAR_3, VAR_7->frame_count);

   FUNC_1(VAR_0, VAR_6, VAR_7, 0, VAR_5);

   VAR_7->frame_count++;

   return 1;
}
