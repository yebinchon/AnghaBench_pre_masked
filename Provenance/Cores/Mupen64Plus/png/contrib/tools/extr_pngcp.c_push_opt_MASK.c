
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct display {unsigned int tsp; size_t min_windowBits; unsigned int nsp; TYPE_2__* stack; int * value; } ;
typedef size_t png_byte ;
struct TYPE_6__ {size_t value_count; int name; TYPE_1__* values; } ;
struct TYPE_5__ {size_t opt; size_t entry; int end; int best_val; int hi; int lo; int hi_size; int lo_size; int best_size; } ;
struct TYPE_4__ {char* name; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct display*,int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct display*,size_t,size_t) ;
 TYPE_3__* VAR_5 ;
 char* VAR_6 ;
 char const* VAR_7 ;
 int FUNC_3 (struct display*,unsigned int) ;
 int FUNC_4 (struct display*) ;

__attribute__((used)) static void
FUNC_5(struct display *VAR_8, unsigned int VAR_9, png_byte VAR_10, int VAR_11)




{
   png_byte VAR_12;
   const char *VAR_13;

   FUNC_0(VAR_9 == VAR_8->tsp && VAR_9 < VAR_4);




   VAR_12 = VAR_5[VAR_10].value_count;
   FUNC_0(VAR_12 > 0U);

   do
   {
      VAR_13 = VAR_5[VAR_10].values[--VAR_12].name;
      if (VAR_13 == VAR_7)
         break;
   }
   while (VAR_12 > 0U);

   VAR_8->tsp = VAR_9+1U;
   VAR_8->stack[VAR_9].best_size =
      VAR_8->stack[VAR_9].lo_size =
      VAR_8->stack[VAR_9].hi_size = VAR_3;

   if (VAR_11 && VAR_13 == VAR_7)
   {
      VAR_8->stack[VAR_9].lo = VAR_5[VAR_10].values[VAR_12].value;

      FUNC_0(VAR_12+1 < VAR_5[VAR_10].value_count &&
             VAR_5[VAR_10].values[VAR_12+1].name == VAR_6);
      VAR_8->stack[VAR_9].hi = VAR_5[VAR_10].values[VAR_12+1].value;
   }

   else
   {

      VAR_8->stack[VAR_9].lo = VAR_1;
      VAR_8->stack[VAR_9].hi = VAR_2;
   }

   VAR_8->stack[VAR_9].opt = VAR_10;
   VAR_8->stack[VAR_9].entry = VAR_12;
   VAR_8->stack[VAR_9].best_val = VAR_8->value[VAR_10] = VAR_5[VAR_10].values[VAR_12].value;

   FUNC_3(VAR_8, VAR_9);




   if (FUNC_2(VAR_8, VAR_10, VAR_12))
   {
      VAR_8->stack[VAR_9].end = 1;



      if (VAR_10 != VAR_8->min_windowBits)
         FUNC_1(VAR_8, VAR_0, "%s: only testing one value",
               VAR_5[VAR_10].name);
   }

   else
   {
      VAR_8->stack[VAR_9].end = 0;
      VAR_8->nsp = VAR_8->tsp;
   }





   FUNC_4(VAR_8);
}
