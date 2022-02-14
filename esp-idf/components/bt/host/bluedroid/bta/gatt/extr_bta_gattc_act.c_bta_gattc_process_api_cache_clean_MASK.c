
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * p_srvc_cache; } ;
typedef TYPE_2__ tBTA_GATTC_SERV ;
struct TYPE_6__ {int remote_bda; } ;
struct TYPE_8__ {TYPE_1__ api_conn; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CB ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(tBTA_GATTC_CB *VAR_0, tBTA_GATTC_DATA *VAR_1)
{
    tBTA_GATTC_SERV *VAR_2 = FUNC_1(VAR_1->api_conn.remote_bda);
    FUNC_0(VAR_0);

    if (VAR_2 != ((void*)0) && VAR_2->p_srvc_cache != ((void*)0)) {

        FUNC_2(VAR_2->p_srvc_cache);
        VAR_2->p_srvc_cache = ((void*)0);
    }
}
