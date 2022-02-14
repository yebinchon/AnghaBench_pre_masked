
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diosubd_data {int regs; scalar_t__ addr; } ;
struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 const struct diosubd_data *VAR_4 = (const struct diosubd_data *)VAR_1->private;
 int VAR_5;

 VAR_3[1] = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4->regs; VAR_5++)
  VAR_3[1] |= FUNC_0(VAR_0->iobase + VAR_4->addr + 2 * VAR_5) << (16 * VAR_5);

 return 2;
}
