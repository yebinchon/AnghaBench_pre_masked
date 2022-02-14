
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; TYPE_5__* cl_rcb; } ;
typedef TYPE_1__ tBTA_GATTC_CB ;
typedef size_t UINT8 ;
struct TYPE_7__ {int client_if; scalar_t__ in_use; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5(tBTA_GATTC_CB *VAR_4)
{
    UINT8 VAR_5;

    FUNC_0("bta_gattc_disable");

    if (VAR_4->state != VAR_3) {
        FUNC_1("not enabled or disable in pogress");
        return;
    }

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 ++) {
        if (VAR_4->cl_rcb[VAR_5].in_use) {
            VAR_4->state = VAR_2;





                FUNC_2(VAR_4, &VAR_4->cl_rcb[VAR_5]);



        }
    }


    if (VAR_4->state != VAR_2) {
        VAR_4->state = VAR_1;
        FUNC_4(VAR_4, 0, sizeof(tBTA_GATTC_CB));
    }
}
