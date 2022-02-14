
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display {scalar_t__* value; TYPE_1__* stack; } ;
struct TYPE_2__ {int opt; scalar_t__ best_val; scalar_t__ lo; scalar_t__ hi; } ;



__attribute__((used)) static int
FUNC_0(const struct display *VAR_0, unsigned int VAR_1)
{
   int VAR_2 = VAR_0->stack[VAR_1].opt;




   if (VAR_0->stack[VAR_1].best_val < VAR_0->value[VAR_2])
      return -1;




   else if (VAR_0->stack[VAR_1].best_val > VAR_0->value[VAR_2])
   {
      if (VAR_0->stack[VAR_1].lo <= VAR_0->stack[VAR_1].hi )
         return 1;

      else
         return -1;
   }

   else
      return 0;
}
