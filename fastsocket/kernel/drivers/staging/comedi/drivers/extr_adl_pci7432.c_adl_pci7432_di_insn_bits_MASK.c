
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 FUNC_1("comedi: pci7432_di_insn_bits called\n");
 FUNC_1("comedi: data0: %8x data1: %8x\n", VAR_5[0], VAR_5[1]);

 if (VAR_4->n != 2)
  return -VAR_0;

 VAR_5[1] = FUNC_0(VAR_2->iobase + VAR_1) & 0xffffffff;
 FUNC_1("comedi: data1 %8x\n", VAR_5[1]);

 return 2;
}
