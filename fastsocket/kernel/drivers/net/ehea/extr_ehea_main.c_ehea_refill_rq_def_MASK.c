
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int data; } ;
struct net_device {int name; } ;
struct ehea_rwqe {int wr_id; int data_segments; TYPE_3__* sg_list; } ;
struct ehea_qp {int dummy; } ;
struct ehea_q_skb_arr {int os_skbs; int index; int len; struct sk_buff** arr; } ;
struct TYPE_5__ {int lkey; } ;
struct ehea_port_res {struct ehea_qp* qp; TYPE_2__ recv_mr; TYPE_1__* port; } ;
struct TYPE_6__ {int vaddr; int len; int l_key; } ;
struct TYPE_4__ {struct net_device* netdev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_5 ;
 struct ehea_rwqe* FUNC_2 (struct ehea_qp*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ehea_qp*,int) ;
 int FUNC_6 (struct ehea_qp*,int) ;
 int FUNC_7 () ;
 struct sk_buff* FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct ehea_port_res *VAR_6,
         struct ehea_q_skb_arr *VAR_7, int VAR_8,
         int VAR_9, int VAR_10, int VAR_11)
{
 struct net_device *VAR_12 = VAR_6->port->netdev;
 struct ehea_qp *VAR_13 = VAR_6->qp;
 struct sk_buff **VAR_14 = VAR_7->arr;
 struct ehea_rwqe *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;

 VAR_19 = VAR_7->os_skbs + VAR_9;
 VAR_7->os_skbs = 0;

 if (FUNC_11(FUNC_10(VAR_4, &VAR_5))) {
  VAR_7->os_skbs = VAR_19;
  return VAR_21;
 }

 VAR_17 = VAR_7->index;
 VAR_18 = VAR_7->len - 1;
 for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++) {
  u64 VAR_22;
  struct sk_buff *VAR_23 = FUNC_8(VAR_12, VAR_11);
  if (!VAR_23) {
   VAR_7->os_skbs = VAR_19 - VAR_16;
   if (VAR_7->os_skbs == VAR_7->len - 2) {
    FUNC_3("%s: rq%i ran dry - no mem for skb",
       VAR_6->port->netdev->name, VAR_8);
    VAR_21 = -VAR_2;
   }
   break;
  }
  FUNC_9(VAR_23, VAR_3);

  VAR_14[VAR_17] = VAR_23;
  VAR_22 = FUNC_4(VAR_23->data);
  if (VAR_22 == -1) {
   FUNC_1(VAR_23);
   VAR_7->os_skbs = VAR_19 - VAR_16;
   VAR_21 = 0;
   break;
  }

  VAR_15 = FUNC_2(VAR_13, VAR_8);
  VAR_15->wr_id = FUNC_0(VAR_1, VAR_10)
       | FUNC_0(VAR_0, VAR_17);
  VAR_15->sg_list[0].l_key = VAR_6->recv_mr.lkey;
  VAR_15->sg_list[0].vaddr = VAR_22;
  VAR_15->sg_list[0].len = VAR_11;
  VAR_15->data_segments = 1;

  VAR_17++;
  VAR_17 &= VAR_18;
  VAR_20++;
 }

 VAR_7->index = VAR_17;
 if (VAR_20 == 0)
  goto out;


 FUNC_7();
 if (VAR_8 == 2)
  FUNC_5(VAR_6->qp, VAR_20);
 else
  FUNC_6(VAR_6->qp, VAR_20);
out:
 return VAR_21;
}
