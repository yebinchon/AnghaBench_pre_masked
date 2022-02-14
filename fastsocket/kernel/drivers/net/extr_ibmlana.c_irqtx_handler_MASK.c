
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ length; } ;
typedef TYPE_2__ tda_t ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_8__ {int currtxdescr; scalar_t__ txusedcnt; scalar_t__* txused; scalar_t__ tdastart; scalar_t__ base; } ;
typedef TYPE_3__ ibmlana_priv ;


 int FUNC_0 (struct net_device*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;
 TYPE_3__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 ibmlana_priv *VAR_2 = FUNC_2(VAR_1);
 tda_t VAR_3;


 FUNC_1(&VAR_3, VAR_2->base + VAR_2->tdastart + (VAR_2->currtxdescr * sizeof(tda_t)), sizeof(tda_t));


 VAR_1->stats.tx_packets++;
 VAR_1->stats.tx_bytes += VAR_3.length;


 VAR_2->txused[VAR_2->currtxdescr] = 0;
 VAR_2->txusedcnt--;


 if (VAR_2->txusedcnt > 0)
  FUNC_0(VAR_1, (VAR_2->currtxdescr + 1) % VAR_0);


 FUNC_3(VAR_1);
}
