
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fence_count; scalar_t__* fences; } ;
typedef TYPE_1__ gl_core_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_2(gl_core_t *VAR_0)
{
   unsigned VAR_1;
   for (VAR_1 = 0; VAR_1 < VAR_0->fence_count; VAR_1++)
   {
      if (VAR_0->fences[VAR_1])
         FUNC_0(VAR_0->fences[VAR_1]);
   }
   VAR_0->fence_count = 0;
   FUNC_1(VAR_0->fences, 0, sizeof(VAR_0->fences));
}
