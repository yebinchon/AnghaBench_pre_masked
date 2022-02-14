
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; int minor; } ;
struct TYPE_2__ {int ai_do; int ai12_startstop; int IntControlReg; int AdFunctionReg; int AdControlReg; int ai_divisor2; int ai_divisor1; scalar_t__ iobase_a; int int_ai_func; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_14,
      struct comedi_subdevice *VAR_15)
{
 FUNC_0("adl_pci9118 EDBG: BGN: pci9118_ai_docmd_sampl(%d,) [%d]\n",
  VAR_14->minor, VAR_12->ai_do);
 switch (VAR_12->ai_do) {
 case 1:
  VAR_12->AdControlReg |= VAR_4;
  break;
 case 2:
  FUNC_1(VAR_14, "pci9118_ai_docmd_sampl() mode 2 bug!\n");
  return -VAR_5;
 case 3:
  VAR_12->AdControlReg |= VAR_1;
  break;
 case 4:
  FUNC_1(VAR_14, "pci9118_ai_docmd_sampl() mode 4 bug!\n");
  return -VAR_5;
 default:
  FUNC_1(VAR_14,
        "pci9118_ai_docmd_sampl() mode number bug!\n");
  return -VAR_5;
 };

 VAR_12->int_ai_func = VAR_13;

 if (VAR_12->ai12_startstop)
  FUNC_4(VAR_14, VAR_6);

 if ((VAR_12->ai_do == 1) || (VAR_12->ai_do == 2))
  VAR_12->IntControlReg |= VAR_7;

 VAR_12->AdControlReg |= VAR_2;

 FUNC_3(FUNC_2(VAR_12->iobase_a + VAR_0) | 0x1f00, VAR_12->iobase_a + VAR_0);

 if (!(VAR_12->ai12_startstop & (VAR_10 | VAR_11))) {
  FUNC_3(VAR_12->IntControlReg, VAR_14->iobase + VAR_9);
  FUNC_3(VAR_12->AdFunctionReg, VAR_14->iobase + VAR_8);
  if (VAR_12->ai_do != 3) {
   FUNC_5(VAR_14, VAR_12->ai_do, VAR_12->ai_divisor1,
        VAR_12->ai_divisor2);
   VAR_12->AdControlReg |= VAR_3;
  }
  FUNC_3(VAR_12->IntControlReg, VAR_14->iobase + VAR_9);
 }

 FUNC_0("adl_pci9118 EDBG: END: pci9118_ai_docmd_sampl()\n");
 return 0;
}
