
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ti_ohci {int dummy; } ;
struct ohci_iso_recv {int nblocks; size_t block_dma; int buf_stride; int block_reader; struct dma_cmd* block; struct ti_ohci* ohci; } ;
struct hpsb_iso {int overflows; int data_buf; } ;
struct dma_cmd {int status; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hpsb_iso*,struct ohci_iso_recv*) ;

__attribute__((used)) static void FUNC_6(struct hpsb_iso *VAR_1, struct ohci_iso_recv *VAR_2)
{
 int VAR_3;
 struct ti_ohci *VAR_4 = VAR_2->ohci;


 for (VAR_3 = 0; VAR_3 < VAR_2->nblocks; VAR_3++) {


  struct dma_cmd *VAR_5 = &VAR_2->block[VAR_2->block_dma];


  u16 VAR_6 = FUNC_4(VAR_5->status) >> 16;


  u16 VAR_7 = FUNC_4(VAR_5->status) & 0xFFFF;

  unsigned char VAR_8 = VAR_6 & 0x1F;

  if (!VAR_8) {

   break;
  }

  if (VAR_8 != 0x11) {
   FUNC_2(&VAR_1->overflows);
   FUNC_1(VAR_0,
         "IR DMA error - OHCI error code 0x%02x\n", VAR_8);
  }

  if (VAR_7 != 0) {


   break;
  }




  FUNC_3(&VAR_1->data_buf, VAR_2->block_dma*VAR_2->buf_stride, VAR_2->buf_stride);


  VAR_5->status = VAR_2->buf_stride;


  VAR_2->block_dma = (VAR_2->block_dma + 1) % VAR_2->nblocks;

  if ((VAR_2->block_dma+1) % VAR_2->nblocks == VAR_2->block_reader) {
   FUNC_2(&VAR_1->overflows);
   FUNC_0("ISO reception overflow - "
          "ran out of DMA blocks");
  }
 }


 FUNC_5(VAR_1, VAR_2);
}
