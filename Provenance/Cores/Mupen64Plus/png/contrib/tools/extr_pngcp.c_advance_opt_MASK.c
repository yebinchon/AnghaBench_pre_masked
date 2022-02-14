
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display {unsigned int nsp; unsigned int tsp; unsigned int write_size; TYPE_1__* stack; int * value; int csp; } ;
typedef size_t png_byte ;
struct TYPE_2__ {unsigned int best_size; int end; int best_val; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct display*,unsigned int) ;
 int FUNC_2 (struct display*,unsigned int) ;
 int FUNC_3 (struct display*,unsigned int,size_t,int) ;

__attribute__((used)) static int
FUNC_4(struct display *VAR_1, png_byte VAR_2, int VAR_3)
{
   unsigned int VAR_4 = VAR_1->csp++;

   FUNC_0(VAR_4 >= VAR_1->nsp);
   if (VAR_4 >= VAR_1->tsp)
   {
      FUNC_3(VAR_1, VAR_4, VAR_2, VAR_3);
      return 1;
   }

   else
   {
      int VAR_5 = 0;






      FUNC_0(VAR_1->write_size > 0U && VAR_1->write_size < VAR_0);

      if (VAR_1->stack[VAR_4].best_size > VAR_1->write_size ||
          (VAR_1->stack[VAR_4].best_size == VAR_1->write_size &&
           FUNC_1(VAR_1, VAR_4) > 0))
      {
         VAR_1->stack[VAR_4].best_size = VAR_1->write_size;
         VAR_1->stack[VAR_4].best_val = VAR_1->value[VAR_2];
      }

      if (VAR_4+1U >= VAR_1->tsp)
      {
         FUNC_2(VAR_1, VAR_4);
         VAR_5 = 1;
      }

      else if (!VAR_1->stack[VAR_4].end)
         VAR_1->nsp = VAR_4+1U;

      return VAR_5;
   }
}
