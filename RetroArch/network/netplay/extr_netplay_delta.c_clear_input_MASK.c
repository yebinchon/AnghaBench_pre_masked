
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* netplay_input_state_t ;
struct TYPE_3__ {int used; struct TYPE_3__* next; } ;



__attribute__((used)) static void FUNC_0(netplay_input_state_t VAR_0)
{
   while (VAR_0)
   {
      VAR_0->used = 0;
      VAR_0 = VAR_0->next;
   }
}
