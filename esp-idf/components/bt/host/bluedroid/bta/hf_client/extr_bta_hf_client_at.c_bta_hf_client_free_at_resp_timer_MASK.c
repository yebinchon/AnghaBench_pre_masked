
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int resp_timer; int resp_timer_on; } ;
struct TYPE_5__ {TYPE_1__ at_cb; } ;
struct TYPE_6__ {TYPE_2__ scb; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void)
{
    VAR_1.scb.at_cb.resp_timer_on = VAR_0;
    FUNC_0 (&VAR_1.scb.at_cb.resp_timer);
}
