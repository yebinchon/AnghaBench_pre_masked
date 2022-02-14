
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int security_flags; scalar_t__ psm; scalar_t__ service_id; scalar_t__ ucd_security_flags; } ;
typedef TYPE_1__ tBTM_SEC_SERV_REC ;
typedef scalar_t__ UINT8 ;
struct TYPE_4__ {TYPE_1__* sec_serv_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;

UINT8 FUNC_1 (UINT8 VAR_4)
{
    tBTM_SEC_SERV_REC *VAR_5 = &VAR_3.sec_serv_rec[0];
    UINT8 VAR_6 = 0;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_5++) {

        if ((VAR_5->security_flags & VAR_0) && (VAR_5->psm != VAR_2) &&
                (!VAR_4 || (VAR_4 == VAR_5->service_id))) {
            FUNC_0("BTM_SEC_CLR[%d]: id %d\n", VAR_7, VAR_4);
            VAR_5->security_flags = 0;

            VAR_5->ucd_security_flags = 0;

            VAR_6++;
        }
    }

    return (VAR_6);
}
