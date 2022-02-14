
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int rx_irq; int tx_irq; } ;
struct ldc_channel {int flags; int lock; TYPE_1__ cfg; int id; int hs_state; int rx_num_entries; int rx_ra; int tx_num_entries; int tx_ra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct ldc_channel*) ;
 int FUNC_1 (struct ldc_channel*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (int ,int ,int ) ;
 unsigned long FUNC_5 (int ,int ,int ) ;

int FUNC_6(struct ldc_channel *VAR_10)
{
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 if (VAR_10->cfg.mode == VAR_7)
  return -VAR_0;

 if (!(VAR_10->flags & VAR_2) ||
     !(VAR_10->flags & VAR_4))
  return -VAR_0;

 FUNC_2(&VAR_10->lock, VAR_12);

 VAR_13 = -VAR_1;
 VAR_11 = FUNC_5(VAR_10->id, 0, 0);
 if (VAR_11)
  goto out_err;

 VAR_11 = FUNC_5(VAR_10->id, VAR_10->tx_ra, VAR_10->tx_num_entries);
 if (VAR_11)
  goto out_err;

 VAR_11 = FUNC_4(VAR_10->id, 0, 0);
 if (VAR_11)
  goto out_err;

 VAR_11 = FUNC_4(VAR_10->id, VAR_10->rx_ra, VAR_10->rx_num_entries);
 if (VAR_11)
  goto out_err;

 FUNC_1(VAR_10, VAR_8);
 VAR_10->hs_state = VAR_6;
 VAR_10->flags |= VAR_5;

 FUNC_3(&VAR_10->lock, VAR_12);

 return 0;

out_err:
 FUNC_5(VAR_10->id, 0, 0);
 FUNC_4(VAR_10->id, 0, 0);
 FUNC_0(VAR_10->cfg.tx_irq, VAR_10);
 FUNC_0(VAR_10->cfg.rx_irq, VAR_10);
 VAR_10->flags &= ~(VAR_3 |
         VAR_4);
 FUNC_1(VAR_10, VAR_9);

 FUNC_3(&VAR_10->lock, VAR_12);

 return VAR_13;
}
