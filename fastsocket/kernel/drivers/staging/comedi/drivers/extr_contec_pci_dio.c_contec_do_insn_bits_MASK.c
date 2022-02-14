
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {unsigned int iobase; } ;
struct TYPE_2__ {unsigned int out_offs; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{

 FUNC_1("contec_do_insn_bits called\n");
 FUNC_1(" data: %d %d\n", VAR_5[0], VAR_5[1]);

 if (VAR_4->n != 2)
  return -VAR_0;

 if (VAR_5[0]) {
  VAR_3->state &= ~VAR_5[0];
  VAR_3->state |= VAR_5[0] & VAR_5[1];
  FUNC_1("  out: %d on %lx\n", VAR_3->state,
         VAR_2->iobase + VAR_1->out_offs);
  FUNC_0(VAR_3->state, VAR_2->iobase + VAR_1->out_offs);
 }
 return 2;
}
