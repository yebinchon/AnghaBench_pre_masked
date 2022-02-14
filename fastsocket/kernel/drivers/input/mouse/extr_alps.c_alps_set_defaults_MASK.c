
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alps_data {int byte0; int mask0; int x_max; int y_max; int proto_version; int flags; void* addr_command; void* nibble_commands; void* set_abs_params; int decode_fields; void* process_packet; int hw_init; } ;


 int VAR_0 ;





 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

__attribute__((used)) static void FUNC_0(struct alps_data *VAR_16)
{
 VAR_16->byte0 = 0x8f;
 VAR_16->mask0 = 0x8f;
 VAR_16->flags = VAR_0;

 VAR_16->x_max = 2000;
 VAR_16->y_max = 1400;

 switch (VAR_16->proto_version) {
 case 132:
 case 131:
  VAR_16->hw_init = VAR_6;
  VAR_16->process_packet = VAR_9;
  VAR_16->set_abs_params = VAR_13;
  break;
 case 130:
  VAR_16->hw_init = VAR_7;
  VAR_16->process_packet = VAR_10;
  VAR_16->set_abs_params = VAR_12;
  VAR_16->decode_fields = VAR_4;
  VAR_16->nibble_commands = VAR_14;
  VAR_16->addr_command = VAR_2;
  break;
 case 129:
  VAR_16->hw_init = VAR_8;
  VAR_16->process_packet = VAR_11;
  VAR_16->set_abs_params = VAR_12;
  VAR_16->nibble_commands = VAR_15;
  VAR_16->addr_command = VAR_1;
  break;
 case 128:
  VAR_16->hw_init = VAR_5;
  VAR_16->process_packet = VAR_10;
  VAR_16->decode_fields = VAR_3;
  VAR_16->set_abs_params = VAR_12;
  VAR_16->nibble_commands = VAR_14;
  VAR_16->addr_command = VAR_2;
  VAR_16->byte0 = 0xc8;
  VAR_16->mask0 = 0xc8;
  VAR_16->flags = 0;
  VAR_16->x_max = 1360;
  VAR_16->y_max = 660;
  break;
 }
}
