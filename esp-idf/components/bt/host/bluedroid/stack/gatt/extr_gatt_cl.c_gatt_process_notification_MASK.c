
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int handle; scalar_t__ len; int value; int member_0; } ;
typedef TYPE_2__ tGATT_VALUE ;
struct TYPE_12__ {scalar_t__ ind_count; int tcb_idx; } ;
typedef TYPE_3__ tGATT_TCB ;
typedef int tGATT_STATUS ;
struct TYPE_10__ {int (* p_cmpl_cb ) (scalar_t__,scalar_t__,int ,int *) ;} ;
struct TYPE_13__ {TYPE_1__ app_cb; int gatt_if; scalar_t__ in_use; } ;
typedef TYPE_4__ tGATT_REG ;
typedef int tGATT_CL_COMPLETE ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_14__ {TYPE_4__* cl_rcb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int *) ;
 TYPE_8__ VAR_7 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ,int *) ;

void FUNC_10(tGATT_TCB *VAR_8, UINT8 VAR_9,
                               UINT16 VAR_10, UINT8 *VAR_11)
{
    tGATT_VALUE VAR_12 = {0};
    tGATT_REG *VAR_13;
    UINT16 VAR_14;
    tGATT_STATUS VAR_15;
    UINT8 *VAR_16 = VAR_11, VAR_17,
                     VAR_18 = (VAR_9 == VAR_4) ? VAR_1 : VAR_0;

    FUNC_2("gatt_process_notification ");

    if (VAR_10 < VAR_6) {
        FUNC_3("illegal notification PDU length, discard");
        return;
    }

    FUNC_4 (VAR_12.handle, VAR_16);
    VAR_12.len = VAR_10 - 2;
    FUNC_8 (VAR_12.value, VAR_16, VAR_12.len);

    if (!FUNC_1(VAR_12.handle)) {

        if (VAR_9 == VAR_3) {
            FUNC_5(VAR_8, 0, VAR_2, ((void*)0));
        }
        return;
    }

    if (VAR_18 == VAR_0) {
        if (VAR_8->ind_count) {





            FUNC_3("gatt_process_notification rcv Ind. but ind_count=%d (will reset ind_count)", VAR_8->ind_count);
        }
        VAR_8->ind_count = 0;
    }





    for (VAR_17 = 0, VAR_13 = VAR_7.cl_rcb; VAR_17 < VAR_5; VAR_17++, VAR_13++) {
        if (VAR_13->in_use && VAR_13->app_cb.p_cmpl_cb && (VAR_18 == VAR_0)) {
            VAR_8->ind_count++;
        }
    }

    if (VAR_18 == VAR_0) {

        if (VAR_8->ind_count > 0) {
            FUNC_7(VAR_8);
        } else {
            FUNC_5(VAR_8, 0, VAR_2, ((void*)0));
        }
    }

    VAR_15 = FUNC_6(VAR_8);
    for (VAR_17 = 0, VAR_13 = VAR_7.cl_rcb; VAR_17 < VAR_5; VAR_17++, VAR_13++) {
        if (VAR_13->in_use && VAR_13->app_cb.p_cmpl_cb) {
            VAR_14 = FUNC_0(VAR_8->tcb_idx, VAR_13->gatt_if);
            (*VAR_13->app_cb.p_cmpl_cb) (VAR_14, VAR_18, VAR_15, (tGATT_CL_COMPLETE *)&VAR_12);
        }
    }

}
