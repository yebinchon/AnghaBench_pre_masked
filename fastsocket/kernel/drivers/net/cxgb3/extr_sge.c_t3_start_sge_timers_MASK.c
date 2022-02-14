
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ function; } ;
struct sge_qset {TYPE_2__ rx_reclaim_timer; TYPE_2__ tx_reclaim_timer; } ;
struct TYPE_3__ {struct sge_qset* qs; } ;
struct adapter {TYPE_1__ sge; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;

void FUNC_1(struct adapter *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  struct sge_qset *VAR_6 = &VAR_4->sge.qs[VAR_5];

 if (VAR_6->tx_reclaim_timer.function)
  FUNC_0(&VAR_6->tx_reclaim_timer, VAR_3 + VAR_2);

 if (VAR_6->rx_reclaim_timer.function)
  FUNC_0(&VAR_6->rx_reclaim_timer, VAR_3 + VAR_0);
 }
}
