
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; int staging; int view; } ;
typedef TYPE_1__ d3d11_texture_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void* VAR_0, uintptr_t VAR_1)
{
   d3d11_texture_t* VAR_2 = (d3d11_texture_t*)VAR_1;

   if (!VAR_2)
      return;

   FUNC_0(VAR_2->view);
   FUNC_0(VAR_2->staging);
   FUNC_0(VAR_2->handle);
   FUNC_1(VAR_2);
}
