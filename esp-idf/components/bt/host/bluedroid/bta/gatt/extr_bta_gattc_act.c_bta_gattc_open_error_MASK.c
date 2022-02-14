
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_GATTC_DATA ;
struct TYPE_3__ {int transport; int bta_conn_id; int bda; int p_rcb; } ;
typedef TYPE_1__ tBTA_GATTC_CLCB ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;

void FUNC_3(tBTA_GATTC_CLCB *VAR_1, tBTA_GATTC_DATA *VAR_2)
{
    FUNC_1(VAR_2);

    FUNC_0("Connection already opened. wrong state");

    FUNC_2(VAR_1->p_rcb,
                              VAR_0,
                              VAR_1->bda,
                              VAR_1->bta_conn_id,
                              VAR_1->transport,
                              0);
}
