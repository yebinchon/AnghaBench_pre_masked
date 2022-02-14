
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mode; } ;
struct TYPE_6__ {TYPE_1__ fcr; } ;
struct TYPE_7__ {TYPE_2__ peer_cfg; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_3__* FUNC_1 (int *,int ) ;

UINT8 FUNC_2 (UINT16 VAR_1)
{
    tL2C_CCB *VAR_2 = FUNC_1 (((void*)0), VAR_1);

    if (VAR_2) {
        FUNC_0 ("L2CA_GetChnlFcrMode() returns mode %d", VAR_2->peer_cfg.fcr.mode);
        return (VAR_2->peer_cfg.fcr.mode);
    }

    FUNC_0 ("L2CA_GetChnlFcrMode() returns mode L2CAP_FCR_BASIC_MODE");
    return (VAR_0);
}
