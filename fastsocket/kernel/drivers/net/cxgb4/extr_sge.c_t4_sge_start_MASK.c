
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_timer; int rx_timer; scalar_t__ ethtxq_rover; } ;
struct adapter {TYPE_1__ sge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1(struct adapter *VAR_3)
{
 VAR_3->sge.ethtxq_rover = 0;
 FUNC_0(&VAR_3->sge.rx_timer, VAR_2 + VAR_0);
 FUNC_0(&VAR_3->sge.tx_timer, VAR_2 + VAR_1);
}
