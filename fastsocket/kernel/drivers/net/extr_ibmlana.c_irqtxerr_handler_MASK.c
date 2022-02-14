
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int status; } ;
typedef TYPE_2__ tda_t ;
struct TYPE_6__ {int tx_fifo_errors; int tx_window_errors; int tx_aborted_errors; int tx_carrier_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_8__ {int currtxdescr; scalar_t__ txusedcnt; scalar_t__* txused; scalar_t__ tdastart; scalar_t__ base; } ;
typedef TYPE_3__ ibmlana_priv ;


 int FUNC_0 (struct net_device*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;
 TYPE_3__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 ibmlana_priv *VAR_7 = FUNC_2(VAR_6);
 tda_t VAR_8;


 FUNC_1(&VAR_8, VAR_7->base + VAR_7->tdastart + (VAR_7->currtxdescr * sizeof(tda_t)), sizeof(tda_t));


 VAR_6->stats.tx_errors++;
 if (VAR_8.status & (VAR_3 | VAR_0))
  VAR_6->stats.tx_carrier_errors++;
 if (VAR_8.status & VAR_1)
  VAR_6->stats.tx_aborted_errors++;
 if (VAR_8.status & VAR_4)
  VAR_6->stats.tx_window_errors++;
 if (VAR_8.status & VAR_2)
  VAR_6->stats.tx_fifo_errors++;


 VAR_7->txused[VAR_7->currtxdescr] = 0;
 VAR_7->txusedcnt--;


 if (VAR_7->txusedcnt > 0)
  FUNC_0(VAR_6, (VAR_7->currtxdescr + 1) % VAR_5);


 FUNC_3(VAR_6);
}
