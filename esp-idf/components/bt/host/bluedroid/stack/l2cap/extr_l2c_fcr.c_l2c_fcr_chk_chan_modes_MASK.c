
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int allowed_modes; } ;
struct TYPE_7__ {TYPE_2__ ertm_info; TYPE_1__* p_lcb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int UINT8 ;
struct TYPE_5__ {int peer_ext_fea; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

UINT8 FUNC_2 (tL2C_CCB *VAR_4)
{
    FUNC_1(VAR_4 != ((void*)0));


    if (!(VAR_4->p_lcb->peer_ext_fea & VAR_0)) {
        VAR_4->ertm_info.allowed_modes &= ~VAR_2;
    }

    if (!(VAR_4->p_lcb->peer_ext_fea & VAR_1)) {
        VAR_4->ertm_info.allowed_modes &= ~VAR_3;
    }


    if (!VAR_4->ertm_info.allowed_modes) {
        FUNC_0 ("L2CAP - Peer does not support our desired channel types");
    }

    return (VAR_4->ertm_info.allowed_modes);
}
