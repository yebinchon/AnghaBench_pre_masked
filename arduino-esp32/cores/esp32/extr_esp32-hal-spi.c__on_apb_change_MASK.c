
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_3__* dev; } ;
typedef TYPE_4__ spi_t ;
typedef scalar_t__ apb_change_ev_t ;
struct TYPE_6__ {int clkdiv_pre; int clkcnt_n; int val; } ;
struct TYPE_5__ {scalar_t__ usr; } ;
struct TYPE_7__ {TYPE_2__ clock; TYPE_1__ cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void * VAR_1, apb_change_ev_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    spi_t * VAR_5 = (spi_t *)VAR_1;
    if(VAR_2 == VAR_0){
        FUNC_0();
        while(VAR_5->dev->cmd.usr);
    } else {
        VAR_5->dev->clock.val = FUNC_2(VAR_3 / ((VAR_5->dev->clock.clkdiv_pre + 1) * (VAR_5->dev->clock.clkcnt_n + 1)));
        FUNC_1();
    }
}
