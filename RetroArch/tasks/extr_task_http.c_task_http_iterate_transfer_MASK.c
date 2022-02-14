
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_6__ {int handle; } ;
typedef TYPE_2__ http_handle_t ;


 int FUNC_0 (int ,size_t*,size_t*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(retro_task_t *VAR_0)
{
   http_handle_t *VAR_1 = (http_handle_t*)VAR_0->state;
   size_t VAR_2 = 0, VAR_3 = 0;


   if (FUNC_2())
      FUNC_1(1);

   if (!FUNC_0(VAR_1->handle, &VAR_2, &VAR_3))
   {
      FUNC_3(VAR_0, (VAR_3 == 0) ? -1 : (signed)VAR_2 / (VAR_3 / 100));
      return -1;
   }

   return 0;
}
