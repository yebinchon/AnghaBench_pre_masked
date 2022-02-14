
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_4__ {int CntrlReg; int* ao_data; scalar_t__ da_ranges; } ;
struct TYPE_3__ {int n_aochan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,int,int ,int ) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_12)
{
 FUNC_0("adv_pci1710 EDBG: BGN: pci171x_reset(...)\n");
 FUNC_2(0x30, VAR_12->iobase + VAR_4);
 VAR_10->CntrlReg = VAR_1 | VAR_0;
 FUNC_2(VAR_10->CntrlReg, VAR_12->iobase + VAR_5);
 FUNC_1(0, VAR_12->iobase + VAR_2);
 FUNC_1(0, VAR_12->iobase + VAR_3);
 FUNC_3(VAR_12, -1, 0, 0);
 VAR_10->da_ranges = 0;
 if (VAR_11->n_aochan) {
  FUNC_1(VAR_10->da_ranges, VAR_12->iobase + VAR_8);
  FUNC_2(0, VAR_12->iobase + VAR_6);
  VAR_10->ao_data[0] = 0x0000;
  if (VAR_11->n_aochan > 1) {
   FUNC_2(0, VAR_12->iobase + VAR_7);
   VAR_10->ao_data[1] = 0x0000;
  }
 }
 FUNC_2(0, VAR_12->iobase + VAR_9);
 FUNC_1(0, VAR_12->iobase + VAR_2);
 FUNC_1(0, VAR_12->iobase + VAR_3);

 FUNC_0("adv_pci1710 EDBG: END: pci171x_reset(...)\n");
 return 0;
}
