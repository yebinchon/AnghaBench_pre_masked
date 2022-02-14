
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int on; } ;
struct btpad_queue_command {TYPE_1__ btstack_set_power_mode; int command; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(
      struct btpad_queue_command *VAR_2, uint8_t VAR_3)
{
   if (!VAR_2)
      return;

   VAR_2->command = VAR_0;
   VAR_2->btstack_set_power_mode.on = VAR_3;

   FUNC_0(&VAR_1);
   FUNC_1();
}
