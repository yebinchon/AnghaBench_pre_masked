
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; struct TYPE_3__* next; } ;
typedef TYPE_1__ stbrp_node ;
typedef int stbrp_context ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(stbrp_context *VAR_0,
      stbrp_node *VAR_1, int VAR_2, int VAR_3, int *VAR_4)
{
   int VAR_5, VAR_6, VAR_7;
   stbrp_node *VAR_8 = VAR_1;
   int VAR_9 = VAR_2 + VAR_3;

   FUNC_0(VAR_1->x <= VAR_2);
   FUNC_0(VAR_8->next->x > VAR_2);
   FUNC_0(VAR_8->x <= VAR_2);

   VAR_5 = 0;
   VAR_7 = 0;
   VAR_6 = 0;
   while (VAR_8->x < VAR_9)
   {
      if (VAR_8->y > VAR_5)
      {




         VAR_7 += VAR_6 * (VAR_8->y - VAR_5);
         VAR_5 = VAR_8->y;


         if (VAR_8->x < VAR_2)
            VAR_6 += VAR_8->next->x - VAR_2;
         else
            VAR_6 += VAR_8->next->x - VAR_8->x;
      }
      else
      {

         int VAR_10 = VAR_8->next->x - VAR_8->x;
         if (VAR_10 + VAR_6 > VAR_3)
            VAR_10 = VAR_3 - VAR_6;
         VAR_7 += VAR_10 * (VAR_5 - VAR_8->y);
         VAR_6 += VAR_10;
      }
      VAR_8 = VAR_8->next;
   }

   *VAR_4 = VAR_7;
   return VAR_5;
}
