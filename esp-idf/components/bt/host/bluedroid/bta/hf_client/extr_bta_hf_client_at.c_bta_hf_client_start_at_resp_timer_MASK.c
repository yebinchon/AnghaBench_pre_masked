
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * p_cback; } ;
struct TYPE_6__ {scalar_t__ resp_timer_on; TYPE_3__ resp_timer; } ;
struct TYPE_7__ {TYPE_1__ at_cb; } ;
struct TYPE_9__ {TYPE_2__ scb; } ;
typedef int TIMER_CBACK ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(void)
{
    if (VAR_3.scb.at_cb.resp_timer_on) {
        FUNC_1 (&VAR_3.scb.at_cb.resp_timer);
    }

    VAR_3.scb.at_cb.resp_timer.p_cback = (TIMER_CBACK *)&VAR_2;
    FUNC_0(&VAR_3.scb.at_cb.resp_timer, 0, VAR_0);
    VAR_3.scb.at_cb.resp_timer_on = VAR_1;
}
