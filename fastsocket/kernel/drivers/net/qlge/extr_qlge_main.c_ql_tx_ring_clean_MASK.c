
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_desc {int * skb; int map_cnt; int index; } ;
struct tx_ring {int wq_len; struct tx_ring_desc* q; } ;
struct ql_adapter {int tx_ring_count; int ndev; struct tx_ring* tx_ring; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,int *,int,int ) ;
 int FUNC_2 (struct ql_adapter*,struct tx_ring_desc*,int ) ;

__attribute__((used)) static void FUNC_3(struct ql_adapter *VAR_1)
{
 struct tx_ring *VAR_2;
 struct tx_ring_desc *VAR_3;
 int VAR_4, VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_1->tx_ring_count; VAR_5++) {
  VAR_2 = &VAR_1->tx_ring[VAR_5];
  for (VAR_4 = 0; VAR_4 < VAR_2->wq_len; VAR_4++) {
   VAR_3 = &VAR_2->q[VAR_4];
   if (VAR_3 && VAR_3->skb) {
    FUNC_1(VAR_1, VAR_0, VAR_1->ndev,
       "Freeing lost SKB %p, from queue %d, index %d.\n",
       VAR_3->skb, VAR_5,
       VAR_3->index);
    FUNC_2(VAR_1, VAR_3,
           VAR_3->map_cnt);
    FUNC_0(VAR_3->skb);
    VAR_3->skb = ((void*)0);
   }
  }
 }
}
