
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pending_enc_clcb; } ;
typedef TYPE_3__ tGATT_TCB ;
struct TYPE_13__ {int p_clcb; } ;
typedef TYPE_4__ tGATT_PENDING_ENC_CLCB ;
typedef size_t UINT8 ;
struct TYPE_14__ {TYPE_2__* cl_rcb; } ;
struct TYPE_10__ {int (* p_enc_cmpl_cb ) (int ,int ) ;} ;
struct TYPE_11__ {int gatt_if; TYPE_1__ app_cb; scalar_t__ in_use; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ) ;
 TYPE_9__ VAR_4 ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(BD_ADDR VAR_5)
{
    tGATT_TCB *VAR_6;
    UINT8 VAR_7 = 0;

    if ((VAR_6 = FUNC_3(VAR_5, VAR_0)) != ((void*)0)) {
        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
            if (VAR_4.cl_rcb[VAR_7].in_use && VAR_4.cl_rcb[VAR_7].app_cb.p_enc_cmpl_cb) {
                (*VAR_4.cl_rcb[VAR_7].app_cb.p_enc_cmpl_cb)(VAR_4.cl_rcb[VAR_7].gatt_if, VAR_5);
            }
        }

        if (FUNC_4(VAR_6) == VAR_2) {
            FUNC_6(VAR_6, VAR_3);

            size_t VAR_8 = FUNC_2(VAR_6->pending_enc_clcb);
            for (; VAR_8 > 0; VAR_8--) {
                tGATT_PENDING_ENC_CLCB *VAR_9 =
                    (tGATT_PENDING_ENC_CLCB *)FUNC_1(VAR_6->pending_enc_clcb, 0);
                if (VAR_9 != ((void*)0)) {
                    FUNC_5(VAR_9->p_clcb);
                    FUNC_7(VAR_9);
                } else {
                    break;
                }
            }
        }
    } else {
        FUNC_0("notify GATT for encryption completion of unknown device");
    }
    return;
}
