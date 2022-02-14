
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int box_message; } ;
typedef TYPE_1__ xmb_handle_t ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const char *VAR_1)
{
   xmb_handle_t *VAR_2 = (xmb_handle_t*)VAR_0;

   if (!VAR_2 || FUNC_1(VAR_1))
      return;

   VAR_2->box_message = FUNC_0(VAR_1);
}
