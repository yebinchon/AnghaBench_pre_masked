
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* ao_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5, VAR_6;
 VAR_6 = FUNC_0(VAR_3->chanspec);

 FUNC_1("PCI1723: the pci1723_ao_write_winsn() ------\n");

 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {

  VAR_0->ao_data[VAR_6] = VAR_4[VAR_5];
  FUNC_3(VAR_4[VAR_5], VAR_1->iobase + FUNC_2(VAR_6));
 }

 return VAR_5;
}
