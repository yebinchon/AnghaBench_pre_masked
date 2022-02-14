
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int notif_type; int * bd_addr; } ;
typedef TYPE_2__ tBTM_SP_KEYPRESS ;
typedef int tBTM_SP_EVT_DATA ;
typedef int UINT8 ;
struct TYPE_4__ {int (* p_sp_callback ) (int ,int *) ;} ;
struct TYPE_6__ {TYPE_1__ api; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,int *) ;

void FUNC_2 (UINT8 *VAR_2)
{
    tBTM_SP_KEYPRESS VAR_3;
    UINT8 *VAR_4;


    if (VAR_1.api.p_sp_callback) {
        VAR_4 = VAR_3.bd_addr;

        FUNC_0 (VAR_4, VAR_2);
        VAR_3.notif_type = *VAR_2;

        (*VAR_1.api.p_sp_callback) (VAR_0, (tBTM_SP_EVT_DATA *)&VAR_3);
    }
}
