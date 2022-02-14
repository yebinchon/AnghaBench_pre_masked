
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* touches; } ;
typedef TYPE_2__ input_ctx_wayland_data_t ;
struct TYPE_4__ {int active; unsigned int x; unsigned int y; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
   int VAR_2;
   unsigned VAR_3 = 0;
   unsigned VAR_4 = 0;
   input_ctx_wayland_data_t *VAR_5 = (input_ctx_wayland_data_t*)VAR_1;

   if (!VAR_5)
      return;

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      if (FUNC_0(VAR_5, VAR_2, &VAR_3, &VAR_4))
         VAR_5->touches[VAR_2].active = 1;
      else
         VAR_5->touches[VAR_2].active = 0;
      VAR_5->touches[VAR_2].x = VAR_3;
      VAR_5->touches[VAR_2].y = VAR_4;
   }
}
