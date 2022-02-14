
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* value; int length; scalar_t__ is_key; } ;
typedef TYPE_1__ rcheevos_getvalueud_t ;



__attribute__((used)) static int FUNC_0(void* VAR_0)
{
   rcheevos_getvalueud_t* VAR_1 = (rcheevos_getvalueud_t*)VAR_0;

   if (VAR_1->is_key )
   {
      VAR_1->value = "null";
      VAR_1->length = 4;
      VAR_1->is_key = 0;
   }

   return 0;
}
