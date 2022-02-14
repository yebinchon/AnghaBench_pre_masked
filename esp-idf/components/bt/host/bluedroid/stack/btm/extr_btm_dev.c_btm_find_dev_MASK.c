
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int pseudo_addr; } ;
struct TYPE_7__ {int sec_flags; TYPE_1__ ble; int bd_addr; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
struct TYPE_8__ {TYPE_2__* sec_dev_rec; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;

tBTM_SEC_DEV_REC *FUNC_2(BD_ADDR VAR_4)
{
    tBTM_SEC_DEV_REC *VAR_5 = &VAR_3.sec_dev_rec[0];

    if (VAR_4) {
        for (uint8_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_5++) {
            if (VAR_5->sec_flags & VAR_1) {
                if (!FUNC_1 (VAR_5->bd_addr, VAR_4, VAR_0)) {
                    return (VAR_5);
                }



                if (!FUNC_1(VAR_5->ble.pseudo_addr, VAR_4, VAR_0)) {
                    return (VAR_5);
                }

                if (FUNC_0(VAR_4, VAR_5)) {
                    return (VAR_5);
                }

            }
        }
    }
    return (((void*)0));
}
