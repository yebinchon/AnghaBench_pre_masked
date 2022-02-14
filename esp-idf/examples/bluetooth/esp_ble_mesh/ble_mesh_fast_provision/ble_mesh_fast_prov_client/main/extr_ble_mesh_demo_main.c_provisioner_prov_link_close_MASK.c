
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ esp_ble_mesh_prov_bearer_t ;
struct TYPE_2__ {int max_node_num; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1(esp_ble_mesh_prov_bearer_t VAR_3, uint8_t VAR_4)
{
    FUNC_0(VAR_1, "%s link close, reason 0x%02x",
             VAR_3 == VAR_0 ? "PB-ADV" : "PB-GATT", VAR_4);

    if (VAR_3 == VAR_0 && VAR_4 != 0x00) {
        VAR_2.max_node_num++;
    }
}
