
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_iso_recv {scalar_t__ released_bytes; scalar_t__ buf_stride; int block_reader; int nblocks; } ;
struct hpsb_iso_packet_info {scalar_t__ total_len; } ;


 int FUNC_0 (struct ohci_iso_recv*,int) ;

__attribute__((used)) static void FUNC_1(struct ohci_iso_recv *VAR_0,
          struct hpsb_iso_packet_info *VAR_1)
{

 VAR_0->released_bytes += VAR_1->total_len;


 while (VAR_0->released_bytes > VAR_0->buf_stride) {
  FUNC_0(VAR_0, VAR_0->block_reader);
  VAR_0->block_reader = (VAR_0->block_reader + 1) % VAR_0->nblocks;
  VAR_0->released_bytes -= VAR_0->buf_stride;
 }
}
