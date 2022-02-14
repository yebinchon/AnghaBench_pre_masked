
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int simple_ble_cfg_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

simple_ble_cfg_t *FUNC_2(void)
{
    simple_ble_cfg_t *VAR_1 = (simple_ble_cfg_t *) FUNC_1(sizeof(simple_ble_cfg_t));
    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_0, "No memory for simple_ble_cfg_t");
        return ((void*)0);
    }
    return VAR_1;
}
