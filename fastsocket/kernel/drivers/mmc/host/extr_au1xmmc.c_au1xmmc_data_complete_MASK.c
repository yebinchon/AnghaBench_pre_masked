
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_data {int blocks; int blksz; scalar_t__ bytes_xfered; int error; int sg_len; int sg; } ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_7__ {int dir; } ;
struct au1xmmc_host {scalar_t__ status; int flags; TYPE_3__ pio; TYPE_2__ dma; int mmc; struct mmc_request* mrq; } ;
struct TYPE_9__ {TYPE_5__* chan_ptr; } ;
typedef TYPE_4__ chan_tab_t ;
struct TYPE_10__ {scalar_t__ ddma_bytecnt; } ;
typedef TYPE_5__ au1x_dma_chan_t ;
struct TYPE_6__ {struct mmc_data* data; } ;


 int FUNC_0 (struct au1xmmc_host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct au1xmmc_host*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct au1xmmc_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct au1xmmc_host *VAR_8, u32 VAR_9)
{
 struct mmc_request *VAR_10 = VAR_8->mrq;
 struct mmc_data *VAR_11;
 u32 VAR_12;

 FUNC_2((VAR_8->status != VAR_3) && (VAR_8->status != VAR_4));

 if (VAR_8->mrq == ((void*)0))
  return;

 VAR_11 = VAR_10->cmd->data;

 if (VAR_9 == 0)
  VAR_9 = FUNC_4(FUNC_1(VAR_8));


 while ((VAR_8->flags & VAR_2) && (VAR_9 & VAR_5))
  VAR_9 = FUNC_4(FUNC_1(VAR_8));

 VAR_11->error = 0;
 FUNC_6(FUNC_7(VAR_8->mmc), VAR_11->sg, VAR_11->sg_len, VAR_8->dma.dir);


 VAR_12 = (VAR_9 & (VAR_7 | VAR_6));
 if (VAR_8->flags & VAR_2)
  VAR_12 |= ((VAR_9 & 0x07) == 0x02) ? 0 : 1;

 if (VAR_12)
  VAR_11->error = -VAR_0;


 FUNC_5(VAR_7 | VAR_6, FUNC_1(VAR_8));

 VAR_11->bytes_xfered = 0;

 if (!VAR_11->error) {
  if (VAR_8->flags & VAR_1) {







  } else
   VAR_11->bytes_xfered =
    (VAR_11->blocks * VAR_11->blksz) - VAR_8->pio.len;
 }

 FUNC_3(VAR_8);
}
