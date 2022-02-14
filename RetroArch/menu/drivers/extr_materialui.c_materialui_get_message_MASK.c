
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* msgbox; } ;
typedef TYPE_1__ materialui_handle_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const char *VAR_1)
{
   materialui_handle_t *VAR_2 = (materialui_handle_t*)VAR_0;

   if (!VAR_2 || !VAR_1 || !*VAR_1)
      return;

   VAR_2->msgbox[0] = '\0';

   if (!FUNC_0(VAR_1))
      FUNC_1(VAR_2->msgbox, VAR_1, sizeof(VAR_2->msgbox));
}
