
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct jme_ring {int next_to_use; int nr_free; } ;
struct jme_adapter {int tx_ring_mask; struct jme_ring* txring; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct jme_adapter *VAR_0,
   struct sk_buff *VAR_1)
{
 struct jme_ring *VAR_2 = &(VAR_0->txring[0]);
 int VAR_3, VAR_4, VAR_5 = VAR_0->tx_ring_mask;

 VAR_3 = VAR_2->next_to_use;
 VAR_4 = FUNC_2(VAR_1)->nr_frags + 2;

 if (FUNC_3(FUNC_0(&VAR_2->nr_free) < VAR_4))
  return -1;

 FUNC_1(VAR_4, &VAR_2->nr_free);

 VAR_2->next_to_use = (VAR_2->next_to_use + VAR_4) & VAR_5;

 return VAR_3;
}
