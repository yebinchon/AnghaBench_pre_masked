
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxamci_host {unsigned long clkrate; scalar_t__ clkrt; scalar_t__ power_mode; int cmdat; int clk; } ;
struct mmc_ios {int clock; scalar_t__ power_mode; scalar_t__ bus_width; int vdd; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 struct pxamci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (struct pxamci_host*,int ) ;
 int FUNC_6 (struct pxamci_host*) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_5, struct mmc_ios *VAR_6)
{
 struct pxamci_host *VAR_7 = FUNC_3(VAR_5);

 if (VAR_6->clock) {
  unsigned long VAR_8 = VAR_7->clkrate;
  unsigned int VAR_9 = VAR_8 / VAR_6->clock;

  if (VAR_7->clkrt == VAR_0)
   FUNC_1(VAR_7->clk);

  if (VAR_6->clock == 26000000) {

   VAR_7->clkrt = 7;
  } else {

   if (!VAR_9)
    VAR_9 = 1;






   if (VAR_8 / VAR_9 > VAR_6->clock)
    VAR_9 <<= 1;
   VAR_7->clkrt = FUNC_2(VAR_9) - 1;
  }




 } else {
  FUNC_6(VAR_7);
  if (VAR_7->clkrt != VAR_0) {
   VAR_7->clkrt = VAR_0;
   FUNC_0(VAR_7->clk);
  }
 }

 if (VAR_7->power_mode != VAR_6->power_mode) {
  VAR_7->power_mode = VAR_6->power_mode;

  FUNC_5(VAR_7, VAR_6->vdd);

  if (VAR_6->power_mode == VAR_4)
   VAR_7->cmdat |= VAR_1;
 }

 if (VAR_6->bus_width == VAR_3)
  VAR_7->cmdat |= VAR_2;
 else
  VAR_7->cmdat &= ~VAR_2;

 FUNC_4("PXAMCI: clkrt = %x cmdat = %x\n",
   VAR_7->clkrt, VAR_7->cmdat);
}
