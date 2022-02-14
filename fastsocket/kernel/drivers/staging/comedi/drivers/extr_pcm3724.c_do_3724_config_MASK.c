
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_device {unsigned long iobase; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int,int,struct comedi_subdevice*) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_6,
      struct comedi_subdevice *VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 unsigned long VAR_11;

 VAR_9 = VAR_2;
 VAR_10 = 0;


 if (!(VAR_7->io_bits & 0x0000ff)) {
  VAR_9 |= VAR_0;
 }
 if (!(VAR_7->io_bits & 0x00ff00)) {
  VAR_9 |= VAR_1;
 }
 if (!(VAR_7->io_bits & 0xff0000)) {
  VAR_9 |= VAR_3;
 }

 VAR_10 = FUNC_0(0, 0, VAR_6->subdevices);
 VAR_10 = FUNC_0(VAR_10, 1, (VAR_6->subdevices) + 1);

 if (VAR_7 == VAR_6->subdevices) {
  VAR_11 = VAR_6->iobase + VAR_5;
 } else {
  VAR_11 = VAR_6->iobase + VAR_4 + VAR_5;
 }
 FUNC_1(VAR_10, VAR_6->iobase + 8);

 FUNC_1(VAR_9, VAR_11);
}
