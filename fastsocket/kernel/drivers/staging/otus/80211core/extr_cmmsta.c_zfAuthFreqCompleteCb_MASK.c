
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ connectState; int connectTimer; } ;
struct TYPE_4__ {TYPE_1__ sta; int tick; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_3)
{
    FUNC_3(VAR_3);
    FUNC_1();

    FUNC_2(VAR_3);

    if (VAR_2->sta.connectState == VAR_1)
    {
        FUNC_0("ZM_STA_CONN_STATE_ASSOCIATE");
        VAR_2->sta.connectTimer = VAR_2->tick;
        VAR_2->sta.connectState = VAR_0;
    }

    FUNC_4(VAR_3);
    return;
}
