
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int srv_chg; } ;
typedef TYPE_2__ tGATTS_SRV_CHG_REQ ;
struct TYPE_9__ {scalar_t__ srv_changed; } ;
typedef TYPE_3__ tGATTS_SRV_CHG ;
typedef int list_t ;
typedef int list_node_t ;
struct TYPE_7__ {int (* p_srv_chg_callback ) (int ,TYPE_2__*,int *) ;} ;
struct TYPE_10__ {TYPE_1__ cb_info; int srv_chg_clt_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_6__ VAR_2 ;
 int * FUNC_3 (int *) ;
 int const* FUNC_4 (int *) ;
 int * FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *,TYPE_3__*,int) ;
 int FUNC_8 (int ,TYPE_2__*,int *) ;

void FUNC_9(void)
{
    FUNC_0 ("gatt_set_srv_chg");

    if (FUNC_2(VAR_2.srv_chg_clt_q)) {
        return;
 }

    list_t *VAR_3 = FUNC_1(VAR_2.srv_chg_clt_q);
    for (const list_node_t *VAR_4 = FUNC_3(VAR_3); VAR_4 != FUNC_4(VAR_3);
         VAR_4 = FUNC_5(VAR_4)) {
        FUNC_0 ("found a srv_chg clt");

        tGATTS_SRV_CHG *VAR_5 = (tGATTS_SRV_CHG *)FUNC_6(VAR_4);
        if (!VAR_5->srv_changed) {
            FUNC_0("set srv_changed to TRUE");
            VAR_5->srv_changed = VAR_1;
            tGATTS_SRV_CHG_REQ VAR_6;
            FUNC_7(&VAR_6.srv_chg, VAR_5, sizeof(tGATTS_SRV_CHG));
            if (VAR_2.cb_info.p_srv_chg_callback) {
                (*VAR_2.cb_info.p_srv_chg_callback)(VAR_0,&VAR_6, ((void*)0));
   }
        }
    }
}
