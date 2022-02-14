
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_local {scalar_t__ in_idx; scalar_t__ sk_count; int lock; struct sk_buff** skbs; } ;
struct net_device {scalar_t__ ml_priv; int trans_start; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int irq_queue; } ;
typedef TYPE_1__ hysdn_card ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static netdev_tx_t
FUNC_4(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct net_local *VAR_5 = (struct net_local *) VAR_4;

 FUNC_2(&VAR_5->lock);

 VAR_5->skbs[VAR_5->in_idx++] = VAR_3;
 if (VAR_5->in_idx >= VAR_0)
  VAR_5->in_idx = 0;
 VAR_5->sk_count++;
 VAR_4->trans_start = VAR_2;





 if (VAR_5->sk_count >= VAR_0)
  FUNC_0(VAR_4);





 FUNC_3(&VAR_5->lock);

 if (VAR_5->sk_count <= 3) {
  FUNC_1(&((hysdn_card *) VAR_4->ml_priv)->irq_queue);
 }
 return VAR_1;
}
