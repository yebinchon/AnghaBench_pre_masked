
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct i2400mu {int rx_size_auto_shrink; int do_autopm; scalar_t__ rx_size; int rx_wq; int rx_pending_count; int tx_wq; int urb_edc; int i2400m; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline
void FUNC_4(struct i2400mu *VAR_1)
{
 FUNC_2(&VAR_1->i2400m);
 FUNC_1(&VAR_1->urb_edc);
 FUNC_3(&VAR_1->tx_wq);
 FUNC_0(&VAR_1->rx_pending_count, 0);
 FUNC_3(&VAR_1->rx_wq);
 VAR_1->rx_size = VAR_0 - sizeof(struct skb_shared_info);
 FUNC_0(&VAR_1->do_autopm, 1);
 VAR_1->rx_size_auto_shrink = 1;
}
