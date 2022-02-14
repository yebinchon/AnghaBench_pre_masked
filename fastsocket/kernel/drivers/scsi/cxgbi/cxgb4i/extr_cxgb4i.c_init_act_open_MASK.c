
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct port_info {int port_id; } ;
struct net_device {int name; } ;
struct cxgbi_sock {size_t port_id; scalar_t__ atid; int smac_idx; unsigned int txq_idx; int l2t; int mss_idx; scalar_t__ mtu; int rss_qid; int tx_chan; scalar_t__ err; scalar_t__ wr_una_cred; int wr_cred; int wr_max_cred; TYPE_1__* dst; int tid; int flags; int state; struct cxgbi_device* cdev; } ;
struct cxgbi_device {struct net_device** ports; } ;
struct cxgb4_lld_info {unsigned int ntxq; unsigned int nchan; unsigned int nrxq; int wr_cred; int * rxq_ids; int mtus; int l2t; int tids; } ;
struct cpl_act_open_req {int dummy; } ;
struct TYPE_2__ {int neighbour; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int ,struct cxgbi_sock*) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (int ,int ,struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 unsigned int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 struct cxgb4_lld_info* FUNC_8 (struct cxgbi_device*) ;
 int VAR_6 ;
 int FUNC_9 (struct cxgbi_sock*) ;
 int FUNC_10 (struct cxgbi_sock*) ;
 int FUNC_11 (struct cxgbi_sock*,int ) ;
 int FUNC_12 (struct cxgbi_sock*,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int,char*,struct cxgbi_sock*,int ,int ,int ,...) ;
 struct port_info* FUNC_15 (struct net_device*) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (struct cxgbi_sock*,struct sk_buff*,int ) ;
 int FUNC_18 (struct sk_buff*,struct cxgbi_sock*,int ) ;

__attribute__((used)) static int FUNC_19(struct cxgbi_sock *VAR_7)
{
 struct cxgbi_device *VAR_8 = VAR_7->cdev;
 struct cxgb4_lld_info *VAR_9 = FUNC_8(VAR_8);
 struct net_device *VAR_10 = VAR_8->ports[VAR_7->port_id];
 struct port_info *VAR_11 = FUNC_15(VAR_10);
 struct sk_buff *VAR_12 = ((void*)0);
 unsigned int VAR_13;

 FUNC_14(1 << VAR_3 | 1 << VAR_2,
  "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_7, VAR_7->state, VAR_7->flags, VAR_7->tid);

 VAR_7->atid = FUNC_2(VAR_9->tids, VAR_7);
 if (VAR_7->atid < 0) {
  FUNC_16("%s, NO atid available.\n", VAR_10->name);
  return -VAR_4;
 }
 FUNC_11(VAR_7, VAR_0);
 FUNC_9(VAR_7);

 VAR_7->l2t = FUNC_4(VAR_9->l2t, VAR_7->dst->neighbour, VAR_10, 0);
 if (!VAR_7->l2t) {
  FUNC_16("%s, cannot alloc l2t.\n", VAR_10->name);
  goto rel_resource;
 }
 FUNC_9(VAR_7);

 VAR_12 = FUNC_1(sizeof(struct cpl_act_open_req), 0, VAR_5);
 if (!VAR_12)
  goto rel_resource;
 VAR_12->sk = (struct sock *)VAR_7;
 FUNC_18(VAR_12, VAR_7, VAR_6);

 if (!VAR_7->mtu)
  VAR_7->mtu = FUNC_13(VAR_7->dst);
 FUNC_3(VAR_9->mtus, VAR_7->mtu, &VAR_7->mss_idx);
 VAR_7->tx_chan = FUNC_5(VAR_10);

 VAR_7->smac_idx = ((FUNC_7(VAR_10) & 0x7F)) << 1;
 VAR_13 = VAR_9->ntxq / VAR_9->nchan;
 VAR_7->txq_idx = FUNC_6(VAR_10) * VAR_13;
 VAR_13 = VAR_9->nrxq / VAR_9->nchan;
 VAR_7->rss_qid = VAR_9->rxq_ids[FUNC_6(VAR_10) * VAR_13];
 VAR_7->wr_max_cred = VAR_7->wr_cred = VAR_9->wr_cred;
 VAR_7->wr_una_cred = 0;
 FUNC_10(VAR_7);
 VAR_7->err = 0;
 FUNC_14(1 << VAR_3 | 1 << VAR_2,
  "csk 0x%p,p%d,%s, %u,%u,%u, mss %u,%u, smac %u.\n",
  VAR_7, VAR_11->port_id, VAR_10->name, VAR_7->tx_chan,
  VAR_7->txq_idx, VAR_7->rss_qid, VAR_7->mtu, VAR_7->mss_idx,
  VAR_7->smac_idx);

 FUNC_12(VAR_7, VAR_1);
 FUNC_17(VAR_7, VAR_12, VAR_7->l2t);
 return 0;

rel_resource:
 if (VAR_12)
  FUNC_0(VAR_12);
 return -VAR_4;
}
