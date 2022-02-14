
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct enic {int * wq_lock; struct vnic_wq* wq; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {scalar_t__ gso_size; scalar_t__ nr_frags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct enic*,struct vnic_wq*,struct sk_buff*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct enic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (struct vnic_wq*) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_5,
 struct net_device *VAR_6)
{
 struct enic *VAR_7 = FUNC_3(VAR_6);
 struct vnic_wq *VAR_8 = &VAR_7->wq[0];
 unsigned long VAR_9;

 if (VAR_5->len <= 0) {
  FUNC_0(VAR_5);
  return VAR_4;
 }






 if (FUNC_6(VAR_5)->gso_size == 0 &&
     FUNC_6(VAR_5)->nr_frags + 1 > VAR_1 &&
     FUNC_5(VAR_5)) {
  FUNC_0(VAR_5);
  return VAR_4;
 }

 FUNC_7(&VAR_7->wq_lock[0], VAR_9);

 if (FUNC_9(VAR_8) <
     FUNC_6(VAR_5)->nr_frags + VAR_0) {
  FUNC_4(VAR_6);

  FUNC_2(VAR_6, "BUG! Tx ring full when queue awake!\n");
  FUNC_8(&VAR_7->wq_lock[0], VAR_9);
  return VAR_3;
 }

 FUNC_1(VAR_7, VAR_8, VAR_5);

 if (FUNC_9(VAR_8) < VAR_2 + VAR_0)
  FUNC_4(VAR_6);

 FUNC_8(&VAR_7->wq_lock[0], VAR_9);

 return VAR_4;
}
