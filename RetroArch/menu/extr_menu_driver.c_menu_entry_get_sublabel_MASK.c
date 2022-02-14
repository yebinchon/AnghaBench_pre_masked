
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* sublabel; } ;
typedef TYPE_1__ menu_entry_t ;



void FUNC_0(menu_entry_t *VAR_0, const char **VAR_1)
{
   if (!VAR_0 || !VAR_1)
      return;

   *VAR_1 = VAR_0->sublabel;
}
