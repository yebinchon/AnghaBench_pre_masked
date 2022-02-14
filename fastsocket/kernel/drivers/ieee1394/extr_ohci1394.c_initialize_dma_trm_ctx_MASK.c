
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dummy; } ;
struct dma_trm_ctx {scalar_t__ type; int ctx; int pending_list; int fifo_list; int * branchAddrPtr; int num_desc; int free_prgs; scalar_t__ sent_ind; scalar_t__ prg_ind; int ctrlClear; scalar_t__ ohci; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct ti_ohci*,int ,int *) ;
 int FUNC_3 (struct ti_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dma_trm_ctx *VAR_2)
{
 struct ti_ohci *VAR_3 = (struct ti_ohci*)(VAR_2->ohci);


 FUNC_2(VAR_3, VAR_2->ctrlClear, ((void*)0));

        VAR_2->prg_ind = 0;
 VAR_2->sent_ind = 0;
 VAR_2->free_prgs = VAR_2->num_desc;
        VAR_2->branchAddrPtr = ((void*)0);
 FUNC_1(&VAR_2->fifo_list);
 FUNC_1(&VAR_2->pending_list);

 if (VAR_2->type == VAR_0) {

  FUNC_3(VAR_3, VAR_1, 1 << VAR_2->ctx);
 }

 FUNC_0("Transmit DMA ctx=%d initialized", VAR_2->ctx);
}
