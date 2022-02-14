
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_desc {int index; struct ob_mac_iocb_req* queue_entry; int * skb; } ;
struct tx_ring {int wq_len; int tx_count; struct tx_ring_desc* q; struct ob_mac_iocb_req* wq_base; } ;
struct ql_adapter {int dummy; } ;
struct ob_mac_iocb_req {int dummy; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct ql_adapter *VAR_0, struct tx_ring *VAR_1)
{
 struct tx_ring_desc *VAR_2;
 int VAR_3;
 struct ob_mac_iocb_req *VAR_4;

 VAR_4 = VAR_1->wq_base;
 VAR_2 = VAR_1->q;
 for (VAR_3 = 0; VAR_3 < VAR_1->wq_len; VAR_3++) {
  VAR_2->index = VAR_3;
  VAR_2->skb = ((void*)0);
  VAR_2->queue_entry = VAR_4;
  VAR_4++;
  VAR_2++;
 }
 FUNC_0(&VAR_1->tx_count, VAR_1->wq_len);
}
