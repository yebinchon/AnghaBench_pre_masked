
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int reason; int handle; } ;
struct btpad_queue_command {TYPE_1__ hci_disconnect; int command; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(
      struct btpad_queue_command *VAR_2,
      uint16_t VAR_3, uint8_t VAR_4)
{
   if (!VAR_2)
      return;

   VAR_2->command = VAR_0;
   VAR_2->hci_disconnect.handle = VAR_3;
   VAR_2->hci_disconnect.reason = VAR_4;

   FUNC_0(&VAR_1);
   FUNC_1();
}
