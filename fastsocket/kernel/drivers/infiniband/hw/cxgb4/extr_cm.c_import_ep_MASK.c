
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int mtu; } ;
struct neighbour {struct net_device* dev; } ;
struct dst_entry {int dummy; } ;
struct c4iw_ep {int smac_idx; int txq_idx; int ctrlq_idx; scalar_t__ tried_with_mpa_v1; scalar_t__ retry_with_mpa_v1; int rss_qid; void* tx_chan; int mtu; void* l2t; } ;
struct TYPE_3__ {int ntxq; int nchan; int nrxq; int * rxq_ids; int l2t; } ;
struct TYPE_4__ {TYPE_1__ lldi; } ;
struct c4iw_dev {TYPE_2__ rdev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,struct neighbour*,struct net_device*,int ) ;
 void* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct neighbour* FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct dst_entry*) ;
 int VAR_3 ;
 struct net_device* FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct c4iw_ep *VAR_4, __be32 VAR_5, struct dst_entry *VAR_6,
       struct c4iw_dev *VAR_7, bool VAR_8)
{
 struct neighbour *VAR_9;
 int VAR_10, VAR_11;

 FUNC_8();
 VAR_9 = FUNC_5(VAR_6);
 VAR_10 = -VAR_0;
 if (!VAR_9)
  goto out;
 VAR_10 = -VAR_1;
 if (VAR_9->dev->flags & VAR_2) {
  struct net_device *VAR_12;

  VAR_12 = FUNC_7(&VAR_3, VAR_5);
  if (!VAR_12) {
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_4->l2t = FUNC_0(VAR_7->rdev.lldi.l2t,
     VAR_9, VAR_12, 0);
  if (!VAR_4->l2t)
   goto out;
  VAR_4->mtu = VAR_12->mtu;
  VAR_4->tx_chan = FUNC_1(VAR_12);
  VAR_4->smac_idx = (FUNC_3(VAR_12) & 0x7F) << 1;
  VAR_11 = VAR_7->rdev.lldi.ntxq /
   VAR_7->rdev.lldi.nchan;
  VAR_4->txq_idx = FUNC_2(VAR_12) * VAR_11;
  VAR_11 = VAR_7->rdev.lldi.nrxq /
   VAR_7->rdev.lldi.nchan;
  VAR_4->ctrlq_idx = FUNC_2(VAR_12);
  VAR_4->rss_qid = VAR_7->rdev.lldi.rxq_ids[
   FUNC_2(VAR_12) * VAR_11];
  FUNC_4(VAR_12);
 } else {
  VAR_4->l2t = FUNC_0(VAR_7->rdev.lldi.l2t,
     VAR_9, VAR_9->dev, 0);
  if (!VAR_4->l2t)
   goto out;
  VAR_4->mtu = FUNC_6(VAR_6);
  VAR_4->tx_chan = FUNC_1(VAR_9->dev);
  VAR_4->smac_idx = (FUNC_3(VAR_9->dev) & 0x7F) << 1;
  VAR_11 = VAR_7->rdev.lldi.ntxq /
   VAR_7->rdev.lldi.nchan;
  VAR_4->txq_idx = FUNC_2(VAR_9->dev) * VAR_11;
  VAR_4->ctrlq_idx = FUNC_2(VAR_9->dev);
  VAR_11 = VAR_7->rdev.lldi.nrxq /
   VAR_7->rdev.lldi.nchan;
  VAR_4->rss_qid = VAR_7->rdev.lldi.rxq_ids[
   FUNC_2(VAR_9->dev) * VAR_11];

  if (VAR_8) {
   VAR_4->retry_with_mpa_v1 = 0;
   VAR_4->tried_with_mpa_v1 = 0;
  }
 }
 VAR_10 = 0;
out:
 FUNC_9();

 return VAR_10;
}
