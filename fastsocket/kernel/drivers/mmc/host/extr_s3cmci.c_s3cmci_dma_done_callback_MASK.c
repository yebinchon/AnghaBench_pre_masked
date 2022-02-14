
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct s3cmci_host {int dma_complete; void* complete_what; TYPE_2__* mrq; int complete_lock; int pio_tasklet; scalar_t__ dmatogo; scalar_t__ base; } ;
struct s3c2410_dma_chan {int dummy; } ;
typedef enum s3c2410_dma_buffresult { ____Placeholder_s3c2410_dma_buffresult } s3c2410_dma_buffresult ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int error; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct s3cmci_host*) ;
 int FUNC_2 (struct s3cmci_host*,int ,char*,int,int ,int ,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct s3c2410_dma_chan *VAR_9,
         void *VAR_10, int VAR_11,
         enum s3c2410_dma_buffresult VAR_12)
{
 struct s3cmci_host *VAR_13 = VAR_10;
 unsigned long VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_15 = FUNC_3(VAR_13->base + VAR_3);
 VAR_16 = FUNC_3(VAR_13->base + VAR_5);
 VAR_17 = FUNC_3(VAR_13->base + VAR_6);
 VAR_18 = FUNC_3(VAR_13->base + VAR_4);

 FUNC_0(!VAR_13->mrq);
 FUNC_0(!VAR_13->mrq->data);
 FUNC_0(!VAR_13->dmatogo);

 FUNC_4(&VAR_13->complete_lock, VAR_14);

 if (VAR_12 != VAR_2) {
  FUNC_2(VAR_13, VAR_8, "DMA FAILED: csta=0x%08x dsta=0x%08x "
   "fsta=0x%08x dcnt:0x%08x result:0x%08x toGo:%u\n",
   VAR_15, VAR_16, VAR_17,
   VAR_18, VAR_12, VAR_13->dmatogo);

  goto fail_request;
 }

 VAR_13->dmatogo--;
 if (VAR_13->dmatogo) {
  FUNC_2(VAR_13, VAR_7, "DMA DONE  Size:%i DSTA:[%08x] "
   "DCNT:[%08x] toGo:%u\n",
   VAR_11, VAR_16, VAR_18, VAR_13->dmatogo);

  goto out;
 }

 FUNC_2(VAR_13, VAR_7, "DMA FINISHED Size:%i DSTA:%08x DCNT:%08x\n",
  VAR_11, VAR_16, VAR_18);

 VAR_13->dma_complete = 1;
 VAR_13->complete_what = VAR_0;

out:
 FUNC_6(&VAR_13->pio_tasklet);
 FUNC_5(&VAR_13->complete_lock, VAR_14);
 return;

fail_request:
 VAR_13->mrq->data->error = -VAR_1;
 VAR_13->complete_what = VAR_0;
 FUNC_1(VAR_13);

 goto out;
}
