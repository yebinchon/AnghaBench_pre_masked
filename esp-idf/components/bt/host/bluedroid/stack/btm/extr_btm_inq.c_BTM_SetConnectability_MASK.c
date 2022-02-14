
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_4__ {scalar_t__ page_scan_window; scalar_t__ page_scan_period; int discoverable_mode; scalar_t__ connectable_mode; } ;
typedef TYPE_1__ tBTM_INQUIRY_VAR_ST ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_6__ {TYPE_1__ btm_inq_vars; } ;
struct TYPE_5__ {int (* get_is_ready ) () ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 TYPE_3__ VAR_16 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 () ;

tBTM_STATUS FUNC_5 (UINT16 VAR_17, UINT16 VAR_18, UINT16 VAR_19)
{
    UINT8 VAR_20 = 0;
    tBTM_INQUIRY_VAR_ST *VAR_21 = &VAR_16.btm_inq_vars;

    FUNC_0 ("BTM_SetConnectability\n");


    if (VAR_17 != VAR_7 && VAR_17 != VAR_0) {
        return (VAR_6);
    }


    if (!FUNC_3()->get_is_ready()) {
        return (VAR_4);
    }


    if (!VAR_18) {
        VAR_18 = VAR_3;
    }

    if (!VAR_19) {
        VAR_19 = VAR_2;
    }

    FUNC_0 ("BTM_SetConnectability: mode %d [NonConn-0, Conn-1], window 0x%04x, interval 0x%04x\n",
                   VAR_17, VAR_18, VAR_19);



    if (VAR_17 == VAR_0) {

        if (VAR_18 < VAR_14 ||
                VAR_18 > VAR_12 ||
                VAR_19 < VAR_13 ||
                VAR_19 > VAR_11 ||
                VAR_18 > VAR_19) {
            return (VAR_6);
        }

        VAR_20 |= VAR_15;
    }

    if ((VAR_18 != VAR_21->page_scan_window) ||
            (VAR_19 != VAR_21->page_scan_period)) {
        VAR_21->page_scan_window = VAR_18;
        VAR_21->page_scan_period = VAR_19;
        if (!FUNC_1 (VAR_19, VAR_18)) {
            return (VAR_8);
        }
    }


    if (VAR_21->discoverable_mode & VAR_5) {
        VAR_20 |= VAR_10;
    }

    if (FUNC_2 (VAR_20)) {
        VAR_21->connectable_mode &= (~VAR_1);
        VAR_21->connectable_mode |= VAR_17;

        return (VAR_9);
    }

    return (VAR_8);
}
