
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bda; } ;
struct TYPE_8__ {TYPE_1__ srv_chg; } ;
typedef TYPE_3__ tGATTS_SRV_CHG_REQ ;
typedef int tGATTS_SRV_CHG ;
struct TYPE_7__ {int (* p_srv_chg_callback ) (int ,TYPE_3__*,int *) ;} ;
struct TYPE_9__ {int srv_chg_clt_q; TYPE_2__ cb_info; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_5__ VAR_2 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_3__*,int *) ;

void FUNC_6(BD_ADDR VAR_3)
{
    tGATTS_SRV_CHG *VAR_4;
    tGATTS_SRV_CHG_REQ VAR_5;

    FUNC_0 ("gatt_delete_dev_from_srv_chg_clt_list");
    if ((VAR_4 = FUNC_2(VAR_3)) != ((void*)0)) {
        if (VAR_2.cb_info.p_srv_chg_callback) {

            FUNC_3(VAR_5.srv_chg.bda, VAR_3, VAR_0);
            (*VAR_2.cb_info.p_srv_chg_callback)(VAR_1, &VAR_5, ((void*)0));
        }
        FUNC_4(FUNC_1(VAR_2.srv_chg_clt_q,
                                                      VAR_4));
    }

}
