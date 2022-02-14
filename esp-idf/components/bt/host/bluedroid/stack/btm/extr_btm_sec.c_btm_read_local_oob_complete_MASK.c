
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int r; int c; } ;
typedef TYPE_2__ tBTM_SP_LOC_OOB ;
typedef int tBTM_SP_EVT_DATA ;
typedef scalar_t__ UINT8 ;
struct TYPE_4__ {int (* p_sp_callback ) (int ,int *) ;} ;
struct TYPE_6__ {TYPE_1__ api; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (int ,int *) ;

void FUNC_3 (UINT8 *VAR_5)
{
    tBTM_SP_LOC_OOB VAR_6;
    UINT8 VAR_7 = *VAR_5++;

    FUNC_0 ("btm_read_local_oob_complete:%d\n", VAR_7);
    if (VAR_7 == VAR_3) {
        VAR_6.status = VAR_2;
        FUNC_1(VAR_6.c, VAR_5);
        FUNC_1(VAR_6.r, VAR_5);
    } else {
        VAR_6.status = VAR_0;
    }

    if (VAR_4.api.p_sp_callback) {
        (*VAR_4.api.p_sp_callback) (VAR_1, (tBTM_SP_EVT_DATA *)&VAR_6);
    }
}
