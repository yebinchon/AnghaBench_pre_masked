
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int esp_err_t ;
struct TYPE_3__ {scalar_t__* att_tbl; } ;
struct TYPE_4__ {int gatt_if; int enabled; TYPE_1__ hidd_inst; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_4 ;

esp_err_t FUNC_4(void)
{
    uint16_t VAR_5 = VAR_4.hidd_inst.att_tbl[VAR_2];
    if (!VAR_4.enabled) {
        FUNC_0(VAR_3, "HID device profile already initialized");
        return VAR_1;
    }

    if(VAR_5 != 0) {
 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
    } else {
 return VAR_0;
   }


    FUNC_1(VAR_4.gatt_if);

    return VAR_1;
}
