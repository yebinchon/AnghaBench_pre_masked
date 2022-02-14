
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct at91mci_host {int mmc; TYPE_2__* request; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int blocks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct at91mci_host*,unsigned int) ;
 int FUNC_1 (struct at91mci_host*) ;
 int FUNC_2 (struct at91mci_host*) ;
 int FUNC_3 (struct at91mci_host*) ;
 unsigned int FUNC_4 (struct at91mci_host*,int ) ;
 int FUNC_5 (struct at91mci_host*) ;
 int FUNC_6 (struct at91mci_host*,int ,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_30, void *VAR_31)
{
 struct at91mci_host *VAR_32 = VAR_31;
 int VAR_33 = 0;
 unsigned int VAR_34, VAR_35;

 VAR_34 = FUNC_4(VAR_32, VAR_22);
 VAR_35 = FUNC_4(VAR_32, VAR_10);

 FUNC_8("MCI irq: status = %08X, %08X, %08X\n", VAR_34, VAR_35,
  VAR_34 & VAR_35);

 VAR_34 = VAR_34 & VAR_35;

 if (VAR_34 & VAR_7) {
  VAR_33 = 1;

  if (VAR_34 & VAR_25)
   FUNC_8("MMC: Underrun error\n");
  if (VAR_34 & VAR_12)
   FUNC_8("MMC: Overrun error\n");
  if (VAR_34 & VAR_4)
   FUNC_8("MMC: Data timeout\n");
  if (VAR_34 & VAR_2)
   FUNC_8("MMC: CRC error in data\n");
  if (VAR_34 & VAR_17)
   FUNC_8("MMC: Response timeout\n");
  if (VAR_34 & VAR_15)
   FUNC_8("MMC: Response end bit error\n");
  if (VAR_34 & VAR_13)
   FUNC_8("MMC: Response CRC error\n");
  if (VAR_34 & VAR_14)
   FUNC_8("MMC: Response direction error\n");
  if (VAR_34 & VAR_16)
   FUNC_8("MMC: Response index error\n");
 } else {


  if (VAR_34 & VAR_23) {
   FUNC_8("TX buffer empty\n");
   FUNC_2(VAR_32);
  }

  if (VAR_34 & VAR_5) {
   FUNC_8("ENDRX\n");
   FUNC_3(VAR_32);
  }

  if (VAR_34 & VAR_18) {
   FUNC_8("RX buffer full\n");
   FUNC_6(VAR_32, VAR_26, VAR_27 | VAR_28);
   FUNC_6(VAR_32, VAR_8, VAR_18 | VAR_5);
   VAR_33 = 1;
  }

  if (VAR_34 & VAR_6)
   FUNC_8("Transmit has ended\n");

  if (VAR_34 & VAR_11) {
   FUNC_8("Card is ready\n");
   FUNC_5(VAR_32);
   VAR_33 = 1;
  }

  if (VAR_34 & VAR_3)
   FUNC_8("Data transfer in progress\n");

  if (VAR_34 & VAR_0) {
   FUNC_8("Block transfer has ended\n");
   if (VAR_32->request->data && VAR_32->request->data->blocks > 1) {


    VAR_33 = 1;
   } else {
    FUNC_6(VAR_32, VAR_9, VAR_11);
   }
  }

  if (VAR_34 & VAR_20)
   FUNC_7(VAR_32->mmc);

  if (VAR_34 & VAR_21)
   FUNC_7(VAR_32->mmc);

  if (VAR_34 & VAR_24)
   FUNC_8("Ready to transmit\n");

  if (VAR_34 & VAR_19)
   FUNC_8("Ready to receive\n");

  if (VAR_34 & VAR_1) {
   FUNC_8("Command ready\n");
   VAR_33 = FUNC_1(VAR_32);
  }
 }

 if (VAR_33) {
  FUNC_8("Completed command\n");
  FUNC_6(VAR_32, VAR_8, 0xffffffff & ~(VAR_20 | VAR_21));
  FUNC_0(VAR_32, VAR_34);
 } else
  FUNC_6(VAR_32, VAR_8, VAR_34 & ~(VAR_20 | VAR_21));

 return VAR_29;
}
