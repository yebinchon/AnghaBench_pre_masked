
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; int tsk_Current; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

int FUNC_1(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 VAR_1->tsk_Current = VAR_0;
 FUNC_0(0x200 | 0, VAR_1->iobase + 128 + 0x4);
 FUNC_0(0, VAR_1->iobase + 128 + 0);



 FUNC_0(0x300 | 0, VAR_1->iobase + 128 + 0x4);
 FUNC_0((VAR_5[0] << 8), VAR_1->iobase + 128 + 0);
 FUNC_0(0x200000UL, VAR_1->iobase + 128 + 12);

 return VAR_4->n;
}
