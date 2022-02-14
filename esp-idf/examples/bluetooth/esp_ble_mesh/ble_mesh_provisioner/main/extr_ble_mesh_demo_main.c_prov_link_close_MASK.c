
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ esp_ble_mesh_prov_bearer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(esp_ble_mesh_prov_bearer_t VAR_2, uint8_t VAR_3)
{
    FUNC_0(VAR_1, "%s link close, reason 0x%02x",
             VAR_2 == VAR_0 ? "PB-ADV" : "PB-GATT", VAR_3);
}
