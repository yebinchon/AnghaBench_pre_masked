
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p_new_srv_start; } ;
typedef TYPE_1__ tGATTS_PENDING_NEW_SRV_START ;
typedef int tGATTS_HNDL_RANGE ;
typedef int UINT16 ;
struct TYPE_6__ {int pending_new_srv_start_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

tGATTS_PENDING_NEW_SRV_START *FUNC_3(tGATTS_HNDL_RANGE *VAR_2)
{
    tGATTS_PENDING_NEW_SRV_START *VAR_3;

    FUNC_0 ("gatt_add_pending_new_srv_start");
    if ((VAR_3 = (tGATTS_PENDING_NEW_SRV_START *)FUNC_2((UINT16)sizeof(tGATTS_PENDING_NEW_SRV_START))) != ((void*)0)) {
        FUNC_0 ("enqueue a new pending new srv start");
        VAR_3->p_new_srv_start = VAR_2;
    FUNC_1(VAR_1.pending_new_srv_start_q, VAR_3, VAR_0);
    }
    return VAR_3;
}
