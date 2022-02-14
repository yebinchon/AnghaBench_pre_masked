
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ident; int type; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int) ;
 TYPE_1__** VAR_1 ;

bool FUNC_2(bool VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++)
   {
      if (!FUNC_1(
               VAR_1[VAR_3]->type,
               VAR_2))
         continue;

      FUNC_0("[Menu]: Found menu display driver: \"%s\".\n",
            VAR_1[VAR_3]->ident);
      VAR_0 = VAR_1[VAR_3];
      return 1;
   }
   return 0;
}
