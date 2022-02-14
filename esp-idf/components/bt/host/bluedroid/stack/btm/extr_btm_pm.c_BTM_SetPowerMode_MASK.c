
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_8__ {int mode; scalar_t__ max; scalar_t__ min; } ;
typedef TYPE_2__ tBTM_PM_PWR_MD ;
typedef int tBTM_PM_MODE ;
struct TYPE_9__ {int state; scalar_t__ interval; int chg_ind; TYPE_2__* req_mode; } ;
typedef TYPE_3__ tBTM_PM_MCB ;
typedef size_t UINT8 ;
struct TYPE_10__ {int pm_pend_link; TYPE_1__* pm_reg_db; TYPE_3__* pm_mode_db; } ;
struct TYPE_7__ {int mask; } ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t* FUNC_0 () ;
 int VAR_12 ;
 int FUNC_1 (char*,size_t,int,int) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_5__ VAR_16 ;
 int FUNC_3 (int*) ;
 size_t* VAR_17 ;
 size_t* VAR_18 ;
 int FUNC_4 (size_t,int,TYPE_2__*) ;

tBTM_STATUS FUNC_5 (UINT8 VAR_19, BD_ADDR VAR_20, tBTM_PM_PWR_MD *VAR_21)
{
    UINT8 *VAR_22;
    int VAR_23, VAR_24;
    tBTM_PM_MCB *VAR_25 = ((void*)0);
    tBTM_PM_MODE VAR_26;
    int VAR_27;


    if (VAR_19 >= VAR_2) {
        VAR_19 = VAR_8;
    }

    if (VAR_21 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_1( "BTM_SetPowerMode: pm_id %d BDA: %08x mode:0x%x", VAR_19,
                   (VAR_20[2] << 24) + (VAR_20[3] << 16) + (VAR_20[4] << 8) + VAR_20[5], VAR_21->mode);


    VAR_26 = VAR_21->mode & ~VAR_5;

    VAR_24 = FUNC_3(VAR_20);
    if (VAR_24 == VAR_14) {
        return (VAR_13);
    }

    VAR_25 = &(VAR_16.pm_mode_db[VAR_24]);

    if (VAR_26 != VAR_4) {

        VAR_23 = VAR_26 - VAR_6;
        VAR_22 = FUNC_0();
        if ( !(VAR_22[ VAR_18[VAR_23] ] & VAR_17[VAR_23] ) ) {
            return VAR_3;
        }
    }

    if (VAR_26 == VAR_25->state) {

        if ( (VAR_26 == VAR_4) ||
                ((VAR_21->mode & VAR_5) && (VAR_21->max >= VAR_25->interval) && (VAR_21->min <= VAR_25->interval)) ||
                ((VAR_21->mode & VAR_5) == 0 && (VAR_21->max >= VAR_25->interval)) ) {
            FUNC_2( "BTM_SetPowerMode: mode:0x%x interval %d max:%d, min:%d", VAR_21->mode, VAR_25->interval, VAR_21->max, VAR_21->min);
            return VAR_12;
        }
    }

    VAR_27 = VAR_19;
    if (VAR_19 == VAR_8) {
        VAR_27 = VAR_2;
    }


    if ( ((VAR_19 != VAR_8) &&
            (VAR_16.pm_reg_db[VAR_19].mask & VAR_7))
            || ((VAR_19 == VAR_8) && (VAR_16.pm_pend_link != VAR_14)) ) {

        FUNC_2( "BTM_SetPowerMode: Saving cmd acl_ind %d temp_pm_id %d", VAR_24, VAR_27);


        VAR_16.pm_reg_db[VAR_27].mask |= VAR_7;
        *(&VAR_25->req_mode[VAR_27]) = *((tBTM_PM_PWR_MD *)VAR_21);
        VAR_25->chg_ind = VAR_15;
    }


    FUNC_2( "btm_pm state:0x%x, pm_pend_link: %d", VAR_25->state, VAR_16.pm_pend_link);


    if ( (VAR_25->state == VAR_10) ||
            (VAR_25->state == VAR_11) ||
            (VAR_16.pm_pend_link != VAR_14) ) {
        if (VAR_24 != VAR_16.pm_pend_link) {

            VAR_25->state |= VAR_9;
            FUNC_2( "btm_pm state stored:%d", VAR_24);
        }
        return VAR_0;
    }



    return FUNC_4(VAR_19, VAR_24, VAR_21);
}
