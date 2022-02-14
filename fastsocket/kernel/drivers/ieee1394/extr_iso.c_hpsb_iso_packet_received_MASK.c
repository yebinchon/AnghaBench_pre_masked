
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef void* u16 ;
struct hpsb_iso_packet_info {void* sy; void* tag; void* channel; void* cycle; void* total_len; void* len; int offset; } ;
struct hpsb_iso {int n_ready_packets; int buf_packets; size_t pkt_dma; int lock; struct hpsb_iso_packet_info* infos; int bytes_discarded; int overflows; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct hpsb_iso *VAR_0, u32 VAR_1, u16 VAR_2,
         u16 VAR_3, u16 VAR_4, u8 VAR_5, u8 VAR_6,
         u8 VAR_7)
{
 unsigned long VAR_8;
 FUNC_1(&VAR_0->lock, VAR_8);

 if (VAR_0->n_ready_packets == VAR_0->buf_packets) {

  FUNC_0(&VAR_0->overflows);

  VAR_0->bytes_discarded += VAR_3;
 } else {
  struct hpsb_iso_packet_info *VAR_9 = &VAR_0->infos[VAR_0->pkt_dma];
  VAR_9->offset = VAR_1;
  VAR_9->len = VAR_2;
  VAR_9->total_len = VAR_3;
  VAR_9->cycle = VAR_4;
  VAR_9->channel = VAR_5;
  VAR_9->tag = VAR_6;
  VAR_9->sy = VAR_7;

  VAR_0->pkt_dma = (VAR_0->pkt_dma + 1) % VAR_0->buf_packets;
  VAR_0->n_ready_packets++;
 }

 FUNC_2(&VAR_0->lock, VAR_8);
}
