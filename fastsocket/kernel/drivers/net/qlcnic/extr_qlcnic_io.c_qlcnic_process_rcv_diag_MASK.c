
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int data; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int num_desc; int skb_size; } ;
struct TYPE_4__ {int rxbytes; int rx_pkts; } ;
struct qlcnic_adapter {int max_rds_rings; TYPE_2__ stats; TYPE_1__* ahw; int mac_addr; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_3__ {int diag_cnt; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct qlcnic_adapter*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct qlcnic_adapter *VAR_0, int VAR_1,
        u64 VAR_2)
{
 struct qlcnic_recv_context *VAR_3 = VAR_0->recv_ctx;
 struct sk_buff *VAR_4;
 struct qlcnic_host_rds_ring *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (FUNC_10(VAR_1 >= VAR_0->max_rds_rings))
  return;

 VAR_5 = &VAR_3->rds_rings[VAR_1];

 VAR_6 = FUNC_4(VAR_2);
 VAR_7 = FUNC_6(VAR_2);
 if (FUNC_10(VAR_6 >= VAR_5->num_desc))
  return;

 VAR_8 = FUNC_5(VAR_2);
 VAR_9 = FUNC_3(VAR_2);

 VAR_4 = FUNC_7(VAR_0, VAR_5, VAR_6, VAR_8);
 if (!VAR_4)
  return;

 if (VAR_7 > VAR_5->skb_size)
  FUNC_9(VAR_4, VAR_5->skb_size);
 else
  FUNC_9(VAR_4, VAR_7);

 if (VAR_9)
  FUNC_8(VAR_4, VAR_9);

 if (!FUNC_2(VAR_4->data, VAR_0->mac_addr))
  VAR_0->ahw->diag_cnt++;
 else
  FUNC_1(VAR_4, VAR_0);

 FUNC_0(VAR_4);
 VAR_0->stats.rx_pkts++;
 VAR_0->stats.rxbytes += VAR_7;

 return;
}
