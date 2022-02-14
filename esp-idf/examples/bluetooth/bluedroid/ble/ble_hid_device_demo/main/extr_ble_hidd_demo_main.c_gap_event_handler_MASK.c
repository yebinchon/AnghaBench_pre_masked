
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_gap_ble_cb_event_t ;
struct TYPE_7__ {char* addr_type; int fail_reason; int success; int bd_addr; } ;
struct TYPE_6__ {int * bd_addr; } ;
struct TYPE_8__ {TYPE_2__ auth_cmpl; TYPE_1__ ble_req; } ;
struct TYPE_9__ {TYPE_3__ ble_security; } ;
typedef TYPE_4__ esp_ble_gap_cb_param_t ;
typedef int* esp_bd_addr_t ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(esp_gap_ble_cb_event_t VAR_4, esp_ble_gap_cb_param_t *VAR_5)
{
    switch (VAR_4) {
    case 130:
        FUNC_4(&VAR_2);
        break;
     case 128:
        for(int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
             FUNC_0(VAR_1, "%x:",VAR_5->ble_security.ble_req.bd_addr[VAR_6]);
        }
        FUNC_3(VAR_5->ble_security.ble_req.bd_addr, 1);
  break;
     case 129:
        VAR_3 = 1;
        esp_bd_addr_t VAR_7;
        FUNC_5(VAR_7, VAR_5->ble_security.auth_cmpl.bd_addr, sizeof(esp_bd_addr_t));
        FUNC_2(VAR_1, "remote BD_ADDR: %08x%04x", (VAR_7[0] << 24) + (VAR_7[1] << 16) + (VAR_7[2] << 8) + VAR_7[3],

                (VAR_7[4] << 8) + VAR_7[5]);
        FUNC_2(VAR_1, "address type = %d", VAR_5->ble_security.auth_cmpl.addr_type);
        FUNC_2(VAR_1, "pair status = %s",VAR_5->ble_security.auth_cmpl.success ? "success" : "fail");
        if(!VAR_5->ble_security.auth_cmpl.success) {
            FUNC_1(VAR_1, "fail reason = 0x%x",VAR_5->ble_security.auth_cmpl.fail_reason);
        }
        break;
    default:
        break;
    }
}
