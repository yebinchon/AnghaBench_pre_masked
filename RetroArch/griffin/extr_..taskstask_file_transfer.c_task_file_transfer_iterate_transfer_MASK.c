
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos_increment; int handle; scalar_t__ is_finished; } ;
typedef TYPE_1__ nbio_handle_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(nbio_handle_t *VAR_0)
{
   size_t VAR_1;

   VAR_0->pos_increment = 5;

   if (VAR_0->is_finished)
      return 0;

   for (VAR_1 = 0; VAR_1 < VAR_0->pos_increment; VAR_1++)
   {
      if (FUNC_0(VAR_0->handle))
         return -1;
   }

   return 0;
}
