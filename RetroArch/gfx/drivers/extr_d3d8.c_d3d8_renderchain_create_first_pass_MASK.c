
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rgb32; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_2__ d3d8_video_t ;
struct TYPE_9__ {scalar_t__ tex; int tex_h; int tex_w; scalar_t__ vertex_buf; } ;
typedef TYPE_3__ d3d8_renderchain_t ;
typedef int Vertex ;
typedef scalar_t__ LPDIRECT3DVERTEXBUFFER8 ;
typedef scalar_t__ LPDIRECT3DTEXTURE8 ;
typedef int LPDIRECT3DDEVICE8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int,int ,int ,int ,int ,int ,int ,int *,int *,int) ;
 scalar_t__ FUNC_6 (int ,int,int ,int,int ,int *) ;

__attribute__((used)) static bool FUNC_7(
      d3d8_video_t *VAR_11,
      d3d8_renderchain_t *VAR_12,
      const video_info_t *VAR_13)
{
   LPDIRECT3DDEVICE8 VAR_14 = (LPDIRECT3DDEVICE8)VAR_11->dev;

   VAR_12->vertex_buf = (LPDIRECT3DVERTEXBUFFER8)FUNC_6(VAR_14, 4 * sizeof(Vertex),
         VAR_9,
         VAR_3 | VAR_2 | VAR_1,
         VAR_4,
         ((void*)0));

   if (!VAR_12->vertex_buf)
      return 0;

   VAR_12->tex = (LPDIRECT3DTEXTURE8)FUNC_5(VAR_14, ((void*)0),
         VAR_12->tex_w, VAR_12->tex_h, 1, 0,
         VAR_13->rgb32
         ?
         FUNC_1() : FUNC_0(),
         VAR_4, 0, 0, 0, ((void*)0), ((void*)0),
         0);

   if (!VAR_12->tex)
      return 0;

   FUNC_3(VAR_14, 0, VAR_8);
   FUNC_4(VAR_14, 0, VAR_8);
   FUNC_2(VAR_14, VAR_6, 0);
   FUNC_2(VAR_14, VAR_5, VAR_0);
   FUNC_2(VAR_14, VAR_7, VAR_10);

   return 1;
}
