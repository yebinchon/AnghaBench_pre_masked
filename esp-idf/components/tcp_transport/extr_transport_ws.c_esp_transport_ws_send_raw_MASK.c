
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws_transport_opcodes_t ;
typedef int uint8_t ;
typedef int * esp_transport_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int ,char const*,int,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(esp_transport_handle_t VAR_4, ws_transport_opcodes_t VAR_5, const char *VAR_6, int VAR_7, int VAR_8)
{
    uint8_t VAR_9 = FUNC_3(VAR_5);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1, "Transport must be a valid ws handle");
        return VAR_0;
    }
    FUNC_0(VAR_1, "Sending raw ws message with opcode %d", VAR_9);
    return FUNC_2(VAR_4, VAR_9 | VAR_2, VAR_3, VAR_6, VAR_7, VAR_8);
}
