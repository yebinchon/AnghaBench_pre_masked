
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int current_addr_valid; int current_addr; scalar_t__ current_addr_type; } ;
struct TYPE_8__ {TYPE_2__ ble; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
struct TYPE_6__ {int scan_activity; } ;
struct TYPE_9__ {TYPE_1__ ble_ctr_cb; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__*,int ) ;
 int FUNC_8 (int ,int ,int ) ;

void FUNC_9 (UINT8 *VAR_4)
{
    BD_ADDR VAR_5;
    UINT8 VAR_6 = 0, *VAR_7 = VAR_4;
    UINT8 VAR_8 = 0;
    UINT8 VAR_9;
    UINT8 VAR_10;







    if (!FUNC_1(VAR_3.ble_ctr_cb.scan_activity)) {
        return;
    }


    FUNC_3(VAR_9, VAR_7);

    while (VAR_9--) {

        FUNC_3 (VAR_6, VAR_7);
        FUNC_3 (VAR_8, VAR_7);
        FUNC_2 (VAR_5, VAR_7);
        FUNC_4(VAR_5, VAR_8, VAR_6, VAR_7);
        FUNC_3(VAR_10, VAR_7);


        VAR_7 += VAR_10 + 1;
    }
}
