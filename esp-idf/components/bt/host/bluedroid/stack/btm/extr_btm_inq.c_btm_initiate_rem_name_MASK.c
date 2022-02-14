
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_6__ {int clock_offset; int page_scan_mode; int page_scan_rep_mode; } ;
struct TYPE_7__ {TYPE_1__ results; } ;
typedef TYPE_2__ tBTM_INQ_INFO ;
struct TYPE_8__ {scalar_t__ remname_active; int rmt_name_timer_ent; int remname_bda; int * p_remname_cmpl_cb; } ;
typedef TYPE_3__ tBTM_INQUIRY_VAR_ST ;
typedef int tBTM_CMPL_CB ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_9__ {TYPE_3__ btm_inq_vars; } ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

tBTM_STATUS FUNC_4 (BD_ADDR VAR_14, tBTM_INQ_INFO *VAR_15,
                                    UINT8 VAR_16, UINT32 VAR_17, tBTM_CMPL_CB *VAR_18)
{
    tBTM_INQUIRY_VAR_ST *VAR_19 = &VAR_13.btm_inq_vars;
    BOOLEAN VAR_20;


    if (!FUNC_0()) {
        return (VAR_8);
    }

    if (VAR_16 == VAR_7) {
        VAR_20 = FUNC_1 (VAR_14, VAR_11,
                                          VAR_10, 0);
        if (VAR_20) {
            return VAR_3;
        } else {
            return VAR_5;
        }
    }

    else if (VAR_16 == VAR_6) {
        if (VAR_19->remname_active) {
            return (VAR_1);
        } else {

            VAR_19->p_remname_cmpl_cb = VAR_18;
            FUNC_3(VAR_19->remname_bda, VAR_14, VAR_0);
            FUNC_2 (&VAR_19->rmt_name_timer_ent,
                             VAR_9,
                             VAR_17);


            if (VAR_15) {
                VAR_20 = FUNC_1 (VAR_14,
                                                  VAR_15->results.page_scan_rep_mode,
                                                  VAR_15->results.page_scan_mode,
                                                  (UINT16)(VAR_15->results.clock_offset |
                                                          VAR_2));
            } else {
                VAR_20 = FUNC_1 (VAR_14, VAR_11,
                                                  VAR_10, 0);
            }
            if (VAR_20) {
                VAR_19->remname_active = VAR_12;
                return VAR_3;
            } else {
                return VAR_5;
            }
        }
    } else {
        return VAR_4;
    }
}
