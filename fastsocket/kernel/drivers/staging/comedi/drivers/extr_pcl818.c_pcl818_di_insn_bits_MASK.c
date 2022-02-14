
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4,
          struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 if (VAR_5->n != 2)
  return -VAR_0;

 VAR_6[1] = FUNC_0(VAR_3->iobase + VAR_2) |
     (FUNC_0(VAR_3->iobase + VAR_1) << 8);

 return 2;
}
