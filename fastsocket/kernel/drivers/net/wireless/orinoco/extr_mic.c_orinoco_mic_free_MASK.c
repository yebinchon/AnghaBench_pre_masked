
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {scalar_t__ rx_tfm_mic; scalar_t__ tx_tfm_mic; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct orinoco_private *VAR_0)
{
 if (VAR_0->tx_tfm_mic)
  FUNC_0(VAR_0->tx_tfm_mic);
 if (VAR_0->rx_tfm_mic)
  FUNC_0(VAR_0->rx_tfm_mic);
}
