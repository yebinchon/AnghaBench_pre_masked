
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {int clock; scalar_t__ bus_width; int power_mode; int bus_mode; } ;
struct mmc_host {int dummy; } ;
struct at91mci_host {TYPE_1__* board; int bus_mode; int mci_clk; } ;
struct TYPE_2__ {scalar_t__ vcc_pin; scalar_t__ wire4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct at91mci_host*,int ) ;
 int FUNC_2 (struct at91mci_host*,int ,int) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int) ;
 struct at91mci_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_8, struct mmc_ios *VAR_9)
{
 int VAR_10;
 struct at91mci_host *VAR_11 = FUNC_5(VAR_8);
 unsigned long VAR_12 = FUNC_3(VAR_11->mci_clk);

 VAR_11->bus_mode = VAR_9->bus_mode;

 if (VAR_9->clock == 0) {

  FUNC_2(VAR_11, VAR_1, VAR_2);
  VAR_10 = 0;
 }
 else {

  FUNC_2(VAR_11, VAR_1, VAR_3);

  if ((VAR_12 % (VAR_9->clock * 2)) == 0)
   VAR_10 = ((VAR_12 / VAR_9->clock) / 2) - 1;
  else
   VAR_10 = (VAR_12 / VAR_9->clock) / 2;

  FUNC_6("clkdiv = %d. mcck = %ld\n", VAR_10,
   VAR_12 / (2 * (VAR_10 + 1)));
 }
 if (VAR_9->bus_width == VAR_7 && VAR_11->board->wire4) {
  FUNC_6("MMC: Setting controller bus width to 4\n");
  FUNC_2(VAR_11, VAR_6, FUNC_1(VAR_11, VAR_6) | VAR_5);
 }
 else {
  FUNC_6("MMC: Setting controller bus width to 1\n");
  FUNC_2(VAR_11, VAR_6, FUNC_1(VAR_11, VAR_6) & ~VAR_5);
 }


 FUNC_2(VAR_11, VAR_4, (FUNC_1(VAR_11, VAR_4) & ~VAR_0) | VAR_10);


 if (VAR_11->board->vcc_pin) {
  switch (VAR_9->power_mode) {
   case 130:
    FUNC_4(VAR_11->board->vcc_pin, 0);
    break;
   case 128:
    FUNC_4(VAR_11->board->vcc_pin, 1);
    break;
   case 129:
    break;
   default:
    FUNC_0(1);
  }
 }
}
