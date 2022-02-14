
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ conn_service; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
struct TYPE_8__ {int api_result; } ;
typedef TYPE_2__ tBTA_AG_DATA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(tBTA_AG_SCB *VAR_1, tBTA_AG_DATA *VAR_2)
{
    if (VAR_1->conn_service == VAR_0) {
        FUNC_1(VAR_1, &VAR_2->api_result);
    } else {
        FUNC_0(VAR_1, &VAR_2->api_result);
    }
}
