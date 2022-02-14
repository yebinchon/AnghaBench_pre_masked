
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ident; } ;


 unsigned int FUNC_0 (TYPE_1__**) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int ) ;

bool FUNC_2(const char *VAR_1)
{
   unsigned VAR_2;
   for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
   {
      if (FUNC_1(VAR_1, VAR_0[VAR_2]->ident))
         return 1;
   }

   return 0;
}
