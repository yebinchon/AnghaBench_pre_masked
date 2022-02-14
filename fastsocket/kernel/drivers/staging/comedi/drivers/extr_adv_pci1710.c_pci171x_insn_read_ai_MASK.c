
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {unsigned int* act_chanlist; int CntrlReg; } ;
struct TYPE_3__ {scalar_t__ cardtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int *,int,int) ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_13,
    struct comedi_subdevice *VAR_14,
    struct comedi_insn *VAR_15, unsigned int *VAR_16)
{
 int VAR_17, VAR_18;




 FUNC_0("adv_pci1710 EDBG: BGN: pci171x_insn_read_ai(...)\n");
 VAR_11->CntrlReg &= VAR_0;
 VAR_11->CntrlReg |= VAR_1;
 FUNC_4(VAR_11->CntrlReg, VAR_13->iobase + VAR_6);
 FUNC_3(0, VAR_13->iobase + VAR_4);
 FUNC_3(0, VAR_13->iobase + VAR_5);

 FUNC_5(VAR_13, VAR_14, &VAR_15->chanspec, 1, 1);

 FUNC_0("adv_pci1710 A ST=%4x IO=%x\n",
  FUNC_2(VAR_13->iobase + VAR_8),
  VAR_13->iobase + VAR_8);
 for (VAR_17 = 0; VAR_17 < VAR_15->n; VAR_17++) {
  FUNC_4(0, VAR_13->iobase + VAR_7);
  FUNC_0("adv_pci1710 B n=%d ST=%4x\n", VAR_17,
   FUNC_2(VAR_13->iobase + VAR_8));

  FUNC_0("adv_pci1710 C n=%d ST=%4x\n", VAR_17,
   FUNC_2(VAR_13->iobase + VAR_8));
  VAR_18 = 100;
  while (VAR_18--) {
   if (!(FUNC_2(VAR_13->iobase + VAR_8) & VAR_9))
    goto conv_finish;
   if (!(VAR_18 % 10))
    FUNC_0("adv_pci1710 D n=%d tm=%d ST=%4x\n", VAR_17,
     VAR_18,
     FUNC_2(VAR_13->iobase + VAR_8));
  }
  FUNC_1(VAR_13, "A/D insn timeout");
  FUNC_3(0, VAR_13->iobase + VAR_4);
  FUNC_3(0, VAR_13->iobase + VAR_5);
  VAR_16[VAR_17] = 0;
  FUNC_0
      ("adv_pci1710 EDBG: END: pci171x_insn_read_ai(...) n=%d\n",
       VAR_17);
  return -VAR_2;

conv_finish:
  VAR_16[VAR_17] = FUNC_2(VAR_13->iobase + VAR_3) & 0x0fff;


 }

 FUNC_3(0, VAR_13->iobase + VAR_4);
 FUNC_3(0, VAR_13->iobase + VAR_5);

 FUNC_0("adv_pci1710 EDBG: END: pci171x_insn_read_ai(...) n=%d\n", VAR_17);
 return VAR_17;
}
