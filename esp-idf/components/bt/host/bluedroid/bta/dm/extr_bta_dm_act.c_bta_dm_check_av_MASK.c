
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_CMPL_CB ;
struct TYPE_5__ {scalar_t__ conn_state; int info; int peer_bdaddr; } ;
typedef TYPE_2__ tBTA_DM_PEER_DEVICE ;
typedef size_t UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {size_t count; TYPE_2__* peer_device; } ;
struct TYPE_6__ {scalar_t__ rs_event; TYPE_1__ device_list; scalar_t__ cur_av_count; } ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,size_t,scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static BOOLEAN FUNC_4(UINT16 VAR_11)
{
    BOOLEAN VAR_12 = VAR_5;
    BOOLEAN VAR_13 = VAR_5;
    UINT8 VAR_14;
    tBTA_DM_PEER_DEVICE *VAR_15;
    FUNC_0("bta_dm_check_av:%d", VAR_9.cur_av_count);
    if (VAR_9.cur_av_count) {
        for (VAR_14 = 0; VAR_14 < VAR_9.device_list.count; VAR_14++) {
            VAR_15 = &VAR_9.device_list.peer_device[VAR_14];
            FUNC_1("[%d]: state:%d, info:x%x, avoid_rs %d",
                               VAR_14, VAR_15->conn_state, VAR_15->info, VAR_12);
            if ((VAR_15->conn_state == VAR_1) && (VAR_15->info & VAR_2) &&
                    (VAR_12 == VAR_5)) {

                if (VAR_4 == FUNC_2 (VAR_15->peer_bdaddr, VAR_7, (tBTM_CMPL_CB *)VAR_10)) {

                    VAR_9.rs_event = VAR_11;
                    VAR_13 = VAR_8;
                }

                FUNC_3(VAR_3, 0, VAR_6, VAR_15->peer_bdaddr);
                break;
            }
        }
    }
    return VAR_13;
}
