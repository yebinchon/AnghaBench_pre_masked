
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_new_srv_start; } ;
typedef TYPE_1__ tGATTS_PENDING_NEW_SRV_START ;
struct TYPE_6__ {scalar_t__ svc_inst; int svc_uuid; int app_uuid128; } ;
typedef TYPE_2__ tGATTS_HNDL_RANGE ;
typedef int tBT_UUID ;
typedef int list_t ;
typedef int list_node_t ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int pending_new_srv_start_q; } ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *) ;
 int const* FUNC_5 (int *) ;
 int * FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;

tGATTS_PENDING_NEW_SRV_START *FUNC_8(tBT_UUID *VAR_1, tBT_UUID *VAR_2, UINT16 VAR_3)
{
    tGATTS_PENDING_NEW_SRV_START *VAR_4 = ((void*)0);

    if (FUNC_2(VAR_0.pending_new_srv_start_q)) {
        return ((void*)0);
 }

    list_t *VAR_5 = FUNC_1(VAR_0.pending_new_srv_start_q);
    for (const list_node_t *VAR_6 = FUNC_4(VAR_5); VAR_6 != FUNC_5(VAR_5);
         VAR_6 = FUNC_6(VAR_6)) {
        VAR_4 = (tGATTS_PENDING_NEW_SRV_START *)FUNC_7(VAR_6);
        tGATTS_HNDL_RANGE *VAR_7 = VAR_4->p_new_srv_start;
        if (FUNC_3(*VAR_1, VAR_7->app_uuid128)
            && FUNC_3 (*VAR_2, VAR_7->svc_uuid)
            && (VAR_3 == VAR_7->svc_inst)) {
            FUNC_0("gatt_sr_is_new_srv_chg: Yes");
            break;
        }
    }

    return VAR_4;
}
