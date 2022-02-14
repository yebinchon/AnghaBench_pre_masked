
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTA_SYS_CONN_STATUS ;
typedef scalar_t__ tBTA_PREF_ROLES ;
struct TYPE_5__ {scalar_t__ conn_state; scalar_t__ pref_role; int info; } ;
typedef TYPE_1__ tBTA_DM_PEER_DEVICE ;
typedef size_t UINT8 ;
struct TYPE_7__ {void* cur_av_count; } ;
struct TYPE_6__ {size_t app_id; size_t id; scalar_t__ cfg; } ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,void*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_10 ;
 TYPE_1__* FUNC_2 (int ) ;
 void* FUNC_3 () ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static void FUNC_4(tBTA_SYS_CONN_STATUS VAR_12, UINT8 VAR_13, UINT8 VAR_14, BD_ADDR VAR_15)
{
    UINT8 VAR_16;
    tBTA_PREF_ROLES VAR_17;
    tBTA_DM_PEER_DEVICE *VAR_18;

    VAR_18 = FUNC_2(VAR_15);
    if ( VAR_12 == VAR_8) {
        if (VAR_18) {




            if (VAR_18->conn_state != VAR_3) {
                VAR_18->conn_state = VAR_1;
            }

            for (VAR_16 = 1; VAR_16 <= VAR_11[0].app_id; VAR_16++) {
                if (((VAR_11[VAR_16].app_id == VAR_14) || (VAR_11[VAR_16].app_id == VAR_0))
                        && (VAR_11[VAR_16].id == VAR_13)) {
                    VAR_17 = VAR_11[VAR_16].cfg;

                    if (VAR_17 > VAR_18->pref_role ) {
                        VAR_18->pref_role = VAR_17;
                    }
                    break;
                }
            }
        }
    }

    if ((VAR_4 == VAR_13) || (VAR_5 == VAR_13)) {
        if ( VAR_12 == VAR_6) {
            if (VAR_18) {
                VAR_18->info |= VAR_2;
            }

            if (VAR_4 == VAR_13) {
                VAR_10.cur_av_count = FUNC_3();
            }
        } else if ( VAR_12 == VAR_7) {
            if (VAR_18) {
                VAR_18->info &= ~VAR_2;
            }


            if (VAR_4 == VAR_13) {
                VAR_10.cur_av_count = FUNC_3();
            }
        }
        FUNC_0("bta_dm_rm_cback:%d, status:%d", VAR_10.cur_av_count, VAR_12);
    }




    if ((VAR_12 != VAR_6) && (VAR_12 != VAR_7)) {
        FUNC_1(VAR_9);
    }
}
