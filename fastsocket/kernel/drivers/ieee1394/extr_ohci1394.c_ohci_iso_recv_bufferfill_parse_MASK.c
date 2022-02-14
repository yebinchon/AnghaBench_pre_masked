
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {int dummy; } ;
struct ohci_iso_recv {unsigned int dma_offset; unsigned int buf_stride; unsigned int block_dma; int nblocks; struct ti_ohci* ohci; } ;
struct TYPE_2__ {unsigned char* kvirt; } ;
struct hpsb_iso {TYPE_1__ data_buf; int overflows; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hpsb_iso*,unsigned int,unsigned short,unsigned short,unsigned short,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (struct hpsb_iso*) ;
 int FUNC_4 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_5(struct hpsb_iso *VAR_1, struct ohci_iso_recv *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 struct ti_ohci *VAR_5 = VAR_2->ohci;

 while (1) {



  unsigned int VAR_6;
  unsigned short VAR_7, VAR_8, VAR_9;
  unsigned char VAR_10, VAR_11, VAR_12;

  unsigned char *VAR_13 = VAR_1->data_buf.kvirt;

  unsigned int VAR_14 = VAR_2->dma_offset/VAR_2->buf_stride;


  if (VAR_4++ > 100000) {
   FUNC_1(&VAR_1->overflows);
   FUNC_0(VAR_0,
         "IR DMA error - Runaway during buffer parsing!\n");
   break;
  }


  if (VAR_14 == VAR_2->block_dma)
   break;

  VAR_3 = 1;






  VAR_7 = VAR_13[VAR_2->dma_offset+2] | (VAR_13[VAR_2->dma_offset+3] << 8);

  if (VAR_7 > 4096) {
   FUNC_0(VAR_0,
         "IR DMA error - bogus 'len' value %u\n", VAR_7);
  }

  VAR_10 = VAR_13[VAR_2->dma_offset+1] & 0x3F;
  VAR_11 = VAR_13[VAR_2->dma_offset+1] >> 6;
  VAR_12 = VAR_13[VAR_2->dma_offset+0] & 0xF;


  VAR_2->dma_offset += 4;


  if (VAR_2->dma_offset >= VAR_2->buf_stride*VAR_2->nblocks) {
   VAR_2->dma_offset -= VAR_2->buf_stride*VAR_2->nblocks;
  }


  VAR_6 = VAR_2->dma_offset;


  VAR_2->dma_offset += VAR_7;

  VAR_9 = VAR_7 + 8;

  if (VAR_7 % 4) {
   VAR_2->dma_offset += 4 - (VAR_7%4);
   VAR_9 += 4 - (VAR_7%4);
  }


  if (VAR_2->dma_offset >= VAR_2->buf_stride*VAR_2->nblocks) {





   int VAR_15 = VAR_2->buf_stride*VAR_2->nblocks;
   int VAR_16 = VAR_7 - (VAR_15 - VAR_6);

   if (VAR_16 > 0 && VAR_16 < VAR_2->buf_stride) {
    FUNC_4(VAR_1->data_buf.kvirt + VAR_15,
           VAR_1->data_buf.kvirt,
           VAR_16);
   }

   VAR_2->dma_offset -= VAR_2->buf_stride*VAR_2->nblocks;
  }


  VAR_8 = VAR_13[VAR_2->dma_offset+0] | (VAR_13[VAR_2->dma_offset+1]<<8);
  VAR_8 &= 0x1FFF;


  VAR_2->dma_offset += 4;


  if (VAR_2->dma_offset >= VAR_2->buf_stride*VAR_2->nblocks) {
   VAR_2->dma_offset -= VAR_2->buf_stride*VAR_2->nblocks;
  }

  FUNC_2(VAR_1, VAR_6, VAR_7, VAR_9, VAR_8, VAR_10, VAR_11, VAR_12);
 }

 if (VAR_3)
  FUNC_3(VAR_1);
}
