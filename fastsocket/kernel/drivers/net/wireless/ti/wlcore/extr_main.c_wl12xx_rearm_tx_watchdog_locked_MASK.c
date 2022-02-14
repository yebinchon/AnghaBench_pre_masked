
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_watchdog_timeout; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct wl1271 {scalar_t__ tx_allocated_blocks; TYPE_2__ conf; int tx_watchdog_work; int hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct wl1271 *VAR_0)
{

 if (VAR_0->tx_allocated_blocks == 0)
  return;

 FUNC_0(&VAR_0->tx_watchdog_work);
 FUNC_1(VAR_0->hw, &VAR_0->tx_watchdog_work,
  FUNC_2(VAR_0->conf.tx.tx_watchdog_timeout));
}
