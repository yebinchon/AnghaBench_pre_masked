
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int video_smooth; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_10__ {int mvp_rotate; int dev; int final_viewport; } ;
typedef TYPE_3__ d3d8_video_t ;
struct TYPE_11__ {int vertex_buf; int dev; int tex; } ;
typedef TYPE_4__ d3d8_renderchain_t ;
typedef int Vertex ;
typedef int LPDIRECT3DDEVICE8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,unsigned int,int ) ;
 int FUNC_4 (int ,unsigned int,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(
      d3d8_video_t *VAR_6, LPDIRECT3DDEVICE8 VAR_7,
      d3d8_renderchain_t *VAR_8,
      unsigned VAR_9,
      unsigned VAR_10)
{
   settings_t *VAR_11 = FUNC_0();
   bool VAR_12 = VAR_11->bools.video_smooth;

   FUNC_6(VAR_7, 0, VAR_8->tex);
   FUNC_3(VAR_7, VAR_9, VAR_12 ?
         VAR_4 : VAR_5);
   FUNC_4(VAR_7, VAR_9, VAR_12 ?
         VAR_4 : VAR_5);

   FUNC_8(VAR_8->dev, &VAR_6->final_viewport);
   FUNC_7(VAR_7,
         VAR_2 | VAR_1 | VAR_0,
         ((void*)0));
   FUNC_5(VAR_7, 0, VAR_8->vertex_buf, 0, sizeof(Vertex));
   FUNC_2(VAR_6->dev, &VAR_6->mvp_rotate);
   FUNC_1(VAR_7, VAR_3, 0, 2);
}
