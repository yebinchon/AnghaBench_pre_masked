
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_lock; int tx_slot; } ;
struct ath9k_htc_priv {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath9k_htc_priv *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_2->tx.tx_lock);
 VAR_3 = FUNC_1(VAR_2->tx.tx_slot, VAR_1);
 if (VAR_3 >= VAR_1) {
  FUNC_3(&VAR_2->tx.tx_lock);
  return -VAR_0;
 }
 FUNC_0(VAR_3, VAR_2->tx.tx_slot);
 FUNC_3(&VAR_2->tx.tx_lock);

 return VAR_3;
}
