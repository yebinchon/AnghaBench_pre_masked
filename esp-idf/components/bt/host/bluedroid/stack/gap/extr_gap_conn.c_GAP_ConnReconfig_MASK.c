
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tL2CAP_CFG_INFO ;
struct TYPE_3__ {scalar_t__ con_state; int connection_id; int cfg; } ;
typedef TYPE_1__ tGAP_CCB ;
typedef int UINT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;

UINT16 FUNC_2 (UINT16 VAR_3, tL2CAP_CFG_INFO *VAR_4)
{
    tGAP_CCB *VAR_5 = FUNC_1 (VAR_3);

    if (!VAR_5) {
        return (VAR_2);
    }

    VAR_5->cfg = *VAR_4;

    if (VAR_5->con_state == VAR_1) {
        FUNC_0 (VAR_5->connection_id, VAR_4);
    }

    return (VAR_0);
}
