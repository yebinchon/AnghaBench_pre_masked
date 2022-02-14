
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int mmc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct tmio_mmc_host*,unsigned int) ;
 int FUNC_1 (struct tmio_mmc_host*,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (struct tmio_mmc_host*,int ) ;
 int FUNC_6 (struct tmio_mmc_host*,unsigned int) ;
 int FUNC_7 (struct tmio_mmc_host*) ;
 int FUNC_8 (struct tmio_mmc_host*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct tmio_mmc_host *VAR_12 = VAR_11;
 unsigned int VAR_13, VAR_14, VAR_15;

 FUNC_3("MMC IRQ begin\n");

 VAR_15 = FUNC_5(VAR_12, VAR_1);
 VAR_14 = FUNC_5(VAR_12, VAR_0);
 VAR_13 = VAR_15 & VAR_4 & ~VAR_14;

 FUNC_4(VAR_15);
 FUNC_4(VAR_13);

 if (!VAR_13) {
  FUNC_1(VAR_12, VAR_15 & ~VAR_14);

  FUNC_3("tmio_mmc: Spurious irq, disabling! "
   "0x%08x 0x%08x 0x%08x\n", VAR_15, VAR_14, VAR_13);
  FUNC_4(VAR_15);

  goto out;
 }

 while (VAR_13) {

  if (VAR_13 & (VAR_5 | VAR_6)) {
   FUNC_0(VAR_12, VAR_5 |
    VAR_6);
   FUNC_2(VAR_12->mmc, 0);
  }







  if (VAR_13 & VAR_3) {
   FUNC_0(VAR_12, VAR_3);
   FUNC_6(VAR_12, VAR_15);
  }


  if (VAR_13 & (VAR_8 | VAR_9)) {
   FUNC_0(VAR_12, VAR_8 | VAR_9);
   FUNC_8(VAR_12);
  }


  if (VAR_13 & VAR_7) {
   FUNC_0(VAR_12, VAR_7);
   FUNC_7(VAR_12);
  }


  VAR_15 = FUNC_5(VAR_12, VAR_1);
  VAR_14 = FUNC_5(VAR_12, VAR_0);
  VAR_13 = VAR_15 & VAR_4 & ~VAR_14;

  FUNC_3("Status at end of loop: %08x\n", VAR_15);
  FUNC_4(VAR_15);
 }
 FUNC_3("MMC IRQ end\n");

out:
 return VAR_2;
}
