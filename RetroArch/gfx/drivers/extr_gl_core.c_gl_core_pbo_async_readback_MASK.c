
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int y; int x; } ;
struct TYPE_5__ {size_t pbo_readback_index; int* pbo_readback_valid; TYPE_1__ vp; int * pbo_readback; } ;
typedef TYPE_2__ gl_core_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(gl_core_t *VAR_7)
{
   FUNC_0(VAR_4, VAR_7->pbo_readback[VAR_7->pbo_readback_index++]);
   FUNC_1(VAR_2, 4);
   FUNC_1(VAR_3, 0);

   FUNC_2(VAR_0);

   if (VAR_7->pbo_readback_index >= VAR_1)
      VAR_7->pbo_readback_index = 0;
   VAR_7->pbo_readback_valid[VAR_7->pbo_readback_index] = 1;

   FUNC_3(VAR_7->vp.x, VAR_7->vp.y,
                VAR_7->vp.width, VAR_7->vp.height,
                VAR_5, VAR_6, ((void*)0));
   FUNC_0(VAR_4, 0);
}
