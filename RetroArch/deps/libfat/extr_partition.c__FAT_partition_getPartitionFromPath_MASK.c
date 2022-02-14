
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ deviceData; } ;
typedef TYPE_1__ devoptab_t ;
typedef int PARTITION ;


 TYPE_1__* FUNC_0 (char const*) ;

PARTITION* FUNC_1 (const char* VAR_0)
{
   const devoptab_t *VAR_1 = FUNC_0 (VAR_0);

   if (!VAR_1)
      return ((void*)0);

   return (PARTITION*)VAR_1->deviceData;
}
