
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {scalar_t__ inq_scan_window; scalar_t__ inq_scan_period; int connectable_mode; scalar_t__ discoverable_mode; } ;
struct TYPE_6__ {TYPE_1__ btm_inq_vars; } ;
struct TYPE_5__ {int (* get_is_ready ) () ;} ;
typedef int LAP ;
typedef int DEV_CLASS ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * FUNC_3 () ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int VAR_12 ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_3__ VAR_21 ;
 int FUNC_7 (int,int * const) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 () ;

tBTM_STATUS FUNC_13 (UINT16 VAR_24, UINT16 VAR_25, UINT16 VAR_26)
{
    UINT8 VAR_27 = 0;
    UINT16 VAR_28;
    UINT8 *VAR_29;
    UINT8 VAR_30, VAR_31;
    DEV_CLASS VAR_32;
    LAP VAR_33[2];
    BOOLEAN VAR_34;
    BOOLEAN VAR_35;

    FUNC_5 ("BTM_SetDiscoverability\n");


    if (VAR_24 > VAR_8) {
        return (VAR_6);
    }


    if (!FUNC_10()->get_is_ready()) {
        return (VAR_4);
    }


    if (!VAR_25) {
        VAR_25 = VAR_3;
    }

    if (!VAR_26) {
        VAR_26 = VAR_2;
    }

    FUNC_5 ("BTM_SetDiscoverability: mode %d [NonDisc-0, Lim-1, Gen-2], window 0x%04x, interval 0x%04x\n",
                   VAR_24, VAR_25, VAR_26);



    if (VAR_24 != VAR_9) {

        if (VAR_25 < VAR_17 ||
                VAR_25 > VAR_15 ||
                VAR_26 < VAR_16 ||
                VAR_26 > VAR_14 ||
                VAR_25 > VAR_26) {
            return (VAR_6);
        }
    }


    if (VAR_24 != VAR_9) {
        if (VAR_24 & VAR_7) {

            FUNC_11 (VAR_33[0], VAR_23, VAR_19);
            FUNC_11 (VAR_33[1], VAR_22, VAR_19);

            if (!FUNC_7 (2, (LAP * const) VAR_33)) {
                return (VAR_10);
            }
        } else {
            if (!FUNC_7 (1, (LAP * const) &VAR_22)) {
                return (VAR_10);
            }
        }

        VAR_27 |= VAR_13;
    }


    if ((VAR_25 != VAR_21.btm_inq_vars.inq_scan_window) ||
            (VAR_26 != VAR_21.btm_inq_vars.inq_scan_period)) {
        if (FUNC_8 (VAR_26, VAR_25)) {
            VAR_21.btm_inq_vars.inq_scan_window = VAR_25;
            VAR_21.btm_inq_vars.inq_scan_period = VAR_26;
        } else {
            return (VAR_10);
        }
    }

    if (VAR_21.btm_inq_vars.connectable_mode & VAR_1) {
        VAR_27 |= VAR_18;
    }

    if (FUNC_9 (VAR_27)) {
        VAR_21.btm_inq_vars.discoverable_mode &= (~VAR_5);
        VAR_21.btm_inq_vars.discoverable_mode |= VAR_24;
    } else {
        return (VAR_10);
    }


    VAR_29 = FUNC_3();
    FUNC_2(VAR_28, VAR_29);
    VAR_34 = (VAR_24 & VAR_7) ? VAR_20 : VAR_12;
    VAR_35 = (VAR_28 & VAR_0) ? VAR_20 : VAR_12;
    if (VAR_34 ^ VAR_35) {
        FUNC_1(VAR_31, VAR_29 );
        FUNC_0(VAR_30, VAR_29 );
        if (VAR_34) {
            VAR_28 |= VAR_0;
        } else {
            VAR_28 &= ~VAR_0;
        }

        FUNC_6(VAR_32, VAR_31, VAR_30, VAR_28);
        (void) FUNC_4 (VAR_32);
    }

    return (VAR_11);
}
