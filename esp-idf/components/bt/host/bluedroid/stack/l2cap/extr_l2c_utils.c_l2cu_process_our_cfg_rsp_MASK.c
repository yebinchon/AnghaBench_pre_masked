
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int qos; scalar_t__ qos_present; } ;
struct TYPE_9__ {TYPE_1__ peer_cfg; } ;
typedef TYPE_2__ tL2C_CCB ;
struct TYPE_10__ {scalar_t__ qos_present; int qos; } ;
typedef TYPE_3__ tL2CAP_CFG_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;

void FUNC_1 (tL2C_CCB *VAR_1, tL2CAP_CFG_INFO *VAR_2)
{

    if ( (VAR_2->qos_present) && (VAR_1->peer_cfg.qos_present) ) {
        VAR_1->peer_cfg.qos = VAR_2->qos;
    } else {
        VAR_2->qos_present = VAR_0;
    }

    FUNC_0 (VAR_1, VAR_2);
}
