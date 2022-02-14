
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int async; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1)
{
 while (1) {
  if (!(FUNC_1(VAR_0->iobase + 8) & 0x01))
   return;
  FUNC_0(VAR_1->async, FUNC_2(VAR_0->iobase));
 }
}
