
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmci_host {int lock; struct mmc_command* cmd; struct mmc_data* data; scalar_t__ base; } ;
struct mmc_data {int dummy; } ;
struct mmc_command {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct mmci_host*,char*,int) ;
 int FUNC_1 (int) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct mmci_host*,struct mmc_command*,int) ;
 int FUNC_3 (struct mmci_host*,struct mmc_data*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_13, void *VAR_14)
{
 struct mmci_host *VAR_15 = VAR_14;
 u32 VAR_16;
 int VAR_17 = 0;

 FUNC_5(&VAR_15->lock);

 do {
  struct mmc_command *VAR_18;
  struct mmc_data *VAR_19;

  VAR_16 = FUNC_4(VAR_15->base + VAR_12);
  VAR_16 &= FUNC_4(VAR_15->base + VAR_11);
  FUNC_7(VAR_16, VAR_15->base + VAR_10);

  FUNC_0(VAR_15, "irq0 %08x\n", VAR_16);

  VAR_19 = VAR_15->data;
  if (VAR_16 & (VAR_5|VAR_7|VAR_9|
         VAR_8|VAR_6|VAR_4) && VAR_19)
   FUNC_3(VAR_15, VAR_19, VAR_16);

  VAR_18 = VAR_15->cmd;
  if (VAR_16 & (VAR_0|VAR_3|VAR_2|VAR_1) && VAR_18)
   FUNC_2(VAR_15, VAR_18, VAR_16);

  VAR_17 = 1;
 } while (VAR_16);

 FUNC_6(&VAR_15->lock);

 return FUNC_1(VAR_17);
}
