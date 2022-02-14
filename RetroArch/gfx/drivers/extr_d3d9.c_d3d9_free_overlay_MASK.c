
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vert_buf; scalar_t__ tex; } ;
typedef TYPE_1__ overlay_t ;
typedef int d3d9_video_t ;
typedef int LPDIRECT3DTEXTURE9 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(d3d9_video_t *VAR_0, overlay_t *VAR_1)
{
   if (!VAR_0)
      return;

   FUNC_0((LPDIRECT3DTEXTURE9)VAR_1->tex);
   FUNC_1(VAR_1->vert_buf, ((void*)0));
}
