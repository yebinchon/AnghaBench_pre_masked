
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mainloop; } ;
typedef TYPE_1__ pa_t ;
typedef int pa_stream ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(pa_stream *VAR_0, void *VAR_1)
{
   pa_t *VAR_2 = (pa_t*)VAR_1;

   switch (FUNC_0(VAR_0))
   {
      case 129:
      case 130:
      case 128:
         FUNC_1(VAR_2->mainloop, 0);
         break;
      default:
         break;
   }
}
