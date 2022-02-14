
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_rcv_buf_cb {scalar_t__ skb; } ;
struct ql3_adapter {int num_large_buffers; int pdev; struct ql_rcv_buf_cb* lrg_buf; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ql_rcv_buf_cb*,int ,int) ;
 int FUNC_2 (struct ql_rcv_buf_cb*,int ) ;
 int FUNC_3 (struct ql_rcv_buf_cb*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ql3_adapter *VAR_3)
{
 int VAR_4 = 0;
 struct ql_rcv_buf_cb *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_large_buffers; VAR_4++) {
  VAR_5 = &VAR_3->lrg_buf[VAR_4];
  if (VAR_5->skb) {
   FUNC_0(VAR_5->skb);
   FUNC_4(VAR_3->pdev,
      FUNC_2(VAR_5, VAR_1),
      FUNC_3(VAR_5, VAR_2),
      VAR_0);
   FUNC_1(VAR_5, 0, sizeof(struct ql_rcv_buf_cb));
  } else {
   break;
  }
 }
}
