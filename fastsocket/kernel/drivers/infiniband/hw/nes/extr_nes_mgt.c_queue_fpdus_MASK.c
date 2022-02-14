
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int doff; int seq; } ;
struct sk_buff {int data; scalar_t__ len; struct sk_buff* next; int * cb; } ;
struct nes_vnic {int nesdev; } ;
struct nes_rskb_cb {scalar_t__ seqnum; } ;
struct TYPE_6__ {struct sk_buff* next; } ;
struct nes_qp {scalar_t__ pau_rcv_nxt; int pau_busy; int pau_pending; scalar_t__ pau_state; int pau_lock; TYPE_2__ pau_list; int cm_node; TYPE_1__* nesqp_context; } ;
struct iphdr {int ihl; int tot_len; } ;
struct TYPE_5__ {int rcv_wnd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nes_vnic*,struct nes_qp*) ;
 int FUNC_8 (struct sk_buff*,struct sk_buff*,TYPE_2__*) ;
 int FUNC_9 (struct sk_buff*,unsigned char*) ;
 int FUNC_10 (TYPE_2__*,struct sk_buff*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_15(struct sk_buff *VAR_2, struct nes_vnic *VAR_3, struct nes_qp *VAR_4)
{
 struct sk_buff *VAR_5;
 struct nes_rskb_cb *VAR_6;
 struct iphdr *VAR_7;
 struct tcphdr *VAR_8;
 unsigned char *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 bool VAR_14 = 0;
 unsigned long VAR_15;


 VAR_7 = (struct iphdr *)VAR_2->data;
 VAR_8 = (struct tcphdr *)(((char *)VAR_7) + (4 * VAR_7->ihl));
 VAR_12 = FUNC_1(VAR_8->seq);
 VAR_9 = (((char *)VAR_8) + (4 * VAR_8->doff));

 VAR_13 = FUNC_0(VAR_7->tot_len);
 if (VAR_2->len > VAR_13)
  FUNC_12(VAR_2, VAR_13);
 FUNC_9(VAR_2, VAR_9 - VAR_2->data);


 VAR_6 = (struct nes_rskb_cb *)&VAR_2->cb[0];
 VAR_6->seqnum = VAR_12;


 VAR_10 = VAR_4->pau_rcv_nxt;
 VAR_11 = FUNC_4(VAR_4->nesqp_context->rcv_wnd);
 if (!FUNC_3(VAR_12, VAR_10, (VAR_10 + VAR_11))) {
  FUNC_5(VAR_3->nesdev, VAR_2, VAR_1);
  FUNC_6(VAR_4->cm_node);
  return;
 }

 FUNC_13(&VAR_4->pau_lock, VAR_15);

 if (VAR_4->pau_busy)
  VAR_4->pau_pending = 1;
 else
  VAR_4->pau_busy = 1;


 if (FUNC_11(&VAR_4->pau_list) == 0) {
  FUNC_10(&VAR_4->pau_list, VAR_2);
 } else {
  VAR_5 = VAR_4->pau_list.next;
  while (VAR_5 != (struct sk_buff *)&VAR_4->pau_list) {
   VAR_6 = (struct nes_rskb_cb *)&VAR_5->cb[0];
   if (FUNC_2(VAR_12, VAR_6->seqnum))
    break;
   VAR_5 = VAR_5->next;
  }
  FUNC_8(VAR_5, VAR_2, &VAR_4->pau_list);
 }
 if (VAR_4->pau_state == VAR_0)
  VAR_14 = 1;
 FUNC_14(&VAR_4->pau_lock, VAR_15);

 if (VAR_14)
  FUNC_7(VAR_3, VAR_4);

 return;
}
