
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int size; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_1 ;

bool FUNC_2(void)
{
   unsigned VAR_2;

   if (!VAR_1 ||
         FUNC_1(VAR_0, ((void*)0)))
      return 0;

   for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++)
      FUNC_0(VAR_2);

   return 1;
}
