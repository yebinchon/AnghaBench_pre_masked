
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int preview_stop; int preview_thread; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(RASPITEX_STATE *VAR_0)
{
   if (! VAR_0->preview_stop)
   {
      FUNC_0("Stopping GL preview");
      VAR_0->preview_stop = 1;
      FUNC_1(&VAR_0->preview_thread, ((void*)0));
   }
}
