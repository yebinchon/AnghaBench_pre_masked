
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cheatlist_struct ;
struct TYPE_4__ {int type; int * desc; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_2 ;

int FUNC_2(int VAR_3)
{

   if (VAR_1[VAR_3].desc)
   {
      FUNC_0(VAR_1[VAR_3].desc);
      VAR_1[VAR_3].desc = ((void*)0);
   }


   for (; VAR_3 < VAR_2-1; VAR_3++)
      FUNC_1(&VAR_1[VAR_3], &VAR_1[VAR_3+1], sizeof(cheatlist_struct));

   VAR_2--;


   VAR_1[VAR_2].type = VAR_0;

   return 0;
}
