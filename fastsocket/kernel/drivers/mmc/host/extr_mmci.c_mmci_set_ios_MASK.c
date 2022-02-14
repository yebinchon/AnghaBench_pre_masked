
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {scalar_t__ hw_designer; int lock; scalar_t__ base; int pwr; TYPE_1__* plat; int vcc; } ;
struct mmc_ios {int power_mode; scalar_t__ bus_mode; int clock; int vdd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* translate_vdd ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;



 int FUNC_0 (struct mmc_host*) ;
 struct mmci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mmci_host*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_7, struct mmc_ios *VAR_8)
{
 struct mmci_host *VAR_9 = FUNC_1(VAR_7);
 u32 VAR_10 = 0;
 unsigned long VAR_11;

 switch (VAR_8->power_mode) {
 case 130:
  if(VAR_9->vcc &&
     FUNC_5(VAR_9->vcc))
   FUNC_4(VAR_9->vcc);
  break;
 case 128:
  if (!VAR_9->vcc && VAR_9->plat->translate_vdd)
   VAR_10 |= VAR_9->plat->translate_vdd(FUNC_0(VAR_7), VAR_8->vdd);

  if (VAR_9->hw_designer != VAR_0) {
   VAR_10 |= VAR_3;
   break;
  }
 case 129:
  VAR_10 |= VAR_2;
  break;
 }

 if (VAR_8->bus_mode == VAR_6) {
  if (VAR_9->hw_designer != VAR_0)
   VAR_10 |= VAR_4;
  else {




   VAR_10 |= VAR_1;
  }
 }

 FUNC_6(&VAR_9->lock, VAR_11);

 FUNC_3(VAR_9, VAR_8->clock);

 if (VAR_9->pwr != VAR_10) {
  VAR_9->pwr = VAR_10;
  FUNC_9(VAR_10, VAR_9->base + VAR_5);
 }

 FUNC_7(&VAR_9->lock, VAR_11);
}
