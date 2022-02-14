
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; struct TYPE_8__* next; } ;
typedef TYPE_1__ stbrp_node ;
struct TYPE_9__ {int align; scalar_t__ width; scalar_t__ heuristic; int height; TYPE_1__* active_head; } ;
typedef TYPE_2__ stbrp_context ;
struct TYPE_10__ {int x; int y; TYPE_1__** prev_link; } ;
typedef TYPE_3__ stbrp__findresult ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,int,int*) ;

__attribute__((used)) static stbrp__findresult FUNC_2(stbrp_context *VAR_2, int VAR_3, int VAR_4)
{
   int VAR_5 = (1<<30), VAR_6, VAR_7 = (1 << 30);
   stbrp__findresult VAR_8;
   stbrp_node **VAR_9, *VAR_10, *VAR_11, **VAR_12 = ((void*)0);


   VAR_3 = (VAR_3 + VAR_2->align - 1);
   VAR_3 -= VAR_3 % VAR_2->align;
   FUNC_0(VAR_3 % VAR_2->align == 0);

   VAR_10 = VAR_2->active_head;
   VAR_9 = &VAR_2->active_head;
   while (VAR_10->x + VAR_3 <= VAR_2->width)
   {
      int VAR_13;
      int VAR_14 = FUNC_1(VAR_2, VAR_10, VAR_10->x, VAR_3, &VAR_13);

      if (VAR_2->heuristic == VAR_1)
      {

         if (VAR_14 < VAR_7)
         {
            VAR_7 = VAR_14;
            VAR_12 = VAR_9;
         }
      }
      else
      {

         if (VAR_14 + VAR_4 <= VAR_2->height)
         {

            if (VAR_14 < VAR_7 || (VAR_14 == VAR_7 && VAR_13 < VAR_5))
            {
               VAR_7 = VAR_14;
               VAR_5 = VAR_13;
               VAR_12 = VAR_9;
            }
         }
      }
      VAR_9 = &VAR_10->next;
      VAR_10 = VAR_10->next;
   }

   VAR_6 = (VAR_12 == ((void*)0)) ? 0 : (*VAR_12)->x;
   if (VAR_2->heuristic == VAR_0)
   {
      VAR_11 = VAR_2->active_head;
      VAR_10 = VAR_2->active_head;
      VAR_9 = &VAR_2->active_head;

      while (VAR_11->x < VAR_3)
         VAR_11 = VAR_11->next;
      while (VAR_11)
      {
         int VAR_15 = VAR_11->x - VAR_3;
         int VAR_16,VAR_17;
         FUNC_0(VAR_15 >= 0);


         while (VAR_10->next->x <= VAR_15)
         {
            VAR_9 = &VAR_10->next;
            VAR_10 = VAR_10->next;
         }

         FUNC_0(VAR_10->next->x > VAR_15 && VAR_10->x <= VAR_15);
         VAR_16 = FUNC_1(VAR_2, VAR_10, VAR_15, VAR_3, &VAR_17);

         if (VAR_16 + VAR_4 < VAR_2->height)
         {
            if (VAR_16 <= VAR_7)
            {
               if (VAR_16 < VAR_7 || VAR_17 < VAR_5 || (VAR_17==VAR_5 && VAR_15 < VAR_6))
               {
                  VAR_6 = VAR_15;
                  FUNC_0(VAR_16 <= VAR_7);
                  VAR_7 = VAR_16;
                  VAR_5 = VAR_17;
                  VAR_12 = VAR_9;
               }
            }
         }
         VAR_11 = VAR_11->next;
      }
   }

   VAR_8.prev_link = VAR_12;
   VAR_8.x = VAR_6;
   VAR_8.y = VAR_7;
   return VAR_8;
}
