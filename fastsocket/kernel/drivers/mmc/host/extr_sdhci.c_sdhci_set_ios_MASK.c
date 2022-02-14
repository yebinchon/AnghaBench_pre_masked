
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sdhci_host {int flags; scalar_t__ version; unsigned int clock; int quirks; int lock; } ;
struct mmc_ios {scalar_t__ power_mode; unsigned int clock; int vdd; scalar_t__ bus_width; scalar_t__ timing; scalar_t__ drv_type; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*,int) ;
 int FUNC_6 (struct sdhci_host*,unsigned int) ;
 int FUNC_7 (struct sdhci_host*,int) ;
 int FUNC_8 (struct sdhci_host*,int ,int ) ;
 int FUNC_9 (struct sdhci_host*,int ,int ) ;
 int FUNC_10 (struct sdhci_host*,int,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct mmc_host *VAR_34, struct mmc_ios *VAR_35)
{
 struct sdhci_host *VAR_36;
 unsigned long VAR_37;
 u8 VAR_38;

 VAR_36 = FUNC_0(VAR_34);

 FUNC_11(&VAR_36->lock, VAR_37);

 if (VAR_36->flags & VAR_26)
  goto out;





 if (VAR_35->power_mode == VAR_2) {
  FUNC_9(VAR_36, 0, VAR_32);
  FUNC_4(VAR_36);
 }

 FUNC_6(VAR_36, VAR_35->clock);

 if (VAR_35->power_mode == VAR_2)
  FUNC_7(VAR_36, -1);
 else
  FUNC_7(VAR_36, VAR_35->vdd);

 VAR_38 = FUNC_2(VAR_36, VAR_27);

 if (VAR_35->bus_width == VAR_1)
  VAR_38 |= VAR_14;
 else
  VAR_38 &= ~VAR_14;

 if (VAR_35->bus_width == VAR_0)
  VAR_38 |= VAR_13;
 else
  VAR_38 &= ~VAR_13;

 if (VAR_35->timing == VAR_5)
  VAR_38 |= VAR_18;
 else
  VAR_38 &= ~VAR_18;

 if (VAR_36->version >= VAR_33) {
  u16 VAR_39, VAR_40;
  unsigned int VAR_41;


  if ((VAR_35->timing == VAR_10) ||
      (VAR_35->timing == VAR_7) ||
      (VAR_35->timing == VAR_6) ||
      (VAR_35->timing == VAR_9))
   VAR_38 |= VAR_18;

  VAR_40 = FUNC_3(VAR_36, VAR_28);
  if (!(VAR_40 & VAR_19)) {
   FUNC_8(VAR_36, VAR_38, VAR_27);




   VAR_40 &= ~VAR_17;
   if (VAR_35->drv_type == VAR_3)
    VAR_40 |= VAR_15;
   else if (VAR_35->drv_type == VAR_4)
    VAR_40 |= VAR_16;

   FUNC_10(VAR_36, VAR_40, VAR_28);
  } else {
   VAR_39 = FUNC_3(VAR_36, VAR_12);
   VAR_39 &= ~VAR_11;
   FUNC_10(VAR_36, VAR_39, VAR_12);

   FUNC_8(VAR_36, VAR_38, VAR_27);


   VAR_41 = VAR_36->clock;
   VAR_36->clock = 0;
   FUNC_6(VAR_36, VAR_41);
  }

  VAR_40 = FUNC_3(VAR_36, VAR_28);


  VAR_40 &= ~VAR_21;
  if (VAR_35->timing == VAR_8)
   VAR_40 |= VAR_23;
  else if (VAR_35->timing == VAR_9)
   VAR_40 |= VAR_24;
  else if (VAR_35->timing == VAR_10)
   VAR_40 |= VAR_25;
  else if (VAR_35->timing == VAR_7)
   VAR_40 |= VAR_22;
  else if (VAR_35->timing == VAR_6)
   VAR_40 |= VAR_20;


  VAR_39 = FUNC_3(VAR_36, VAR_12);
  VAR_39 &= ~VAR_11;
  FUNC_10(VAR_36, VAR_39, VAR_12);

  FUNC_10(VAR_36, VAR_40, VAR_28);


  VAR_41 = VAR_36->clock;
  VAR_36->clock = 0;
  FUNC_6(VAR_36, VAR_41);
 } else
  FUNC_8(VAR_36, VAR_38, VAR_27);






 if(VAR_36->quirks & VAR_29)
  FUNC_5(VAR_36, VAR_30 | VAR_31);

out:
 FUNC_1();
 FUNC_12(&VAR_36->lock, VAR_37);
}
