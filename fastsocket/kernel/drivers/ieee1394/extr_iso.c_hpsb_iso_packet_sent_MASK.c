
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_iso {int buf_packets; int n_ready_packets; int xmit_cycle; int pkt_dma; int lock; int overflows; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct hpsb_iso *VAR_0, int VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 FUNC_1(&VAR_0->lock, VAR_3);




 VAR_1 += VAR_0->buf_packets - VAR_0->n_ready_packets;
 VAR_1 %= 8000;

 VAR_0->xmit_cycle = VAR_1;
 VAR_0->n_ready_packets++;
 VAR_0->pkt_dma = (VAR_0->pkt_dma + 1) % VAR_0->buf_packets;

 if (VAR_0->n_ready_packets == VAR_0->buf_packets || VAR_2 != 0) {

  FUNC_0(&VAR_0->overflows);
 }

 FUNC_2(&VAR_0->lock, VAR_3);
}
