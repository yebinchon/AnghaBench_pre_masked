
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int offset; int dma_address; } ;
struct mmc_data {scalar_t__ sg_len; int bytes_xfered; struct scatterlist* sg; } ;
struct mmc_command {struct mmc_data* data; } ;
struct at91mci_host {scalar_t__ in_use_index; scalar_t__ transfer_index; struct mmc_command* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct at91mci_host*) ;
 int FUNC_1 (struct at91mci_host*,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int ) ;
 unsigned int* FUNC_5 (int ,int ) ;
 int FUNC_6 (unsigned int*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct scatterlist*) ;
 unsigned int FUNC_9 (unsigned int) ;

__attribute__((used)) static void FUNC_10(struct at91mci_host *VAR_6)
{
 struct mmc_command *VAR_7;
 struct mmc_data *VAR_8;

 FUNC_7("post dma read\n");

 VAR_7 = VAR_6->cmd;
 if (!VAR_7) {
  FUNC_7("no command\n");
  return;
 }

 VAR_8 = VAR_7->data;
 if (!VAR_8) {
  FUNC_7("no data\n");
  return;
 }

 while (VAR_6->in_use_index < VAR_6->transfer_index) {
  struct scatterlist *VAR_9;

  FUNC_7("finishing index %d\n", VAR_6->in_use_index);

  VAR_9 = &VAR_8->sg[VAR_6->in_use_index++];

  FUNC_7("Unmapping page %08X\n", VAR_9->dma_address);

  FUNC_3(((void*)0), VAR_9->dma_address, VAR_9->length, VAR_4);

  if (FUNC_2()) {
   unsigned int *VAR_10;
   int VAR_11;


   VAR_10 = FUNC_5(FUNC_8(VAR_9), VAR_5) + VAR_9->offset;
   FUNC_7("buffer = %p, length = %d\n", VAR_10, VAR_9->length);

   for (VAR_11 = 0; VAR_11 < (VAR_9->length / 4); VAR_11++)
    VAR_10[VAR_11] = FUNC_9(VAR_10[VAR_11]);

   FUNC_6(VAR_10, VAR_5);
  }

  FUNC_4(FUNC_8(VAR_9));

  VAR_8->bytes_xfered += VAR_9->length;
 }


 if (VAR_6->transfer_index < VAR_8->sg_len)
  FUNC_0(VAR_6);
 else {
  FUNC_1(VAR_6, VAR_1, VAR_0);
  FUNC_1(VAR_6, VAR_2, VAR_3);
 }

 FUNC_7("post dma read done\n");
}
