
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int clock_offset; void* reserved; void* page_scan_repetition_mode; int bd_addr; } ;
struct btpad_queue_command {TYPE_1__ hci_remote_name_request; int command; } ;
typedef int bd_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(
      struct btpad_queue_command *VAR_2,
      bd_addr_t VAR_3,
      uint8_t VAR_4,
      uint8_t VAR_5, uint16_t VAR_6)
{
   if (!VAR_2)
      return;

   VAR_2->command = VAR_0;
   FUNC_2(VAR_2->hci_remote_name_request.bd_addr, VAR_3, sizeof(bd_addr_t));
   VAR_2->hci_remote_name_request.page_scan_repetition_mode =
      VAR_4;
   VAR_2->hci_remote_name_request.reserved = VAR_5;
   VAR_2->hci_remote_name_request.clock_offset = VAR_6;

   FUNC_0(&VAR_1);
   FUNC_1();
}
