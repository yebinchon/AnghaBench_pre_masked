
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ohci_iso_recv {int nblocks; int buf_stride; scalar_t__ dma_mode; int block_irq_interval; int prog; struct dma_cmd* block; } ;
struct hpsb_iso {int data_buf; struct ohci_iso_recv* hostdata; } ;
struct dma_cmd {int branchAddress; void* status; void* address; void* control; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct hpsb_iso *VAR_1)
{
 struct ohci_iso_recv *VAR_2 = VAR_1->hostdata;
 int VAR_3;


 u32 *VAR_4 = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_2->nblocks; VAR_3++) {
  u32 VAR_5;


  struct dma_cmd *VAR_6 = &VAR_2->block[VAR_3];


  unsigned long VAR_7 = VAR_3 * sizeof(struct dma_cmd);


  unsigned long VAR_8 = VAR_3 * VAR_2->buf_stride;

  if (VAR_2->dma_mode == VAR_0) {
   VAR_5 = 2 << 28;
  } else {
   VAR_5 = 3 << 28;
  }

  VAR_5 |= 8 << 24;


  if (VAR_3 == VAR_2->nblocks-1 || (VAR_3 % VAR_2->block_irq_interval) == 0) {
   VAR_5 |= 3 << 20;
  }

  VAR_5 |= 3 << 18;
  VAR_5 |= VAR_2->buf_stride;

  VAR_6->control = FUNC_0(VAR_5);
  VAR_6->address = FUNC_0(FUNC_2(&VAR_1->data_buf, VAR_8));
  VAR_6->branchAddress = 0;
  VAR_6->status = FUNC_0(VAR_2->buf_stride);


  if (VAR_4) {
   *VAR_4 = FUNC_0(FUNC_1(&VAR_2->prog, VAR_7) | 1);
  }

  VAR_4 = &VAR_6->branchAddress;
 }


}
