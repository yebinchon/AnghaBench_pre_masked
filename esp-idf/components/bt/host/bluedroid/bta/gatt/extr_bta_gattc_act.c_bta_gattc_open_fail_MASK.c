
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_GATTC_DATA ;
struct TYPE_4__ {int transport; int bta_conn_id; int bda; int p_rcb; } ;
typedef TYPE_1__ tBTA_GATTC_CLCB ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;

void FUNC_3(tBTA_GATTC_CLCB *VAR_1, tBTA_GATTC_DATA *VAR_2)
{
    FUNC_0(VAR_2);

    FUNC_2(VAR_1->p_rcb,
                              VAR_0,
                              VAR_1->bda,
                              VAR_1->bta_conn_id,
                              VAR_1->transport,
                              0);

    FUNC_1(VAR_1);
}
