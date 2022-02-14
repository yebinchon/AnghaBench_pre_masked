
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char length_lsb; unsigned char length_msb; int packet_rank; int address; int protocol; } ;
union nl_packet {scalar_t__ rawpkt; TYPE_1__ hdr_first; } ;
struct ipw_tx_packet {int length; unsigned short offset; scalar_t__ fragment_count; int callback_data; int (* packet_callback ) (int ,int) ;int queue; int dest_addr; int protocol; } ;
struct ipw_hardware {unsigned short ll_mtu; int lock; int tx_queued; int * tx_queue; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipw_hardware*,scalar_t__,unsigned short) ;
 int FUNC_1 (struct ipw_tx_packet*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__,unsigned char*,unsigned short) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct ipw_hardware *VAR_4, struct ipw_tx_packet *VAR_5)
{
 unsigned short VAR_6;
 unsigned short VAR_7 = VAR_5->length - VAR_5->offset;
 unsigned short VAR_8;
 union nl_packet VAR_9;

 VAR_8 =
     (VAR_5->fragment_count == 0)
     ? VAR_1
     : VAR_2;
 VAR_6 = VAR_4->ll_mtu - VAR_8;
 if (VAR_7 < VAR_6)
  VAR_6 = VAR_7;





 VAR_9.hdr_first.protocol = VAR_5->protocol;
 VAR_9.hdr_first.address = VAR_5->dest_addr;
 VAR_9.hdr_first.packet_rank = 0;


 if (VAR_5->fragment_count == 0) {
  VAR_9.hdr_first.packet_rank |= VAR_0;
  VAR_9.hdr_first.length_lsb = (unsigned char) VAR_5->length;
  VAR_9.hdr_first.length_msb =
   (unsigned char) (VAR_5->length >> 8);
 }

 FUNC_3(VAR_9.rawpkt + VAR_8,
        ((unsigned char *) VAR_5) + sizeof(struct ipw_tx_packet) +
        VAR_5->offset, VAR_6);
 VAR_5->offset += VAR_6;
 VAR_5->fragment_count++;


 if (VAR_5->offset == VAR_5->length)
  VAR_9.hdr_first.packet_rank |= VAR_3;
 FUNC_0(VAR_4, VAR_9.rawpkt, VAR_8 + VAR_6);


 if (VAR_5->offset < VAR_5->length) {




  unsigned long VAR_10;

  FUNC_4(&VAR_4->lock, VAR_10);
  FUNC_2(&VAR_5->queue, &VAR_4->tx_queue[0]);
  VAR_4->tx_queued++;
  FUNC_5(&VAR_4->lock, VAR_10);
 } else {
  if (VAR_5->packet_callback)
   VAR_5->packet_callback(VAR_5->callback_data,
     VAR_5->length);
  FUNC_1(VAR_5);
 }
}
