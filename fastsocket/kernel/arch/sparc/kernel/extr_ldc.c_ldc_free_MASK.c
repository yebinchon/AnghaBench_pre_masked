
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_irq; int rx_irq; } ;
struct ldc_channel {int flags; struct ldc_channel* mssbuf; int list; int rx_base; int rx_num_entries; int tx_base; int tx_num_entries; int id; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ldc_channel*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ldc_channel*) ;
 int FUNC_4 (struct ldc_channel*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

void FUNC_7(struct ldc_channel *VAR_3)
{
 if (VAR_3->flags & VAR_1) {
  FUNC_0(VAR_3->cfg.rx_irq, VAR_3);
  FUNC_0(VAR_3->cfg.tx_irq, VAR_3);
 }

 if (VAR_3->flags & VAR_2) {
  FUNC_6(VAR_3->id, 0, 0);
  FUNC_5(VAR_3->id, 0, 0);
  VAR_3->flags &= ~VAR_2;
 }
 if (VAR_3->flags & VAR_0) {
  FUNC_1(VAR_3->tx_num_entries, VAR_3->tx_base);
  FUNC_1(VAR_3->rx_num_entries, VAR_3->rx_base);
  VAR_3->flags &= ~VAR_0;
 }

 FUNC_2(&VAR_3->list);

 FUNC_3(VAR_3->mssbuf);

 FUNC_4(VAR_3);

 FUNC_3(VAR_3);
}
