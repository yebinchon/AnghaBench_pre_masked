
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ id; struct TYPE_3__* next; } ;
typedef TYPE_1__ apple_input_rec_t ;



__attribute__((used)) static bool FUNC_0(apple_input_rec_t *VAR_0, uint32_t VAR_1)
{
   while (VAR_0)
   {
      if (VAR_0->id == VAR_1)
         return 1;
      VAR_0 = VAR_0->next;
   }
   return 0;
}
