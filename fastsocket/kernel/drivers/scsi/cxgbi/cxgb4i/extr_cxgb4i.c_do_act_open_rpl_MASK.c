
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tid_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_10__ {scalar_t__ function; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {int sin_port; TYPE_3__ sin_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {int sin_port; TYPE_1__ sin_addr; } ;
struct cxgbi_sock {int lock; TYPE_5__ retry_timer; int port_id; int flags; int state; TYPE_4__ daddr; TYPE_2__ saddr; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {struct tid_info* tids; } ;
struct cpl_act_open_rpl {int atid_status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct cpl_act_open_rpl*) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct tid_info*,int ,unsigned int) ;
 struct cxgb4_lld_info* FUNC_8 (struct cxgbi_device*) ;
 int FUNC_9 (struct cxgbi_sock*,int ) ;
 int FUNC_10 (struct cxgbi_sock*) ;
 int FUNC_11 (struct cxgbi_sock*) ;
 scalar_t__ VAR_6 ;
 struct cxgbi_sock* FUNC_12 (struct tid_info*,unsigned int) ;
 int FUNC_13 (TYPE_5__*,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,unsigned int,unsigned int) ;
 int FUNC_16 (char*,int *,int ,int *,int ,unsigned int,unsigned int,unsigned int,struct cxgbi_sock*,int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(struct cxgbi_device *VAR_7, struct sk_buff *VAR_8)
{
 struct cxgbi_sock *VAR_9;
 struct cpl_act_open_rpl *VAR_10 = (struct cpl_act_open_rpl *)VAR_8->data;
 unsigned int VAR_11 = FUNC_2(VAR_10);
 unsigned int VAR_12 =
  FUNC_3(FUNC_0(FUNC_6(VAR_10->atid_status)));
 unsigned int VAR_13 = FUNC_1(FUNC_6(VAR_10->atid_status));
 struct cxgb4_lld_info *VAR_14 = FUNC_8(VAR_7);
 struct tid_info *VAR_15 = VAR_14->tids;

 VAR_9 = FUNC_12(VAR_15, VAR_12);
 if (FUNC_19(!VAR_9)) {
  FUNC_15("NO matching conn. atid %u, tid %u.\n", VAR_12, VAR_11);
  goto rel_skb;
 }

 FUNC_16("%pI4:%u-%pI4:%u, atid %u,%u, status %u, csk 0x%p,%u,0x%lx.\n",
  &VAR_9->saddr.sin_addr.s_addr, FUNC_14(VAR_9->saddr.sin_port),
  &VAR_9->daddr.sin_addr.s_addr, FUNC_14(VAR_9->daddr.sin_port),
  VAR_12, VAR_11, VAR_13, VAR_9, VAR_9->state, VAR_9->flags);

 if (VAR_13 == VAR_2)
  goto rel_skb;

 if (VAR_13 && VAR_13 != VAR_3 &&
     VAR_13 != VAR_1 &&
     VAR_13 != VAR_0)
  FUNC_7(VAR_14->tids, VAR_9->port_id, FUNC_2(VAR_10));

 FUNC_10(VAR_9);
 FUNC_17(&VAR_9->lock);

 if (VAR_13 == VAR_1 &&
     VAR_9->retry_timer.function != VAR_5) {
  VAR_9->retry_timer.function = VAR_5;
  FUNC_13(&VAR_9->retry_timer, VAR_6 + VAR_4 / 2);
 } else
  FUNC_9(VAR_9,
     FUNC_5(VAR_13));

 FUNC_18(&VAR_9->lock);
 FUNC_11(VAR_9);
rel_skb:
 FUNC_4(VAR_8);
}
