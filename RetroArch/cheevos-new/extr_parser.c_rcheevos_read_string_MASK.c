
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* field; } ;
typedef TYPE_2__ rcheevos_readud_t ;
struct TYPE_3__ {char const* string; size_t length; } ;



__attribute__((used)) static int FUNC_0(void* VAR_0,
      const char* VAR_1, size_t VAR_2)
{
   rcheevos_readud_t* VAR_3 = (rcheevos_readud_t*)VAR_0;

   if (VAR_3->field)
   {
      VAR_3->field->string = VAR_1;
      VAR_3->field->length = VAR_2;
   }

   return 0;
}
