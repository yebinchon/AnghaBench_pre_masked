
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ att_lcid; int transport; int peer_bda; int tcb_idx; } ;
typedef TYPE_2__ tGATT_TCB ;
struct TYPE_8__ {int (* p_conn_cb ) (int ,int ,int ,int ,int ,int ) ;} ;
struct TYPE_10__ {int gatt_if; TYPE_1__ app_cb; scalar_t__ in_use; } ;
typedef TYPE_3__ tGATT_REG ;
typedef int tGATT_BG_CONN_DEV ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_11__ {TYPE_3__* cl_rcb; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(tGATT_TCB *VAR_5)
{
    UINT8 VAR_6;
    tGATT_REG *VAR_7;
    tGATT_BG_CONN_DEV *VAR_8 = ((void*)0);
    UINT16 VAR_9;

    VAR_8 = FUNC_2(VAR_5->peer_bda);


    for (VAR_6 = 0, VAR_7 = VAR_4.cl_rcb ; VAR_6 < VAR_1; VAR_6++, VAR_7++) {
        if (VAR_7->in_use) {
            if (VAR_8 && FUNC_3(VAR_8, VAR_7->gatt_if)) {
                FUNC_5(VAR_7->gatt_if, VAR_5, VAR_3, VAR_3);
            }

            if (VAR_7->app_cb.p_conn_cb) {
                VAR_9 = FUNC_0(VAR_5->tcb_idx, VAR_7->gatt_if);
                (*VAR_7->app_cb.p_conn_cb)(VAR_7->gatt_if, VAR_5->peer_bda, VAR_9,
                                           VAR_3, 0, VAR_5->transport);
            }
        }
    }


    if (FUNC_4(VAR_5) && VAR_5->att_lcid == VAR_2 ) {

        FUNC_1(VAR_5->peer_bda, VAR_0, VAR_5->transport);
    }
}
