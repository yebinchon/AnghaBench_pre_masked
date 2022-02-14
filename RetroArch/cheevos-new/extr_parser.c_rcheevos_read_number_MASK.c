
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ is_console_id; TYPE_1__* patchdata; TYPE_2__* field; } ;
typedef TYPE_3__ rcheevos_readud_t ;
struct TYPE_5__ {char const* string; size_t length; } ;
struct TYPE_4__ {unsigned int console_id; } ;


 scalar_t__ FUNC_0 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_1(void* VAR_0,
      const char* VAR_1, size_t VAR_2)
{
   rcheevos_readud_t* VAR_3 = (rcheevos_readud_t*)VAR_0;

   if (VAR_3->field)
   {
      VAR_3->field->string = VAR_1;
      VAR_3->field->length = VAR_2;
   }
   else if (VAR_3->is_console_id)
   {
      VAR_3->patchdata->console_id = (unsigned)FUNC_0(VAR_1, ((void*)0), 10);
      VAR_3->is_console_id = 0;
   }

   return 0;
}
