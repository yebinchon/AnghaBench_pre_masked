
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {int host; int no_swap_incoming; } ;
struct dma_rcv_ctx {unsigned int buf_ind; unsigned int buf_offset; int** buf_cpu; unsigned int buf_size; int ctx; int split_buf_size; unsigned int num_desc; char* spb; int lock; TYPE_1__** prg_cpu; int ctrlClear; scalar_t__ ohci; } ;
typedef int quadlet_t ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,unsigned char) ;
 int FUNC_4 (int ,int*,int,int) ;
 int FUNC_5 (struct dma_rcv_ctx*,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int*,int) ;
 int FUNC_8 (struct ti_ohci*,int ,char*) ;
 int FUNC_9 (struct dma_rcv_ctx*,unsigned int,int*,unsigned int,unsigned char,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (char*,char*,unsigned char,int,int,int) ;

__attribute__((used)) static void FUNC_13 (unsigned long VAR_3)
{
 struct dma_rcv_ctx *VAR_4 = (struct dma_rcv_ctx*)VAR_3;
 struct ti_ohci *VAR_5 = (struct ti_ohci*)(VAR_4->ohci);
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10;
 int VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 quadlet_t *VAR_15;
 char *VAR_16;
 char VAR_17[256];

 FUNC_10(&VAR_4->lock, VAR_14);

 VAR_7 = VAR_4->buf_ind;
 VAR_8 = VAR_4->buf_offset;
 VAR_15 = VAR_4->buf_cpu[VAR_7] + VAR_8/4;

 VAR_9 = FUNC_6(VAR_4->prg_cpu[VAR_7]->status) & 0xffff;
 VAR_12 = VAR_4->buf_size - VAR_9 - VAR_8;

 while (VAR_12 > 0) {
  VAR_10 = (FUNC_2(VAR_15[0], VAR_5->no_swap_incoming) >> 4) & 0xf;


  VAR_11 = FUNC_9(VAR_4, VAR_7, VAR_15, VAR_8, VAR_10, VAR_5->no_swap_incoming);

  if (VAR_11 < 4) {
   FUNC_12(VAR_17,"Unexpected tcode 0x%x(0x%08x) in AR ctx=%d, length=%d",
    VAR_10, FUNC_2(VAR_15[0], VAR_5->no_swap_incoming),
    VAR_4->ctx, VAR_11);
   FUNC_8(VAR_5, VAR_4->ctrlClear, VAR_17);
   FUNC_11(&VAR_4->lock, VAR_14);
   return;
  }




  if ((VAR_8 + VAR_11) > VAR_4->buf_size) {
   FUNC_0("Split packet rcv'd");
   if (VAR_11 > VAR_4->split_buf_size) {
    FUNC_8(VAR_5, VAR_4->ctrlClear,
          "Split packet size exceeded");
    VAR_4->buf_ind = VAR_7;
    VAR_4->buf_offset = VAR_8;
    FUNC_11(&VAR_4->lock, VAR_14);
    return;
   }

   if (FUNC_6(VAR_4->prg_cpu[(VAR_7+1)%VAR_4->num_desc]->status)
       == VAR_4->buf_size) {



    FUNC_1(VAR_1,
          "Got only half a packet!");
    VAR_4->buf_ind = VAR_7;
    VAR_4->buf_offset = VAR_8;
    FUNC_11(&VAR_4->lock, VAR_14);
    return;
   }

   VAR_6 = VAR_11;
   VAR_16 = (char *)VAR_4->spb;
   FUNC_7(VAR_16,VAR_15,VAR_4->buf_size-VAR_8);
   VAR_6 -= VAR_4->buf_size-VAR_8;
   VAR_16 += VAR_4->buf_size-VAR_8;
   FUNC_5(VAR_4, VAR_7);
   VAR_7 = (VAR_7+1) % VAR_4->num_desc;
   VAR_15 = VAR_4->buf_cpu[VAR_7];
   VAR_8=0;

   while (VAR_6 >= VAR_4->buf_size) {
    FUNC_7(VAR_16,VAR_15,VAR_4->buf_size);
    VAR_16 += VAR_4->buf_size;
    VAR_6 -= VAR_4->buf_size;
    FUNC_5(VAR_4, VAR_7);
    VAR_7 = (VAR_7+1) % VAR_4->num_desc;
    VAR_15 = VAR_4->buf_cpu[VAR_7];
   }

   if (VAR_6 > 0) {
    FUNC_7(VAR_16, VAR_15, VAR_6);
    VAR_8 = VAR_6;
    VAR_15 += VAR_8/4;
   }
  } else {
   FUNC_0("Single packet rcv'd");
   FUNC_7(VAR_4->spb, VAR_15, VAR_11);
   VAR_8 += VAR_11;
   VAR_15 += VAR_11/4;
   if (VAR_8==VAR_4->buf_size) {
    FUNC_5(VAR_4, VAR_7);
    VAR_7 = (VAR_7+1) % VAR_4->num_desc;
    VAR_15 = VAR_4->buf_cpu[VAR_7];
    VAR_8=0;
   }
  }



  if (VAR_10 != VAR_2) {
   if (!VAR_5->no_swap_incoming)
    FUNC_3(VAR_4->spb, VAR_10);
   FUNC_0("Packet received from node"
    " %d ack=0x%02X spd=%d tcode=0x%X"
    " length=%d ctx=%d tlabel=%d",
    (VAR_4->spb[1]>>16)&0x3f,
    (FUNC_2(VAR_4->spb[VAR_11/4-1], VAR_5->no_swap_incoming)>>16)&0x1f,
    (FUNC_2(VAR_4->spb[VAR_11/4-1], VAR_5->no_swap_incoming)>>21)&0x3,
    VAR_10, VAR_11, VAR_4->ctx,
    (VAR_4->spb[0]>>10)&0x3f);

   VAR_13 = (((FUNC_2(VAR_4->spb[VAR_11/4-1], VAR_5->no_swap_incoming)>>16)&0x1f)
    == 0x11) ? 1 : 0;

   FUNC_4(VAR_5->host, VAR_4->spb,
          VAR_11-4, VAR_13);
  }






         VAR_9 = FUNC_6(VAR_4->prg_cpu[VAR_7]->status) & 0xffff;

  VAR_12 = VAR_4->buf_size - VAR_9 - VAR_8;

 }

 VAR_4->buf_ind = VAR_7;
 VAR_4->buf_offset = VAR_8;

 FUNC_11(&VAR_4->lock, VAR_14);
}
