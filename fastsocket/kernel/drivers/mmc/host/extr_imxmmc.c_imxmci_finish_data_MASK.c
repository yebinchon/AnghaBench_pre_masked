
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int error; int bytes_xfered; int sg; } ;
struct imxmci_host {struct mmc_data* data; int dma_size; int mmc; int dma_dir; int dma_nents; int dma; int pending_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct imxmci_host *VAR_8, unsigned int VAR_9)
{
 struct mmc_data *VAR_10 = VAR_8->data;
 int VAR_11;

 if (FUNC_4(VAR_3, &VAR_8->pending_events)) {
  FUNC_2(VAR_8->dma);
  FUNC_1(FUNC_3(VAR_8->mmc), VAR_10->sg, VAR_8->dma_nents,
        VAR_8->dma_dir);
 }

 if (VAR_9 & VAR_6) {
  FUNC_0(FUNC_3(VAR_8->mmc), "request failed. status: 0x%08x\n", VAR_9);
  if (VAR_9 & (VAR_4 | VAR_5))
   VAR_10->error = -VAR_0;
  else if (VAR_9 & VAR_7)
   VAR_10->error = -VAR_2;
  else
   VAR_10->error = -VAR_1;
 } else {
  VAR_10->bytes_xfered = VAR_8->dma_size;
 }

 VAR_11 = VAR_10->error;

 VAR_8->data = ((void*)0);

 return VAR_11;
}
