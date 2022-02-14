
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mode; scalar_t__ rtrans_tout; scalar_t__ mon_tout; } ;
struct TYPE_10__ {TYPE_3__ fcr; } ;
struct TYPE_7__ {scalar_t__ mode; } ;
struct TYPE_8__ {TYPE_1__ fcr; } ;
struct TYPE_11__ {TYPE_4__ our_cfg; TYPE_2__ peer_cfg; scalar_t__ out_cfg_fcr_present; } ;
typedef TYPE_5__ tL2C_CCB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2 (tL2C_CCB *VAR_3)
{
    FUNC_1(VAR_3 != ((void*)0));


    if (VAR_3->out_cfg_fcr_present) {




        if ((VAR_3->our_cfg.fcr.mode == VAR_0)
                || (VAR_3->peer_cfg.fcr.mode == VAR_0)) {

            VAR_3->our_cfg.fcr.mon_tout = VAR_1;
            VAR_3->our_cfg.fcr.rtrans_tout = VAR_2;
        } else {
            VAR_3->our_cfg.fcr.mon_tout = 0;
            VAR_3->our_cfg.fcr.rtrans_tout = 0;
        }

        FUNC_0 ("l2c_fcr_adj_monitor_retran_timeout: mon_tout:%d, rtrans_tout:%d",
                           VAR_3->our_cfg.fcr.mon_tout, VAR_3->our_cfg.fcr.rtrans_tout);
    }
}
