
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int security_flags; int psm; scalar_t__ service_id; } ;
typedef TYPE_1__ tBTM_SEC_SERV_REC ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {TYPE_1__* sec_serv_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,scalar_t__) ;
 TYPE_2__ VAR_2 ;

UINT8 FUNC_1 (UINT16 VAR_3)
{
    tBTM_SEC_SERV_REC *VAR_4 = &VAR_2.sec_serv_rec[0];
    UINT8 VAR_5 = 0;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_4++) {

        if ((VAR_4->security_flags & VAR_0) && (VAR_4->psm == VAR_3) ) {
            FUNC_0("BTM_SEC_CLR[%d]: id %d\n", VAR_6, VAR_4->service_id);
            VAR_4->security_flags = 0;
            VAR_5++;
        }
    }
    FUNC_0("btm_sec_clr_service_by_psm psm:0x%x num_freed:%d\n", VAR_3, VAR_5);

    return (VAR_5);
}
