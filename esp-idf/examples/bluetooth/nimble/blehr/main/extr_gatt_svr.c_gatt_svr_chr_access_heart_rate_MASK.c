
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct ble_gatt_access_ctxt {int om; TYPE_1__* chr; } ;
typedef int body_sens_loc ;
struct TYPE_2__ {int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int
FUNC_3(uint16_t VAR_3, uint16_t VAR_4,
                               struct ble_gatt_access_ctxt *VAR_5, void *VAR_6)
{

    static uint8_t VAR_7 = 0x01;
    uint16_t VAR_8;
    int VAR_9;

    VAR_8 = FUNC_1(VAR_5->chr->uuid);

    if (VAR_8 == VAR_2) {
        VAR_9 = FUNC_2(VAR_5->om, &VAR_7, sizeof(VAR_7));

        return VAR_9 == 0 ? 0 : VAR_0;
    }

    FUNC_0(0);
    return VAR_1;
}
