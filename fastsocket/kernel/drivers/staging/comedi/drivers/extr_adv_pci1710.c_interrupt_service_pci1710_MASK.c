
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; int attached; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ ai_eos; int ai_et_div2; int ai_et_div1; int CntrlReg; int ai_et_MuxVal; int ai_et_CntrlReg; scalar_t__ ai_et; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct comedi_device*,int,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct comedi_device *VAR_13 = VAR_12;

 FUNC_0("adv_pci1710 EDBG: BGN: interrupt_service_pci1710(%d,...)\n",
  VAR_11);
 if (!VAR_13->attached)
  return VAR_3;

 if (!(FUNC_3(VAR_13->iobase + VAR_8) & VAR_9))
  return VAR_3;

 FUNC_0("adv_pci1710 EDBG: interrupt_service_pci1710() ST: %4x\n",
  FUNC_3(VAR_13->iobase + VAR_8));

 if (VAR_10->ai_et) {
  VAR_10->ai_et = 0;
  VAR_10->CntrlReg &= VAR_0;
  VAR_10->CntrlReg |= VAR_1;
  FUNC_5(VAR_10->CntrlReg, VAR_13->iobase + VAR_6);
  VAR_10->CntrlReg = VAR_10->ai_et_CntrlReg;
  FUNC_4(0, VAR_13->iobase + VAR_4);
  FUNC_4(0, VAR_13->iobase + VAR_5);
  FUNC_5(VAR_10->ai_et_MuxVal, VAR_13->iobase + VAR_7);
  FUNC_5(VAR_10->CntrlReg, VAR_13->iobase + VAR_6);

  FUNC_6(VAR_13, 1, VAR_10->ai_et_div1, VAR_10->ai_et_div2);
  return VAR_2;
 }
 if (VAR_10->ai_eos) {
  FUNC_1(VAR_12);
 } else {
  FUNC_2(VAR_12);
 }
 FUNC_0("adv_pci1710 EDBG: END: interrupt_service_pci1710(...)\n");
 return VAR_2;
}
