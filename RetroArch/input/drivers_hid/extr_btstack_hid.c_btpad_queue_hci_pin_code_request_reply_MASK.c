
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pin; int bd_addr; } ;
struct btpad_queue_command {TYPE_1__ hci_pin_code_request_reply; int command; } ;
typedef int bd_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(
      struct btpad_queue_command *VAR_2,
      bd_addr_t VAR_3, bd_addr_t VAR_4)
{
   if (!VAR_2)
      return;

   VAR_2->command = VAR_0;
   FUNC_2(VAR_2->hci_pin_code_request_reply.bd_addr, VAR_3, sizeof(bd_addr_t));
   FUNC_2(VAR_2->hci_pin_code_request_reply.pin, VAR_4, sizeof(bd_addr_t));

   FUNC_0(&VAR_1);
   FUNC_1();
}
