
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_irq; int tx_irq; } ;
struct ldc_channel {scalar_t__ state; int lock; TYPE_1__ cfg; int flags; int id; int hs_state; int tx_head; int tx_acked; int chan_state; int tx_tail; int rx_num_entries; int rx_ra; int tx_num_entries; int tx_ra; int tx_irq_name; int rx_irq_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ldc_channel*) ;
 int VAR_11 ;
 int FUNC_2 (struct ldc_channel*,int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int,int ,struct ldc_channel*) ;
 int FUNC_4 (int ,int ,char*,char const*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned long FUNC_7 (int ,int ,int ) ;
 unsigned long FUNC_8 (int ,int *,int *,int *) ;
 unsigned long FUNC_9 (int ,int ,int ) ;

int FUNC_10(struct ldc_channel *VAR_13, const char *VAR_14)
{
 unsigned long VAR_15, VAR_16;
 int VAR_17 = -VAR_1;

 if (!VAR_14 ||
     (VAR_13->state != VAR_10))
  return -VAR_1;

 FUNC_4(VAR_13->rx_irq_name, VAR_8, "%s RX", VAR_14);
 FUNC_4(VAR_13->tx_irq_name, VAR_8, "%s TX", VAR_14);

 VAR_17 = FUNC_3(VAR_13->cfg.rx_irq, VAR_11,
     VAR_4 | VAR_3,
     VAR_13->rx_irq_name, VAR_13);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_13->cfg.tx_irq, VAR_12,
     VAR_4 | VAR_3,
     VAR_13->tx_irq_name, VAR_13);
 if (VAR_17) {
  FUNC_1(VAR_13->cfg.rx_irq, VAR_13);
  return VAR_17;
 }


 FUNC_5(&VAR_13->lock, VAR_16);

 FUNC_0(VAR_13->cfg.rx_irq);
 FUNC_0(VAR_13->cfg.tx_irq);

 VAR_13->flags |= VAR_5;

 VAR_17 = -VAR_2;
 VAR_15 = FUNC_9(VAR_13->id, 0, 0);
 if (VAR_15)
  goto out_free_irqs;

 VAR_15 = FUNC_9(VAR_13->id, VAR_13->tx_ra, VAR_13->tx_num_entries);
 if (VAR_15)
  goto out_free_irqs;

 VAR_15 = FUNC_7(VAR_13->id, 0, 0);
 if (VAR_15)
  goto out_unmap_tx;

 VAR_15 = FUNC_7(VAR_13->id, VAR_13->rx_ra, VAR_13->rx_num_entries);
 if (VAR_15)
  goto out_unmap_tx;

 VAR_13->flags |= VAR_6;

 VAR_15 = FUNC_8(VAR_13->id,
     &VAR_13->tx_head,
     &VAR_13->tx_tail,
     &VAR_13->chan_state);
 VAR_17 = -VAR_0;
 if (VAR_15)
  goto out_unmap_rx;

 VAR_13->tx_acked = VAR_13->tx_head;

 VAR_13->hs_state = VAR_7;
 FUNC_2(VAR_13, VAR_9);

 FUNC_6(&VAR_13->lock, VAR_16);

 return 0;

out_unmap_rx:
 VAR_13->flags &= ~VAR_6;
 FUNC_7(VAR_13->id, 0, 0);

out_unmap_tx:
 FUNC_9(VAR_13->id, 0, 0);

out_free_irqs:
 VAR_13->flags &= ~VAR_5;
 FUNC_1(VAR_13->cfg.tx_irq, VAR_13);
 FUNC_1(VAR_13->cfg.rx_irq, VAR_13);

 FUNC_6(&VAR_13->lock, VAR_16);

 return VAR_17;
}
