
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int cardtype; } ;


 int FUNC_0 (char*) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;
 TYPE_1__* VAR_28 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_29)
{
 FUNC_0("adv_pci_dio EDBG: BGN: pci171x_reset(...)\n");

 switch (VAR_28->cardtype) {
 case 140:
  FUNC_1(0, VAR_29->iobase + VAR_3);
  FUNC_1(0, VAR_29->iobase + VAR_3 + 1);
  FUNC_1(0, VAR_29->iobase + VAR_4);
  FUNC_1(0, VAR_29->iobase + VAR_4 + 1);

 case 139:
  FUNC_1(0, VAR_29->iobase + VAR_1);
  FUNC_1(0x0f, VAR_29->iobase + VAR_0);
  FUNC_1(0, VAR_29->iobase + VAR_2);
  break;
 case 138:
  FUNC_1(0, VAR_29->iobase + VAR_5);
  FUNC_1(0, VAR_29->iobase + VAR_5 + 1);
  FUNC_1(0, VAR_29->iobase + VAR_5 + 2);
  FUNC_1(0, VAR_29->iobase + VAR_5 + 3);
  break;

 case 137:
  FUNC_1(0, VAR_29->iobase + VAR_9);
  FUNC_1(0, VAR_29->iobase + VAR_9 + 1);
  FUNC_1(0, VAR_29->iobase + VAR_7);
  FUNC_1(0x0f, VAR_29->iobase + VAR_6);
  FUNC_1(0, VAR_29->iobase + VAR_8);
  break;

 case 136:
 case 135:
  FUNC_1(0x88, VAR_29->iobase + VAR_10);
  break;
 case 134:
  FUNC_2(0, VAR_29->iobase + VAR_11);
  FUNC_2(0, VAR_29->iobase + VAR_12);
  FUNC_2(0, VAR_29->iobase + VAR_12 + 2);
  FUNC_2(0, VAR_29->iobase + VAR_13);
  FUNC_2(0, VAR_29->iobase + VAR_13 + 2);
  break;
 case 132:
  FUNC_1(0x88, VAR_29->iobase + VAR_14);
  FUNC_1(0x80, VAR_29->iobase + VAR_15);
  FUNC_1(0x80, VAR_29->iobase + VAR_16);
  FUNC_1(0x80, VAR_29->iobase + VAR_17);

 case 133:
  FUNC_1(0x88, VAR_29->iobase + VAR_18);
  FUNC_1(0x80, VAR_29->iobase + VAR_19);
  FUNC_1(0x80, VAR_29->iobase + VAR_20);
  FUNC_1(0x80, VAR_29->iobase + VAR_21);
  break;
 case 131:
  FUNC_2(0x08, VAR_29->iobase + VAR_22);
  FUNC_2(0x08, VAR_29->iobase + VAR_23);
  FUNC_2(0x08, VAR_29->iobase + VAR_24);
  FUNC_2(0x08, VAR_29->iobase + VAR_25);
  break;
 case 130:
  FUNC_2(0, VAR_29->iobase + VAR_11);
  FUNC_2(0x08, VAR_29->iobase + VAR_22);
  FUNC_2(0x08, VAR_29->iobase + VAR_23);
  FUNC_2(0, VAR_29->iobase + VAR_26);
  FUNC_2(0, VAR_29->iobase + VAR_26 + 2);
  break;
 case 129:
  FUNC_3(VAR_29);
  break;
 case 128:
  FUNC_2(0x0101, VAR_29->iobase + VAR_27);
  break;
 }

 FUNC_0("adv_pci_dio EDBG: END: pci171x_reset(...)\n");

 return 0;
}
