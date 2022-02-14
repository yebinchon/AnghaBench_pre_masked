
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxcmci_host {scalar_t__ power_mode; int clock; scalar_t__ base; int cmdat; TYPE_1__* pdata; int dma; } ;
struct mmc_ios {scalar_t__ bus_width; scalar_t__ power_mode; int clock; int vdd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* setpower ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct mmc_host*) ;
 struct mxcmci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mxcmci_host*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_7, struct mmc_ios *VAR_8)
{
 struct mxcmci_host *VAR_9 = FUNC_2(VAR_7);
 if (VAR_8->bus_width == VAR_2)
  VAR_9->cmdat |= VAR_0;
 else
  VAR_9->cmdat &= ~VAR_0;

 if (VAR_9->power_mode != VAR_8->power_mode) {
  if (VAR_9->pdata && VAR_9->pdata->setpower)
   VAR_9->pdata->setpower(FUNC_1(VAR_7), VAR_8->vdd);
  VAR_9->power_mode = VAR_8->power_mode;
  if (VAR_8->power_mode == VAR_3)
   VAR_9->cmdat |= VAR_1;
 }

 if (VAR_8->clock) {
  FUNC_3(VAR_9, VAR_8->clock);
  FUNC_5(VAR_5, VAR_9->base + VAR_4);
 } else {
  FUNC_5(VAR_6, VAR_9->base + VAR_4);
 }

 VAR_9->clock = VAR_8->clock;
}
