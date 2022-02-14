
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_ios {int bus_width; int power_mode; scalar_t__ clock; } ;
struct mmc_host {int class_dev; } ;
struct atmel_mci_slot {int flags; scalar_t__ clock; int sdc_reg; struct atmel_mci* host; } ;
struct atmel_mci {int mode_reg; int bus_hz; int need_clock_update; int lock; int mck; TYPE_1__** slot; int queue; } ;
struct TYPE_2__ {unsigned int clock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,unsigned int,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct atmel_mci*,int ) ;
 int FUNC_8 (struct atmel_mci*,int ,int) ;
 struct atmel_mci_slot* FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct mmc_host *VAR_12, struct mmc_ios *VAR_13)
{
 struct atmel_mci_slot *VAR_14 = FUNC_9(VAR_12);
 struct atmel_mci *VAR_15 = VAR_14->host;
 unsigned int VAR_16;

 VAR_14->sdc_reg &= ~VAR_10;
 switch (VAR_13->bus_width) {
 case 130:
  VAR_14->sdc_reg |= VAR_8;
  break;
 case 129:
  VAR_14->sdc_reg |= VAR_9;
  break;
 }

 if (VAR_13->clock) {
  unsigned int VAR_17 = ~0U;
  u32 VAR_18;

  FUNC_11(&VAR_15->lock);
  if (!VAR_15->mode_reg) {
   FUNC_3(VAR_15->mck);
   FUNC_8(VAR_15, VAR_2, VAR_5);
   FUNC_8(VAR_15, VAR_2, VAR_4);
  }





  VAR_14->clock = VAR_13->clock;
  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
   if (VAR_15->slot[VAR_16] && VAR_15->slot[VAR_16]->clock
     && VAR_15->slot[VAR_16]->clock < VAR_17)
    VAR_17 = VAR_15->slot[VAR_16]->clock;
  }


  VAR_18 = FUNC_0(VAR_15->bus_hz, 2 * VAR_17) - 1;
  if (VAR_18 > 255) {
   FUNC_4(&VAR_12->class_dev,
    "clock %u too slow; using %lu\n",
    VAR_17, VAR_15->bus_hz / (2 * 256));
   VAR_18 = 255;
  }

  VAR_15->mode_reg = FUNC_1(VAR_18);






  if (FUNC_6())
   VAR_15->mode_reg |= (VAR_7 | VAR_6);

  if (FUNC_5(&VAR_15->queue))
   FUNC_8(VAR_15, VAR_11, VAR_15->mode_reg);
  else
   VAR_15->need_clock_update = 1;

  FUNC_12(&VAR_15->lock);
 } else {
  bool VAR_19 = 0;

  FUNC_11(&VAR_15->lock);
  VAR_14->clock = 0;
  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
   if (VAR_15->slot[VAR_16] && VAR_15->slot[VAR_16]->clock) {
    VAR_19 = 1;
    break;
   }
  }
  if (!VAR_19) {
   FUNC_8(VAR_15, VAR_2, VAR_3);
   if (VAR_15->mode_reg) {
    FUNC_7(VAR_15, VAR_11);
    FUNC_2(VAR_15->mck);
   }
   VAR_15->mode_reg = 0;
  }
  FUNC_12(&VAR_15->lock);
 }

 switch (VAR_13->power_mode) {
 case 128:
  FUNC_10(VAR_0, &VAR_14->flags);
  break;
 default:
  break;
 }
}
