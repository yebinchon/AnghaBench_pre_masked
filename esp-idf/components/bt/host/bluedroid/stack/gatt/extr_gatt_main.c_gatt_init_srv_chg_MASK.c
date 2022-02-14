
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int num_clients; int srv_chg; } ;
typedef TYPE_2__ tGATTS_SRV_CHG_RSP ;
struct TYPE_11__ {int client_read_index; } ;
typedef TYPE_3__ tGATTS_SRV_CHG_REQ ;
typedef int tGATTS_SRV_CHG ;
typedef int UINT8 ;
struct TYPE_9__ {scalar_t__ (* p_srv_chg_callback ) (int ,TYPE_3__*,TYPE_2__*) ;} ;
struct TYPE_12__ {TYPE_1__ cb_info; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int *) ;
 TYPE_8__ VAR_4 ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,TYPE_2__*) ;

void FUNC_6 (void)
{
    tGATTS_SRV_CHG_REQ VAR_5;
    tGATTS_SRV_CHG_RSP VAR_6;
    BOOLEAN VAR_7;
    UINT8 VAR_8, VAR_9;
    tGATTS_SRV_CHG VAR_10;

    FUNC_0("gatt_init_srv_chg");
    if (VAR_4.cb_info.p_srv_chg_callback) {
        VAR_7 = (*VAR_4.cb_info.p_srv_chg_callback)(VAR_2, ((void*)0), &VAR_6);

        if (VAR_7 && VAR_6.num_clients) {
            FUNC_0("gatt_init_srv_chg num_srv_chg_clt_clients=%d", VAR_6.num_clients);
            VAR_8 = VAR_6.num_clients;
            VAR_9 = 1;
            while ((VAR_9 <= VAR_8) && VAR_7) {
                VAR_5.client_read_index = VAR_9;
                if ((VAR_7 = (*VAR_4.cb_info.p_srv_chg_callback)(VAR_1, &VAR_5, &VAR_6)) == VAR_3) {
                    FUNC_3(&VAR_10, &VAR_6.srv_chg , sizeof(tGATTS_SRV_CHG));
                    if (FUNC_2(&VAR_10) == ((void*)0)) {
                        FUNC_1("Unable to add a service change client");
                        VAR_7 = VAR_0;
                    }
                }
                VAR_9++;
            }
        }
    } else {
        FUNC_0("gatt_init_srv_chg callback not registered yet");
    }
}
