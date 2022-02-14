
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_11)
{
 FUNC_0("********DAS1600 REGISTER DUMP********\n");
 FUNC_0("DAS16_MUX: %x\n", FUNC_1(VAR_11->iobase + VAR_8));
 FUNC_0("DAS16_DIO: %x\n", FUNC_1(VAR_11->iobase + VAR_6));
 FUNC_0("DAS16_STATUS: %x\n", FUNC_1(VAR_11->iobase + VAR_10));
 FUNC_0("DAS16_CONTROL: %x\n", FUNC_1(VAR_11->iobase + VAR_5));
 FUNC_0("DAS16_PACER: %x\n", FUNC_1(VAR_11->iobase + VAR_9));
 FUNC_0("DAS16_GAIN: %x\n", FUNC_1(VAR_11->iobase + VAR_7));
 FUNC_0("DAS16_CNTR_CONTROL: %x\n",
      FUNC_1(VAR_11->iobase + VAR_4));
 FUNC_0("DAS1600_CONV: %x\n", FUNC_1(VAR_11->iobase + VAR_1));
 FUNC_0("DAS1600_BURST: %x\n", FUNC_1(VAR_11->iobase + VAR_0));
 FUNC_0("DAS1600_ENABLE: %x\n", FUNC_1(VAR_11->iobase + VAR_2));
 FUNC_0("DAS1600_STATUS_B: %x\n",
      FUNC_1(VAR_11->iobase + VAR_3));
}
