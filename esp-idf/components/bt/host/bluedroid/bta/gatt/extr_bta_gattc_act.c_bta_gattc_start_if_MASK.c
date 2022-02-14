
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int client_if; } ;
struct TYPE_5__ {TYPE_1__ int_start_if; } ;
typedef TYPE_2__ tBTA_GATTC_DATA ;
typedef int tBTA_GATTC_CB ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

void FUNC_4(tBTA_GATTC_CB *VAR_0, tBTA_GATTC_DATA *VAR_1)
{
    FUNC_2(VAR_0);

    if (FUNC_3(VAR_1->int_start_if.client_if) != ((void*)0) ) {
        FUNC_1(VAR_1->int_start_if.client_if);
    } else {
        FUNC_0("Unable to start app.: Unknown interface =%d", VAR_1->int_start_if.client_if );
    }
}
