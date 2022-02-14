
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ max_lat; int min_loc_to; int min_rmt_to; } ;
typedef TYPE_2__ tBTA_DM_SSR_SPEC ;
typedef size_t UINT8 ;
struct TYPE_11__ {size_t count; TYPE_1__* conn_srvc; } ;
struct TYPE_10__ {size_t app_id; scalar_t__ id; size_t spec_idx; } ;
struct TYPE_9__ {size_t ssr; } ;
struct TYPE_7__ {scalar_t__ id; scalar_t__ app_id; int peer_bdaddr; } ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_6__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int *) ;
 TYPE_5__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static void FUNC_4(BD_ADDR VAR_8)
{
    tBTA_DM_SSR_SPEC *VAR_9, *VAR_10;
    UINT8 VAR_11, VAR_12;
    int VAR_13 = VAR_1;


    for (VAR_11 = 0; VAR_11 < VAR_4.count ; VAR_11++) {
        if (!FUNC_2(VAR_4.conn_srvc[VAR_11].peer_bdaddr, VAR_8)) {

            for (VAR_12 = 1; VAR_12 <= VAR_5[0].app_id; VAR_12++) {

                if ((VAR_5[VAR_12].id == VAR_4.conn_srvc[VAR_11].id)
                        && ((VAR_5[VAR_12].app_id == VAR_0 )
                            || (VAR_5[VAR_12].app_id == VAR_4.conn_srvc[VAR_11].app_id))) {
                    FUNC_0("bta_dm_pm_ssr conn_srvc id:%d, app_id:%d",
                                       VAR_4.conn_srvc[VAR_11].id, VAR_4.conn_srvc[VAR_11].app_id);
                    break;
                }
            }


            VAR_10 = &VAR_7[VAR_6[VAR_5[VAR_12].spec_idx].ssr];
            VAR_9 = &VAR_7[VAR_13];
            if (VAR_10->max_lat < VAR_9->max_lat ||
                    (VAR_13 == VAR_1 && VAR_6[VAR_5[VAR_12].spec_idx].ssr != VAR_1)) {
                VAR_13 = VAR_6[VAR_5[VAR_12].spec_idx].ssr;
            }

        }
    }

    VAR_9 = &VAR_7[VAR_13];
    FUNC_0("bta_dm_pm_ssr:%d, lat:%d", VAR_13, VAR_9->max_lat);
    if (VAR_9->max_lat) {

        FUNC_1 (VAR_8, VAR_9->max_lat,
                          VAR_9->min_rmt_to, VAR_9->min_loc_to);
    }
}
