
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t res_ptr; int * res_buf; scalar_t__ nonblock; } ;
typedef TYPE_1__ al_t ;
typedef int ALuint ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(al_t *VAR_0, ALuint *VAR_1)
{
   if (!VAR_0->res_ptr)
   {
      for (;;)
      {
         if (FUNC_0(VAR_0))
            break;

         if (VAR_0->nonblock)
            return 0;


         FUNC_1(1);
      }
   }

   *VAR_1 = VAR_0->res_buf[--VAR_0->res_ptr];
   return 1;
}
