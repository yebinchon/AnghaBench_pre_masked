
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; scalar_t__ private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2->chanspec);
 ((unsigned int *)VAR_0->private)[VAR_5] = VAR_3[0];
 VAR_6 = VAR_3[0];





 VAR_4 = (VAR_6 << 4) & 0xf0;
 FUNC_4(VAR_4, VAR_0->iobase + FUNC_2(VAR_5));
 VAR_4 = (VAR_6 >> 4) & 0xff;
 FUNC_4(VAR_4, VAR_0->iobase + FUNC_3(VAR_5));

 return 1;
}
