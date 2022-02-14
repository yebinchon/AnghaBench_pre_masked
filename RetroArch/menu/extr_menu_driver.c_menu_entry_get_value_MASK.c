
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* password_value; char* value; } ;
typedef TYPE_1__ menu_entry_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

void FUNC_1(menu_entry_t *VAR_0, const char **VAR_1)
{
   if (!VAR_0 || !VAR_1)
      return;

   if (FUNC_0(VAR_0))
      *VAR_1 = VAR_0->password_value;
   else
      *VAR_1 = VAR_0->value;
}
