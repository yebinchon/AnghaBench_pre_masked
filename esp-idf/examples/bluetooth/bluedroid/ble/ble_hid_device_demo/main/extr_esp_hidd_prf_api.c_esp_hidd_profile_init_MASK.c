
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hidd_le_env_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

esp_err_t FUNC_2(void)
{
     if (VAR_3.enabled) {
        FUNC_0(VAR_2, "HID device profile already initialized");
        return VAR_0;
    }

    FUNC_1(&VAR_3, 0, sizeof(hidd_le_env_t));
    VAR_3.enabled = 1;
    return VAR_1;
}
