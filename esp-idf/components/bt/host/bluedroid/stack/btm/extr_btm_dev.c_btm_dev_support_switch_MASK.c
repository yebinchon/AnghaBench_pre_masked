
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int** features; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef size_t UINT8 ;
struct TYPE_5__ {scalar_t__ (* supports_master_slave_role_switch ) () ;} ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

BOOLEAN FUNC_6 (BD_ADDR VAR_4)
{
    tBTM_SEC_DEV_REC *VAR_5;
    UINT8 VAR_6;
    BOOLEAN VAR_7 = VAR_3;



    if (FUNC_3(VAR_4)) {
        return (VAR_1);
    }

    VAR_5 = FUNC_2 (VAR_4);
    if (VAR_5 && FUNC_4()->supports_master_slave_role_switch()) {
        if (FUNC_1(VAR_5->features[VAR_2])) {
            FUNC_0("btm_dev_support_switch return TRUE (feature found)\n");
            return (VAR_3);
        }


        for (VAR_6 = 0 ; VAR_6 < VAR_0 ; VAR_6++) {
            if (VAR_5->features[VAR_2][VAR_6] != 0x00) {
                VAR_7 = VAR_1;
                break;
            }
        }


        if (VAR_7) {
            FUNC_0("btm_dev_support_switch return TRUE (feature empty)\n");
            return (VAR_3);
        }
    }

    FUNC_0("btm_dev_support_switch return FALSE\n");
    return (VAR_1);
}
