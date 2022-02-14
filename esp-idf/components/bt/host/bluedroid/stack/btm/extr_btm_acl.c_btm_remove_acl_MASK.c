
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef int tBTM_STATUS ;
struct TYPE_3__ {scalar_t__ rs_disc_pending; scalar_t__ sec_state; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

tBTM_STATUS FUNC_4 (BD_ADDR VAR_7, tBT_TRANSPORT VAR_8)
{
    UINT16 VAR_9 = FUNC_0(VAR_7, VAR_8);
    tBTM_STATUS VAR_10 = VAR_4;

    FUNC_1 ("btm_remove_acl\n");

    tBTM_SEC_DEV_REC *VAR_11 = FUNC_2 (VAR_7);


    if (VAR_11 && (VAR_11->rs_disc_pending == VAR_2)) {
        VAR_11->rs_disc_pending = VAR_1;
    } else

    {
        if (VAR_9 != 0xFFFF && VAR_11 &&
                VAR_11->sec_state != VAR_3) {
            if (!FUNC_3 (VAR_9, VAR_6)) {
                VAR_10 = VAR_0;
            }
        } else {
            VAR_10 = VAR_5;
        }
    }

    return VAR_10;
}
