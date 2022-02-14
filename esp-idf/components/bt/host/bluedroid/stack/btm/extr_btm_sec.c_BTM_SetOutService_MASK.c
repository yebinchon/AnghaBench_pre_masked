
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int security_flags; scalar_t__ service_id; scalar_t__ orig_mx_chan_id; int mx_proto_id; int psm; } ;
typedef TYPE_1__ tBTM_SEC_SERV_REC ;
struct TYPE_6__ {TYPE_1__* p_cur_service; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_7__ {TYPE_1__* p_out_serv; TYPE_1__* sec_serv_rec; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ,int ,scalar_t__) ;
 TYPE_4__ VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;

void FUNC_2(BD_ADDR VAR_3, UINT8 VAR_4, UINT32 VAR_5)
{
    tBTM_SEC_DEV_REC *VAR_6;
    tBTM_SEC_SERV_REC *VAR_7 = &VAR_2.sec_serv_rec[0];

    VAR_2.p_out_serv = VAR_7;
    VAR_6 = FUNC_1 (VAR_3);

    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++, VAR_7++) {
        if ((VAR_7->security_flags & VAR_0)
                && (VAR_7->service_id == VAR_4)
                && (VAR_7->orig_mx_chan_id == VAR_5)) {
            FUNC_0("BTM_SetOutService p_out_serv id %d, psm 0x%04x, proto_id %d, chan_id %d\n",
                          VAR_7->service_id, VAR_7->psm, VAR_7->mx_proto_id, VAR_7->orig_mx_chan_id);
            VAR_2.p_out_serv = VAR_7;
            if (VAR_6) {
                VAR_6->p_cur_service = VAR_7;
            }
            break;
        }
    }
}
