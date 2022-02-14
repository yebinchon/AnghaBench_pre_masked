
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ble_gatt_access_ctxt {int om; TYPE_1__* chr; } ;
struct TYPE_2__ {int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(uint16_t VAR_6, uint16_t VAR_7,
                                struct ble_gatt_access_ctxt *VAR_8, void *VAR_9)
{
    uint16_t VAR_10;
    int VAR_11;

    VAR_10 = FUNC_1(VAR_8->chr->uuid);

    if (VAR_10 == VAR_3) {
        VAR_11 = FUNC_2(VAR_8->om, VAR_5, FUNC_3(VAR_5));
        return VAR_11 == 0 ? 0 : VAR_0;
    }

    if (VAR_10 == VAR_2) {
        VAR_11 = FUNC_2(VAR_8->om, VAR_4, FUNC_3(VAR_4));
        return VAR_11 == 0 ? 0 : VAR_0;
    }

    FUNC_0(0);
    return VAR_1;
}
