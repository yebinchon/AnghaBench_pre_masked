
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int* ao_data; int* da_range; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5)
{
 int VAR_6;
 FUNC_0("adv_pci1723 EDBG: BGN: pci1723_reset(...)\n");

 FUNC_2(0x01, VAR_5->iobase + VAR_2);

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {

  VAR_4->ao_data[VAR_6] = 0x8000;
  FUNC_2(VAR_4->ao_data[VAR_6], VAR_5->iobase + FUNC_1(VAR_6));

  VAR_4->da_range[VAR_6] = 0;
  FUNC_2(((VAR_4->da_range[VAR_6] << 4) | VAR_6),
       VAR_1);
 }

 FUNC_2(0, VAR_5->iobase + VAR_0);
 FUNC_2(0, VAR_5->iobase + VAR_3);


 FUNC_2(0, VAR_5->iobase + VAR_2);

 FUNC_0("adv_pci1723 EDBG: END: pci1723_reset(...)\n");
 return 0;
}
