
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device_role; int custom_secure_version; int setting_2; int setting_1; int module_version; } ;
typedef TYPE_1__ device_desc_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(device_desc_t *VAR_1)
{
    FUNC_0(VAR_0, "module_version = %d", VAR_1->module_version);
    if (VAR_1->device_role == 0) {
        FUNC_0(VAR_0, "device_role = None");
    } else if (VAR_1->device_role == 1) {
        FUNC_0(VAR_0, "device_role = Master");
    } else if (VAR_1->device_role == 2) {
        FUNC_0(VAR_0, "device_role = Slave");
    } else {
        FUNC_0(VAR_0, "device_role = Not supported");
    }
    FUNC_0(VAR_0, "setting_1 = %d", VAR_1->setting_1);
    FUNC_0(VAR_0, "setting_2 = %d", VAR_1->setting_2);
    FUNC_0(VAR_0, "custom_secure_version = %d", VAR_1->custom_secure_version);
}
