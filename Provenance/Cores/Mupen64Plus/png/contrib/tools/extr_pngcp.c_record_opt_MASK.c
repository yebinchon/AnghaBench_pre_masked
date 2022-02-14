
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display {unsigned int csp; unsigned int const tsp; int opt_string_start; TYPE_1__* stack; } ;
typedef int png_byte ;
struct TYPE_2__ {int opt_string_end; } ;


 int FUNC_0 (struct display*,unsigned int const,int ,char const*) ;

__attribute__((used)) static void
FUNC_1(struct display *VAR_0, png_byte VAR_1, const char *VAR_2)




{
   const unsigned int VAR_3 = VAR_0->csp;

   if (VAR_3 >= VAR_0->tsp)
   {




      const int VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);

      if (VAR_3 > 0)
         VAR_0->stack[VAR_3-1].opt_string_end = VAR_4;

      else
         VAR_0->opt_string_start = VAR_4;
   }


}
