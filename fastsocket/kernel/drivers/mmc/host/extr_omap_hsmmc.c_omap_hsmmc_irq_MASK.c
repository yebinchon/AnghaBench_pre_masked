
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_hsmmc_host {int irq_lock; TYPE_2__* mrq; TYPE_3__* cmd; int base; struct mmc_data* data; int mmc; scalar_t__ response_busy; } ;
struct mmc_data {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int error; int opcode; } ;
struct TYPE_5__ {TYPE_1__* cmd; } ;
struct TYPE_4__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct omap_hsmmc_host*,TYPE_3__*) ;
 int FUNC_5 (struct omap_hsmmc_host*,int) ;
 int FUNC_6 (struct omap_hsmmc_host*,int) ;
 int FUNC_7 (struct omap_hsmmc_host*,int ) ;
 int FUNC_8 (struct omap_hsmmc_host*,struct mmc_data*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_14, void *VAR_15)
{
 struct omap_hsmmc_host *VAR_16 = VAR_15;
 struct mmc_data *VAR_17;
 int VAR_18 = 0, VAR_19 = 0, VAR_20;

 FUNC_9(&VAR_16->irq_lock);

 if (VAR_16->mrq == ((void*)0)) {
  FUNC_1(VAR_16->base, VAR_12,
   FUNC_0(VAR_16->base, VAR_12));

  FUNC_0(VAR_16->base, VAR_12);
  FUNC_10(&VAR_16->irq_lock);
  return VAR_9;
 }

 VAR_17 = VAR_16->data;
 VAR_20 = FUNC_0(VAR_16->base, VAR_12);
 FUNC_2(FUNC_3(VAR_16->mmc), "IRQ Status is %x\n", VAR_20);

 if (VAR_20 & VAR_7) {



  if ((VAR_20 & VAR_3) ||
   (VAR_20 & VAR_2)) {
   if (VAR_16->cmd) {
    if (VAR_20 & VAR_3) {
     FUNC_7(VAR_16,
         VAR_10);
     VAR_16->cmd->error = -VAR_8;
    } else {
     VAR_16->cmd->error = -VAR_6;
    }
    VAR_18 = 1;
   }
   if (VAR_16->data || VAR_16->response_busy) {
    if (VAR_16->data)
     FUNC_5(VAR_16,
        -VAR_8);
    VAR_16->response_busy = 0;
    FUNC_7(VAR_16, VAR_11);
   }
  }
  if ((VAR_20 & VAR_5) ||
   (VAR_20 & VAR_4)) {
   if (VAR_16->data || VAR_16->response_busy) {
    int VAR_21 = (VAR_20 & VAR_5) ?
      -VAR_8 : -VAR_6;

    if (VAR_16->data)
     FUNC_5(VAR_16, VAR_21);
    else
     VAR_16->mrq->cmd->error = VAR_21;
    VAR_16->response_busy = 0;
    FUNC_7(VAR_16, VAR_11);
    VAR_19 = 1;
   }
  }
  if (VAR_20 & VAR_0) {
   FUNC_2(FUNC_3(VAR_16->mmc),
    "Ignoring card err CMD%d\n", VAR_16->cmd->opcode);
   if (VAR_16->cmd)
    VAR_18 = 1;
   if (VAR_16->data)
    VAR_19 = 1;
  }
 }

 FUNC_1(VAR_16->base, VAR_12, VAR_20);

 FUNC_0(VAR_16->base, VAR_12);

 if (VAR_18 || ((VAR_20 & VAR_1) && VAR_16->cmd))
  FUNC_4(VAR_16, VAR_16->cmd);
 if ((VAR_19 || (VAR_20 & VAR_13)) && VAR_16->mrq)
  FUNC_8(VAR_16, VAR_17);

 FUNC_10(&VAR_16->irq_lock);

 return VAR_9;
}
