
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int response_busy; int base; int flags; int irq_lock; scalar_t__ use_dma; TYPE_1__* mrq; struct mmc_command* cmd; int mmc; } ;
struct mmc_data {int flags; } ;
struct mmc_command {int opcode; int arg; int flags; } ;
struct TYPE_2__ {struct mmc_command* stop; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct omap_hsmmc_host *VAR_18, struct mmc_command *VAR_19,
 struct mmc_data *VAR_20)
{
 int VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;

 FUNC_1(FUNC_3(VAR_18->mmc), "%s: CMD%d, argument 0x%08x\n",
  FUNC_4(VAR_18->mmc), VAR_19->opcode, VAR_19->arg);
 VAR_18->cmd = VAR_19;




 FUNC_0(VAR_18->base, VAR_16, VAR_17);
 FUNC_0(VAR_18->base, VAR_10, VAR_9);

 if (VAR_18->use_dma)
  FUNC_0(VAR_18->base, VAR_8,
     VAR_9 & ~(VAR_2 | VAR_3));
 else
  FUNC_0(VAR_18->base, VAR_8, VAR_9);

 VAR_18->response_busy = 0;
 if (VAR_19->flags & VAR_14) {
  if (VAR_19->flags & VAR_12)
   VAR_22 = 1;
  else if (VAR_19->flags & VAR_13) {
   VAR_22 = 3;
   VAR_18->response_busy = 1;
  } else
   VAR_22 = 2;
 }






 if (VAR_19 == VAR_18->mrq->stop)
  VAR_23 = 0x3;

 VAR_21 = (VAR_19->opcode << 24) | (VAR_22 << 16) | (VAR_23 << 22);

 if (VAR_20) {
  VAR_21 |= VAR_7 | VAR_15 | VAR_1;
  if (VAR_20->flags & VAR_11)
   VAR_21 |= VAR_5;
  else
   VAR_21 &= ~(VAR_5);
 }

 if (VAR_18->use_dma)
  VAR_21 |= VAR_6;






 if (!FUNC_2())
  FUNC_5(&VAR_18->irq_lock, VAR_18->flags);

 FUNC_0(VAR_18->base, VAR_0, VAR_19->arg);
 FUNC_0(VAR_18->base, VAR_4, VAR_21);
}
