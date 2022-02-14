
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* roles; } ;
typedef int MMAL_BOOL_T ;
typedef scalar_t__ MMALOMX_ROLE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

MMAL_BOOL_T FUNC_1(int VAR_4, MMALOMX_ROLE_T VAR_5)
{
   unsigned int VAR_6;

   if (VAR_4 >= (int)FUNC_0(VAR_3) || VAR_4 < 0)
      VAR_4 = FUNC_0(VAR_3) - 1;

   for (VAR_6 = 0; VAR_3[VAR_4].roles[VAR_6] != VAR_0; VAR_6++)
      if (VAR_3[VAR_4].roles[VAR_6] == VAR_5)
         return VAR_2;

   return VAR_1;
}
