
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {int length; } ;
struct mmc_data {int blocks; int blksz; int flags; int sg_len; struct scatterlist* sg; } ;
struct TYPE_6__ {int len; int dir; } ;
struct TYPE_5__ {int len; scalar_t__ offset; scalar_t__ index; } ;
struct au1xmmc_host {int flags; TYPE_3__ dma; int mmc; TYPE_2__ pio; TYPE_1__* mrq; } ;
struct TYPE_4__ {scalar_t__ stop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct au1xmmc_host*) ;
 int VAR_3 ;
 int FUNC_1 (struct au1xmmc_host*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct au1xmmc_host*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__,void*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,void*,int,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_8 (int ,struct scatterlist*,int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_11(struct au1xmmc_host *VAR_11,
    struct mmc_data *VAR_12)
{
 int VAR_13 = VAR_12->blocks * VAR_12->blksz;

 if (VAR_12->flags & VAR_8)
  VAR_11->flags |= VAR_5;
 else
  VAR_11->flags |= VAR_7;

 if (VAR_11->mrq->stop)
  VAR_11->flags |= VAR_6;

 VAR_11->dma.dir = VAR_2;

 VAR_11->dma.len = FUNC_7(FUNC_9(VAR_11->mmc), VAR_12->sg,
       VAR_12->sg_len, VAR_11->dma.dir);

 if (VAR_11->dma.len == 0)
  return -VAR_3;

 FUNC_6(VAR_12->blksz - 1, FUNC_1(VAR_11));

 if (VAR_11->flags & VAR_4) {
 } else {
  VAR_11->pio.index = 0;
  VAR_11->pio.offset = 0;
  VAR_11->pio.len = VAR_13;

  if (VAR_11->flags & VAR_7)
   FUNC_2(VAR_11, VAR_10);
  else
   FUNC_2(VAR_11, VAR_9);

 }

 return 0;

dataerr:
 FUNC_8(FUNC_9(VAR_11->mmc), VAR_12->sg, VAR_12->sg_len,
   VAR_11->dma.dir);
 return -VAR_3;
}
