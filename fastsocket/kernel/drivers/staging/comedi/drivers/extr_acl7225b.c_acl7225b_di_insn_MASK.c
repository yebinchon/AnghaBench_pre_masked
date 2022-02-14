
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 if (VAR_3->n != 2)
  return -VAR_0;

 VAR_4[1] = FUNC_0(VAR_1->iobase + (unsigned long)VAR_2->private) |
     (FUNC_0(VAR_1->iobase + (unsigned long)VAR_2->private + 1) << 8);

 return 2;
}
