
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ble_gatt_error {int status; } ;
struct ble_gatt_attr {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(uint16_t VAR_1,
                     const struct ble_gatt_error *VAR_2,
                     struct ble_gatt_attr *VAR_3,
                     void *VAR_4)
{
    FUNC_0(VAR_0, "Subscribe complete; status=%d conn_handle=%d "
                "attr_handle=%d\n",
                VAR_2->status, VAR_1, VAR_3->handle);

    return 0;
}
