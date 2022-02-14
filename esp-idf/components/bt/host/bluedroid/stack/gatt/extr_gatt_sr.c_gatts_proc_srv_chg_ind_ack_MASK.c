
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int peer_bda; } ;
typedef TYPE_2__ tGATT_TCB ;
struct TYPE_12__ {int srv_chg; } ;
typedef TYPE_3__ tGATTS_SRV_CHG_REQ ;
struct TYPE_13__ {int srv_changed; } ;
typedef TYPE_4__ tGATTS_SRV_CHG ;
struct TYPE_10__ {int (* p_srv_chg_callback ) (int ,TYPE_3__*,int *) ;} ;
struct TYPE_14__ {TYPE_1__ cb_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_9__ VAR_2 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_4__*,int) ;
 int FUNC_3 (int ,TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_4(tGATT_TCB *VAR_3 )
{
    tGATTS_SRV_CHG_REQ VAR_4;
    tGATTS_SRV_CHG *VAR_5 = ((void*)0);

    FUNC_0("gatts_proc_srv_chg_ind_ack");

    if ((VAR_5 = FUNC_1(VAR_3->peer_bda)) != ((void*)0)) {
        FUNC_0("NV update set srv chg = FALSE");
        VAR_5->srv_changed = VAR_0;
        FUNC_2(&VAR_4.srv_chg, VAR_5, sizeof(tGATTS_SRV_CHG));
        if (VAR_2.cb_info.p_srv_chg_callback) {
            (*VAR_2.cb_info.p_srv_chg_callback)(VAR_1, &VAR_4, ((void*)0));
        }
    }
}
