
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t conn_service; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_11__ {TYPE_1__ disc_result; } ;
typedef TYPE_3__ tBTA_AG_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int * VAR_2 ;

void FUNC_2(tBTA_AG_SCB *VAR_3, tBTA_AG_DATA *VAR_4)
{

    if (VAR_4->disc_result.status == VAR_1 ||
        VAR_4->disc_result.status == VAR_0) {

        FUNC_1(VAR_3, VAR_2[VAR_3->conn_service]);
    }

    FUNC_0(VAR_3, VAR_4);
}
