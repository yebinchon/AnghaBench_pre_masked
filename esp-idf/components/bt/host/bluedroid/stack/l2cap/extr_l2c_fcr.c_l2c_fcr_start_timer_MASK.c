
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ in_use; } ;
struct TYPE_7__ {TYPE_6__ mon_retrans_timer; scalar_t__ wait_ack; } ;
struct TYPE_9__ {scalar_t__ rtrans_tout; scalar_t__ mon_tout; } ;
struct TYPE_8__ {TYPE_3__ fcr; } ;
struct TYPE_10__ {TYPE_1__ fcrb; TYPE_2__ our_cfg; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;

void FUNC_2 (tL2C_CCB *VAR_2)
{
    FUNC_0(VAR_2 != ((void*)0));
    UINT32 VAR_3;


    if (VAR_2->fcrb.wait_ack) {
        VAR_3 = (UINT32)VAR_2->our_cfg.fcr.mon_tout;
    } else {
        VAR_3 = (UINT32)VAR_2->our_cfg.fcr.rtrans_tout;
    }


    if (VAR_2->fcrb.mon_retrans_timer.in_use == 0) {
        FUNC_1 (&VAR_2->fcrb.mon_retrans_timer, VAR_0, VAR_3 * VAR_1 / 1000);
    }
}
