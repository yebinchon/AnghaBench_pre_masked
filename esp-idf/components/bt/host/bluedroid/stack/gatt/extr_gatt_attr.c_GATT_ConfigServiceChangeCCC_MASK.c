
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ccc_stage; int connected; int conn_id; } ;
typedef TYPE_1__ tGATT_PROFILE_CLCB ;
typedef int tBT_TRANSPORT ;
struct TYPE_7__ {int gatt_if; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ,int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

void FUNC_5 (BD_ADDR VAR_4, BOOLEAN VAR_5, tBT_TRANSPORT VAR_6)
{
    tGATT_PROFILE_CLCB *VAR_7 = FUNC_4 (VAR_4, VAR_6);

    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_3 (0, VAR_4, VAR_6);
    }

    if (VAR_7 == ((void*)0)) {
        return;
    }

    if (FUNC_1 (VAR_3.gatt_if, VAR_4, &VAR_7->conn_id, VAR_6)) {
        VAR_7->connected = VAR_2;
    }

    FUNC_0(VAR_3.gatt_if, VAR_4, VAR_0, VAR_2, VAR_6);
    VAR_7->ccc_stage = VAR_1;

    if (!VAR_7->connected) {

        return;
    }

    VAR_7->ccc_stage ++;
    FUNC_2(VAR_7);
}
