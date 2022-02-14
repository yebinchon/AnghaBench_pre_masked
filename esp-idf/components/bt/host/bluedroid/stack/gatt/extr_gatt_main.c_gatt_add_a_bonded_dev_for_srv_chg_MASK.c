
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* srv_changed; int bda; } ;
struct TYPE_10__ {TYPE_1__ srv_chg; } ;
typedef TYPE_3__ tGATTS_SRV_CHG_REQ ;
struct TYPE_11__ {void* srv_changed; int bda; } ;
typedef TYPE_4__ tGATTS_SRV_CHG ;
struct TYPE_9__ {int (* p_srv_chg_callback ) (int ,TYPE_3__*,int *) ;} ;
struct TYPE_12__ {TYPE_2__ cb_info; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_4__*) ;
 TYPE_6__ VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int *) ;

void FUNC_3 (BD_ADDR VAR_4)
{
    tGATTS_SRV_CHG_REQ VAR_5;
    tGATTS_SRV_CHG VAR_6;

    FUNC_1(VAR_6.bda, VAR_4, VAR_0);
    VAR_6.srv_changed = VAR_1;
    if (FUNC_0(&VAR_6) != ((void*)0)) {
        FUNC_1(VAR_5.srv_chg.bda, VAR_4, VAR_0);
        VAR_5.srv_chg.srv_changed = VAR_1;
        if (VAR_3.cb_info.p_srv_chg_callback) {
            (*VAR_3.cb_info.p_srv_chg_callback)(VAR_2, &VAR_5, ((void*)0));
        }
    }
}
