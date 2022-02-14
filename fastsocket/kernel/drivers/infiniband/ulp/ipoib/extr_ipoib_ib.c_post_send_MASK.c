
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ipoib_tx_buf {void** mapping; struct sk_buff* skb; } ;
struct TYPE_8__ {int hlen; void* header; int mss; struct ib_ah* ah; int remote_qpn; } ;
struct TYPE_9__ {TYPE_2__ ud; } ;
struct TYPE_12__ {int num_sge; unsigned int wr_id; int opcode; TYPE_3__ wr; } ;
struct ipoib_dev_priv {TYPE_6__ tx_wr; int qp; TYPE_1__* tx_sge; } ;
struct ib_send_wr {int dummy; } ;
struct ib_ah {int dummy; } ;
struct TYPE_10__ {scalar_t__ size; } ;
typedef TYPE_4__ skb_frag_t ;
struct TYPE_11__ {int nr_frags; int gso_size; TYPE_4__* frags; } ;
struct TYPE_7__ {scalar_t__ length; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_6__*,struct ib_send_wr**) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 TYPE_5__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct ipoib_dev_priv *VAR_2,
       unsigned int VAR_3,
       struct ib_ah *VAR_4, u32 VAR_5,
       struct ipoib_tx_buf *VAR_6,
       void *VAR_7, int VAR_8)
{
 struct ib_send_wr *VAR_9;
 int VAR_10, VAR_11;
 struct sk_buff *VAR_12 = VAR_6->skb;
 skb_frag_t *VAR_13 = FUNC_2(VAR_12)->frags;
 int VAR_14 = FUNC_2(VAR_12)->nr_frags;
 u64 *VAR_15 = VAR_6->mapping;

 if (FUNC_1(VAR_12)) {
  VAR_2->tx_sge[0].addr = VAR_15[0];
  VAR_2->tx_sge[0].length = FUNC_1(VAR_12);
  VAR_11 = 1;
 } else
  VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_14; ++VAR_10) {
  VAR_2->tx_sge[VAR_10 + VAR_11].addr = VAR_15[VAR_10 + VAR_11];
  VAR_2->tx_sge[VAR_10 + VAR_11].length = VAR_13[VAR_10].size;
 }
 VAR_2->tx_wr.num_sge = VAR_14 + VAR_11;
 VAR_2->tx_wr.wr_id = VAR_3;
 VAR_2->tx_wr.wr.ud.remote_qpn = VAR_5;
 VAR_2->tx_wr.wr.ud.ah = VAR_4;

 if (VAR_7) {
  VAR_2->tx_wr.wr.ud.mss = FUNC_2(VAR_12)->gso_size;
  VAR_2->tx_wr.wr.ud.header = VAR_7;
  VAR_2->tx_wr.wr.ud.hlen = VAR_8;
  VAR_2->tx_wr.opcode = VAR_0;
 } else
  VAR_2->tx_wr.opcode = VAR_1;

 return FUNC_0(VAR_2->qp, &VAR_2->tx_wr, &VAR_9);
}
