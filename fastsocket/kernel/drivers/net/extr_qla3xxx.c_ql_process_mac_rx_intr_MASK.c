
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int protocol; int ip_summed; int data; } ;
struct ql_rcv_buf_cb {struct sk_buff* skb; } ;
struct ql3_adapter {scalar_t__ device_id; TYPE_2__* ndev; int pdev; } ;
struct ib_mac_iocb_rsp {int length; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ql_rcv_buf_cb*,int ) ;
 int FUNC_4 (struct ql_rcv_buf_cb*,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct ql_rcv_buf_cb* FUNC_7 (struct ql3_adapter*) ;
 int FUNC_8 (struct ql3_adapter*) ;
 int FUNC_9 (struct ql3_adapter*,struct ql_rcv_buf_cb*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct ql3_adapter *VAR_5,
       struct ib_mac_iocb_rsp *VAR_6)
{
 struct ql_rcv_buf_cb *VAR_7 = ((void*)0);
 struct ql_rcv_buf_cb *VAR_8 = ((void*)0);
 struct sk_buff *VAR_9;
 u16 VAR_10 = FUNC_1(VAR_6->length);




 FUNC_8(VAR_5);

 if (VAR_5->device_id == VAR_2)
  VAR_7 = FUNC_7(VAR_5);


 VAR_8 = FUNC_7(VAR_5);
 VAR_9 = VAR_8->skb;

 VAR_5->ndev->stats.rx_packets++;
 VAR_5->ndev->stats.rx_bytes += VAR_10;

 FUNC_10(VAR_9, VAR_10);
 FUNC_5(VAR_5->pdev,
    FUNC_3(VAR_8, VAR_3),
    FUNC_4(VAR_8, VAR_4),
    VAR_1);
 FUNC_6(VAR_9->data);
 VAR_9->ip_summed = VAR_0;
 VAR_9->protocol = FUNC_0(VAR_9, VAR_5->ndev);

 FUNC_2(VAR_9);
 VAR_8->skb = ((void*)0);

 if (VAR_5->device_id == VAR_2)
  FUNC_9(VAR_5, VAR_7);
 FUNC_9(VAR_5, VAR_8);
}
