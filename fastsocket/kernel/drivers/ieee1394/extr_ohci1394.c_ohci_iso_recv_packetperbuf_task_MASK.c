
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ti_ohci {int dummy; } ;
struct TYPE_3__ {scalar_t__ kvirt; } ;
struct ohci_iso_recv {int nblocks; int buf_stride; unsigned int block_dma; TYPE_1__ prog; struct ti_ohci* ohci; } ;
struct TYPE_4__ {unsigned char* kvirt; } ;
struct hpsb_iso {int pkt_dma; TYPE_2__ data_buf; } ;
struct dma_cmd {unsigned int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (struct hpsb_iso*,unsigned int,int,unsigned int,unsigned short,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (struct hpsb_iso*) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hpsb_iso *VAR_1, struct ohci_iso_recv *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 struct ti_ohci *VAR_5 = VAR_2->ohci;


 for (VAR_3 = 0; VAR_3 < VAR_2->nblocks; VAR_3++) {
  u32 VAR_6 = 0;


  struct dma_cmd *VAR_7 = ((struct dma_cmd*) VAR_2->prog.kvirt) + VAR_1->pkt_dma;


  u16 VAR_8 = FUNC_4(VAR_7->status) >> 16;
  u16 VAR_9 = FUNC_4(VAR_7->status) & 0xFFFF;

  unsigned char VAR_10 = VAR_8 & 0x1F;

  if (!VAR_10) {

   goto out;
  }

  if (VAR_10 == 0x11) {




   VAR_6 = VAR_2->buf_stride - VAR_9;

  } else if (VAR_10 == 0x02) {
   FUNC_0(VAR_0, "IR DMA error - packet too long for buffer\n");
  } else if (VAR_10) {
   FUNC_0(VAR_0, "IR DMA error - OHCI error code 0x%02x\n", VAR_10);
  }


  FUNC_1(&VAR_1->data_buf, VAR_1->pkt_dma * VAR_2->buf_stride, VAR_2->buf_stride);


  {

   unsigned char *VAR_11;

   unsigned int VAR_12;
   unsigned short VAR_13;
   unsigned char VAR_14, VAR_15, VAR_16;

   VAR_12 = VAR_1->pkt_dma * VAR_2->buf_stride;
   VAR_11 = VAR_1->data_buf.kvirt + VAR_12;


   VAR_12 += 8;
   VAR_6 -= 8;

   VAR_13 = (VAR_11[0] | (VAR_11[1] << 8)) & 0x1FFF;
   VAR_14 = VAR_11[5] & 0x3F;
   VAR_15 = VAR_11[5] >> 6;
   VAR_16 = VAR_11[4] & 0xF;

   FUNC_2(VAR_1, VAR_12, VAR_6,
     VAR_2->buf_stride, VAR_13, VAR_14, VAR_15, VAR_16);
  }


  VAR_7->status = VAR_2->buf_stride;

  VAR_4 = 1;
  VAR_2->block_dma = VAR_1->pkt_dma;
 }

out:
 if (VAR_4)
  FUNC_3(VAR_1);
}
