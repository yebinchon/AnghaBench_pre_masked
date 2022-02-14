
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_dropped; } ;
struct emac_instance {TYPE_2__* tx_desc; TYPE_1__ estats; int ** tx_skb; } ;
struct TYPE_4__ {int ctrl; scalar_t__ data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct emac_instance *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (VAR_2->tx_skb[VAR_3]) {
   FUNC_0(VAR_2->tx_skb[VAR_3]);
   VAR_2->tx_skb[VAR_3] = ((void*)0);
   if (VAR_2->tx_desc[VAR_3].ctrl & VAR_0)
    ++VAR_2->estats.tx_dropped;
  }
  VAR_2->tx_desc[VAR_3].ctrl = 0;
  VAR_2->tx_desc[VAR_3].data_ptr = 0;
 }
}
