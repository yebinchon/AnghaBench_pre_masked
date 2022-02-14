
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ last_author_service_id; scalar_t__ p_cur_service; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int * BD_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;

void FUNC_3 (BD_ADDR VAR_1)
{
    tBTM_SEC_DEV_REC *VAR_2;

    if ((VAR_2 = FUNC_2 (VAR_1)) == ((void*)0)) {
        FUNC_1 ("btm_sec_clr_temp_auth_service() - no dev CB\n");
        return;
    }


    if (VAR_2->last_author_service_id != VAR_0 && VAR_2->p_cur_service) {
        FUNC_0 ("btm_sec_clr_auth_service_by_psm [clearing device: %02x:%02x:%02x:%02x:%02x:%02x]\n",
                         VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5]);

        VAR_2->last_author_service_id = VAR_0;
    }
}
