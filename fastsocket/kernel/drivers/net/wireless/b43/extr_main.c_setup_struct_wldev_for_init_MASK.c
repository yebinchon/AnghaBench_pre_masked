
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dfq_valid; int radio_hw_enable; int mac_suspended; int noisecalc; int irq_mask; int * dma_reason; scalar_t__ irq_reason; int phy; int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int *) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_4)
{
 VAR_4->dfq_valid = 0;



 VAR_4->radio_hw_enable = 1;


 FUNC_0(&VAR_4->stats, 0, sizeof(VAR_4->stats));

 FUNC_1(VAR_4, &VAR_4->phy);


 VAR_4->irq_reason = 0;
 FUNC_0(VAR_4->dma_reason, 0, sizeof(VAR_4->dma_reason));
 VAR_4->irq_mask = VAR_0;
 if (VAR_3 < VAR_2)
  VAR_4->irq_mask &= ~VAR_1;

 VAR_4->mac_suspended = 1;


 FUNC_0(&VAR_4->noisecalc, 0, sizeof(VAR_4->noisecalc));
}
