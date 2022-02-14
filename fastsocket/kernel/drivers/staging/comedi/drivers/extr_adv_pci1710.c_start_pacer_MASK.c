
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3, int VAR_4,
   unsigned int VAR_5, unsigned int VAR_6)
{
 FUNC_0("adv_pci1710 EDBG: BGN: start_pacer(%d,%u,%u)\n", VAR_4,
  VAR_5, VAR_6);
 FUNC_1(0xb4, VAR_3->iobase + VAR_2);
 FUNC_1(0x74, VAR_3->iobase + VAR_2);

 if (VAR_4 == 1) {
  FUNC_1(VAR_6 & 0xff, VAR_3->iobase + VAR_1);
  FUNC_1((VAR_6 >> 8) & 0xff, VAR_3->iobase + VAR_1);
  FUNC_1(VAR_5 & 0xff, VAR_3->iobase + VAR_0);
  FUNC_1((VAR_5 >> 8) & 0xff, VAR_3->iobase + VAR_0);
 }
 FUNC_0("adv_pci1710 EDBG: END: start_pacer(...)\n");
}
