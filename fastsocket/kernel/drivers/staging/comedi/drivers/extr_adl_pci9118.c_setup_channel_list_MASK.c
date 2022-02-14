
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; int minor; } ;
struct TYPE_2__ {int AdControlReg; int chanlistlen; int* chanlist; unsigned int softsshsample; unsigned int softsshhold; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_9,
         struct comedi_subdevice *VAR_10, int VAR_11,
         unsigned int *VAR_12, int VAR_13, int VAR_14,
         int VAR_15, int VAR_16, char VAR_17)
{
 unsigned int VAR_18, VAR_19 = 0, VAR_20 = 0;
 unsigned int VAR_21, VAR_22, VAR_23 = 0x00;

 FUNC_3
     ("adl_pci9118 EDBG: BGN: setup_channel_list(%d,.,%d,.,%d,%d,%d,%d)\n",
      VAR_9->minor, VAR_11, VAR_13, VAR_14, VAR_15, VAR_16);

 if (VAR_16 == 1) {
  VAR_13 = 8;
  VAR_16 = 0;
 }

 if (FUNC_0(VAR_12[0]) == VAR_0)
  VAR_19 = 1;
 if (FUNC_2(VAR_12[0]) < VAR_4)
  VAR_20 = 1;



 if (!VAR_20) {
  VAR_8->AdControlReg |= VAR_2;
 } else {
  VAR_8->AdControlReg &= ((~VAR_2) & 0xff);
 }

 if (VAR_19) {
  VAR_8->AdControlReg |= VAR_1;
 } else {
  VAR_8->AdControlReg &= ((~VAR_1) & 0xff);
 }

 FUNC_4(VAR_8->AdControlReg, VAR_9->iobase + VAR_3);

 FUNC_4(2, VAR_9->iobase + VAR_7);
 FUNC_4(0, VAR_9->iobase + VAR_7);
 FUNC_4(1, VAR_9->iobase + VAR_7);







 if (VAR_14) {
  VAR_23 = VAR_8->softsshsample;
  FUNC_3("FA: %04x: ", VAR_23);
  for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
   VAR_21 = FUNC_1(VAR_12[0]);
   VAR_22 = FUNC_2(VAR_12[0]);
   VAR_21 |= ((VAR_22 & 0x03) << 8);
   FUNC_4(VAR_21 | VAR_23, VAR_9->iobase + VAR_6);
   FUNC_3("%02x ", VAR_21 | VAR_23);
   VAR_23 = VAR_8->softsshhold;
  }
  FUNC_3("\n ");
 }

 FUNC_3("SL: ", VAR_23);
 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
  VAR_21 = FUNC_1(VAR_12[VAR_18]);



  VAR_22 = FUNC_2(VAR_12[VAR_18]);
  VAR_21 |= ((VAR_22 & 0x03) << 8);
  FUNC_4(VAR_21 | VAR_23, VAR_9->iobase + VAR_6);
  FUNC_3("%02x ", VAR_21 | VAR_23);
 }
 FUNC_3("\n ");

 if (VAR_15) {
  FUNC_3("BA: %04x: ", VAR_23);
  for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
   VAR_21 = FUNC_1(VAR_12[0]);
   VAR_22 = FUNC_2(VAR_12[0]);
   VAR_21 |= ((VAR_22 & 0x03) << 8);
   FUNC_4(VAR_21 | VAR_23, VAR_9->iobase + VAR_6);
   FUNC_3("%02x ", VAR_21 | VAR_23);
  }
  FUNC_3("\n ");
 }
 FUNC_4(0, VAR_9->iobase + VAR_7);


 FUNC_3("adl_pci9118 EDBG: END: setup_channel_list()\n");
 return 1;
}
