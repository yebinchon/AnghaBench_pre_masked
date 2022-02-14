
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int da_ranges; int* ao_data; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_9)
{
 FUNC_0("adv_pci1710 EDBG: BGN: pci1720_reset(...)\n");
 FUNC_1(VAR_7, VAR_9->iobase + VAR_5);
 VAR_8->da_ranges = 0xAA;
 FUNC_1(VAR_8->da_ranges, VAR_9->iobase + VAR_4);
 FUNC_2(0x0800, VAR_9->iobase + VAR_0);
 FUNC_2(0x0800, VAR_9->iobase + VAR_1);
 FUNC_2(0x0800, VAR_9->iobase + VAR_2);
 FUNC_2(0x0800, VAR_9->iobase + VAR_3);
 FUNC_1(0, VAR_9->iobase + VAR_6);
 VAR_8->ao_data[0] = 0x0800;
 VAR_8->ao_data[1] = 0x0800;
 VAR_8->ao_data[2] = 0x0800;
 VAR_8->ao_data[3] = 0x0800;
 FUNC_0("adv_pci1710 EDBG: END: pci1720_reset(...)\n");
 return 0;
}
