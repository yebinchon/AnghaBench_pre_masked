
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dma_address; int length; int offset; } ;
struct mmc_data {scalar_t__ sg_len; int blksz; struct scatterlist* sg; } ;
struct mmc_command {struct mmc_data* data; } ;
struct at91mci_host {scalar_t__ transfer_index; struct mmc_command* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct at91mci_host*,int ) ;
 int FUNC_1 (struct at91mci_host*,int ,int) ;
 int FUNC_2 (int *,int ,int ,int,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(struct at91mci_host *VAR_5)
{
 int VAR_6;
 struct scatterlist *VAR_7;
 struct mmc_command *VAR_8;
 struct mmc_data *VAR_9;

 FUNC_3("pre dma read\n");

 VAR_8 = VAR_5->cmd;
 if (!VAR_8) {
  FUNC_3("no command\n");
  return;
 }

 VAR_9 = VAR_8->data;
 if (!VAR_9) {
  FUNC_3("no data\n");
  return;
 }

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {

  if (VAR_5->transfer_index >= VAR_9->sg_len) {
   FUNC_3("Nothing left to transfer (index = %d)\n", VAR_5->transfer_index);
   break;
  }


  if (VAR_6 == 0) {
   if (FUNC_0(VAR_5, VAR_0) != 0) {
    FUNC_3("Transfer active in current\n");
    continue;
   }
  }
  else {
   if (FUNC_0(VAR_5, VAR_1) != 0) {
    FUNC_3("Transfer active in next\n");
    continue;
   }
  }


  FUNC_3("Using transfer index %d\n", VAR_5->transfer_index);

  VAR_7 = &VAR_9->sg[VAR_5->transfer_index++];
  FUNC_3("sg = %p\n", VAR_7);

  VAR_7->dma_address = FUNC_2(((void*)0), FUNC_4(VAR_7), VAR_7->offset, VAR_7->length, VAR_4);

  FUNC_3("dma address = %08X, length = %d\n", VAR_7->dma_address, VAR_7->length);

  if (VAR_6 == 0) {
   FUNC_1(VAR_5, VAR_3, VAR_7->dma_address);
   FUNC_1(VAR_5, VAR_0, (VAR_9->blksz & 0x3) ? VAR_7->length : VAR_7->length / 4);
  }
  else {
   FUNC_1(VAR_5, VAR_2, VAR_7->dma_address);
   FUNC_1(VAR_5, VAR_1, (VAR_9->blksz & 0x3) ? VAR_7->length : VAR_7->length / 4);
  }
 }

 FUNC_3("pre dma read done\n");
}
