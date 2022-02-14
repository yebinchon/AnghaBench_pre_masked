
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_desc {int totalLen; } ;
struct TYPE_2__ {int len; } ;
struct carl9170_tx_superframe {TYPE_1__ s; } ;
struct carl9170_tx_superdesc {int dummy; } ;


 struct carl9170_tx_superframe* FUNC_0 (struct dma_desc*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct dma_desc *VAR_0)
{
 volatile struct carl9170_tx_superframe *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0->totalLen < sizeof(struct carl9170_tx_superdesc)))
  return 0;
 if (FUNC_1(VAR_1->s.len > VAR_0->totalLen))
  return 0;

 return 1;
}
