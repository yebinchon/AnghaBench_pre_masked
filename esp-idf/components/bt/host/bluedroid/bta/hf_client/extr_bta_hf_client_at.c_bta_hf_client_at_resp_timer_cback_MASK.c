
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int resp_timer_on; } ;
struct TYPE_5__ {TYPE_1__ at_cb; } ;
struct TYPE_6__ {TYPE_2__ scb; } ;
typedef int TIMER_LIST_ENT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2 (TIMER_LIST_ENT *VAR_3)
{
    if (VAR_3) {
        VAR_2.scb.at_cb.resp_timer_on = VAR_1;

        FUNC_0("HFPClient: AT response timeout, disconnecting");

        FUNC_1(VAR_0, ((void*)0));
    }
}
