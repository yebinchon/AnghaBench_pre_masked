
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ num_clcb; int * p_srvc_cache; scalar_t__ connected; } ;
typedef TYPE_2__ tBTA_GATTC_SERV ;
struct TYPE_9__ {int remote_bda; } ;
struct TYPE_11__ {TYPE_1__ api_conn; } ;
typedef TYPE_3__ tBTA_GATTC_DATA ;
struct TYPE_12__ {scalar_t__ state; TYPE_2__* p_srcb; scalar_t__ in_use; } ;
typedef TYPE_4__ tBTA_GATTC_CLCB ;
typedef int tBTA_GATTC_CB ;
typedef scalar_t__ UINT8 ;
struct TYPE_13__ {TYPE_4__* clcb; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_8__ VAR_5 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(tBTA_GATTC_CB *VAR_6, tBTA_GATTC_DATA *VAR_7)
{
    tBTA_GATTC_SERV *VAR_8 = FUNC_1(VAR_7->api_conn.remote_bda);
    tBTA_GATTC_CLCB *VAR_9 = &VAR_5.clcb[0];
    BOOLEAN VAR_10 = VAR_3;
    UINT8 VAR_11;
    FUNC_0(VAR_6);

    if (VAR_8 != ((void*)0)) {

        if (VAR_8->connected && VAR_8->num_clcb != 0) {
            for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11 ++, VAR_9 ++) {
                if (VAR_9->in_use && VAR_9->p_srcb == VAR_8) {
                    VAR_10 = VAR_4;
                    break;
                }
            }
            if (VAR_10) {

                if(VAR_9->state == VAR_1) {
                    FUNC_2(VAR_9, VAR_2, ((void*)0));
                }
                return;
            }
        }

        if (VAR_8->p_srvc_cache != ((void*)0)) {
            FUNC_3(VAR_8->p_srvc_cache);
            VAR_8->p_srvc_cache = ((void*)0);
        }
    }
}
