
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct display {unsigned int tsp; int* value; unsigned int nsp; TYPE_2__* stack; } ;
typedef unsigned int png_byte ;
typedef scalar_t__ png_alloc_size_t ;
struct TYPE_6__ {unsigned int value_count; TYPE_1__* values; } ;
struct TYPE_5__ {int end; unsigned int opt; unsigned int entry; int lo; int hi; scalar_t__ best_size; scalar_t__ lo_size; scalar_t__ hi_size; int best_val; } ;
struct TYPE_4__ {char* name; int value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct display*,unsigned int,unsigned int) ;
 TYPE_3__* VAR_1 ;
 char const* VAR_2 ;
 int FUNC_2 (struct display*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct display *VAR_3, unsigned int VAR_4)






{
   int VAR_5 = 0;
   png_byte VAR_6, VAR_7;
   const char *VAR_8;


   FUNC_0(VAR_4+1U == VAR_3->tsp && !VAR_3->stack[VAR_4].end);

   VAR_7 = VAR_3->stack[VAR_4].opt;
   VAR_6 = VAR_3->stack[VAR_4].entry;
   FUNC_0(VAR_6+1U < VAR_1[VAR_7].value_count);
   VAR_8 = VAR_1[VAR_7].values[VAR_6].name;
   FUNC_0(VAR_8 != ((void*)0));




   if (VAR_8 == VAR_2)
   {




      if (VAR_3->stack[VAR_4].lo > VAR_3->stack[VAR_4].hi)
         VAR_3->value[VAR_7]++;

      else
      {

         png_alloc_size_t VAR_9 = VAR_3->stack[VAR_4].best_size;
         int VAR_10 = VAR_3->stack[VAR_4].lo;
         int VAR_11 = VAR_3->stack[VAR_4].hi;
         int VAR_12 = VAR_3->value[VAR_7];

         VAR_5 = 1;
         FUNC_0(VAR_9 < VAR_0);

         if (VAR_12 == VAR_10)
         {

            VAR_3->stack[VAR_4].lo_size = VAR_9;
            FUNC_0(VAR_11 > VAR_12);

            if (VAR_11 == VAR_12+1)
               VAR_3->stack[VAR_4].end = 1;

            VAR_12 = VAR_11;
         }

         else if (VAR_12 == VAR_11)
         {
            VAR_3->stack[VAR_4].hi_size = VAR_9;
            FUNC_0(VAR_12 > VAR_10+1);

            if (VAR_12 == VAR_10+2)
               VAR_3->stack[VAR_4].end = 1;

            VAR_12 = (VAR_10 + VAR_12)/2;
         }

         else
         {
            png_alloc_size_t VAR_13 = VAR_3->stack[VAR_4].lo_size;
            png_alloc_size_t VAR_14 = VAR_3->stack[VAR_4].hi_size;


            FUNC_0(VAR_13 < VAR_0 && VAR_14 < VAR_0);




            if (VAR_12 < VAR_10)
            {

               VAR_3->stack[VAR_4].lo = VAR_12;
               VAR_3->stack[VAR_4].lo_size = VAR_9;
               VAR_12 = VAR_10;
               VAR_9 = VAR_13;
               VAR_10 = VAR_3->stack[VAR_4].lo;
               VAR_13 = VAR_3->stack[VAR_4].lo_size;
            }

            else if (VAR_12 > VAR_11)
            {

               VAR_3->stack[VAR_4].hi = VAR_12;
               VAR_3->stack[VAR_4].hi_size = VAR_9;
               VAR_12 = VAR_11;
               VAR_9 = VAR_14;
               VAR_11 = VAR_3->stack[VAR_4].hi;
               VAR_14 = VAR_3->stack[VAR_4].hi_size;
            }


            FUNC_0(VAR_10 < VAR_12 && VAR_12 < VAR_11);




            if (VAR_11 == VAR_10+3)
            {



               VAR_12 = VAR_10 + ((VAR_12 == VAR_10+1) ? 2 : 1);
               FUNC_0(VAR_10 < VAR_12 && VAR_12 < VAR_11);
               VAR_3->stack[VAR_4].end = 1;
            }

            else
            {






               FUNC_0(VAR_11 > VAR_10+3);

               if (VAR_13 <= VAR_9 && VAR_9 <= VAR_14)
               {





                  if (VAR_12 == VAR_10+1)
                  {
                     ++VAR_12;
                     VAR_3->stack[VAR_4].end = 1;
                  }

                  else
                  {
                     VAR_3->stack[VAR_4].hi = VAR_11 = VAR_12;
                     VAR_3->stack[VAR_4].hi_size = VAR_9;
                     VAR_12 = (VAR_10 + VAR_12) / 2;
                  }
               }

               else if (VAR_13 >= VAR_9 && VAR_9 >= VAR_14)
               {




                  if (VAR_12 == VAR_11-1)
                  {
                     --VAR_12;
                     VAR_3->stack[VAR_4].end = 1;
                  }

                  else
                  {
                     VAR_3->stack[VAR_4].lo = VAR_10 = VAR_12;
                     VAR_3->stack[VAR_4].lo_size = VAR_9;
                     VAR_12 = (VAR_12 + VAR_11) / 2;
                  }
               }
               else if (VAR_13 <= VAR_14)
               {
                  VAR_3->stack[VAR_4].hi = VAR_12;
                  VAR_3->stack[VAR_4].hi_size = VAR_9;
                  VAR_12 = --VAR_11;
               }

               else
               {
                  VAR_3->stack[VAR_4].lo = VAR_12;
                  VAR_3->stack[VAR_4].lo_size = VAR_9;
                  VAR_12 = ++VAR_10;
               }




               FUNC_0(VAR_11 > VAR_10+1);
               if (VAR_11 <= VAR_10+2)
                  VAR_3->stack[VAR_4].end = 1;
            }
         }

         FUNC_0(VAR_12 != VAR_3->stack[VAR_4].best_val);
         VAR_3->value[VAR_7] = VAR_12;
         VAR_3->stack[VAR_4].best_size = VAR_0;
      }
   }

   else
   {

      VAR_3->value[VAR_7] = VAR_1[VAR_7].values[++VAR_6].value;
      VAR_3->stack[VAR_4].entry = VAR_6;
   }

   FUNC_2(VAR_3, VAR_4);

   if (!VAR_5 && FUNC_1(VAR_3, VAR_7, VAR_6))
      VAR_3->stack[VAR_4].end = 1;

   else if (!VAR_3->stack[VAR_4].end)
      VAR_3->nsp = VAR_3->tsp;
}
