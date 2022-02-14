
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ws_transport_opcodes_t ;
struct TYPE_3__ {int read_opcode; } ;
typedef TYPE_1__ transport_ws_t ;
typedef int esp_transport_handle_t ;


 TYPE_1__* FUNC_0 (int ) ;

ws_transport_opcodes_t FUNC_1(esp_transport_handle_t VAR_0)
{
    transport_ws_t *VAR_1 = FUNC_0(VAR_0);
    return VAR_1->read_opcode;
}
