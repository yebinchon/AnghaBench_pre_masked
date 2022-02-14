
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int imask; int irqlock; scalar_t__ tx_pending; scalar_t__ rx_pending; } ;
typedef enum ath5k_int { ____Placeholder_ath5k_int } ath5k_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct ath5k_hw *VAR_2)
{
 enum ath5k_int VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->irqlock, VAR_4);
 VAR_3 = VAR_2->imask;
 if (VAR_2->rx_pending)
  VAR_3 &= ~VAR_0;
 if (VAR_2->tx_pending)
  VAR_3 &= ~VAR_1;
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(&VAR_2->irqlock, VAR_4);
}
