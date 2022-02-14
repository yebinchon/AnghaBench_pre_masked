
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* roles; } ;
typedef scalar_t__ MMALOMX_ROLE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

MMALOMX_ROLE_T FUNC_1(int VAR_2, unsigned int VAR_3)
{
   unsigned int VAR_4;

   if (VAR_2 >= (int)FUNC_0(VAR_1) || VAR_2 < 0)
      VAR_2 = FUNC_0(VAR_1) - 1;

   for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
      if (VAR_1[VAR_2].roles[VAR_4] == VAR_0)
         break;

   return VAR_1[VAR_2].roles[VAR_4];
}
