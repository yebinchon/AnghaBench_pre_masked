
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1,
        struct comedi_insn *VAR_2,
        unsigned int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = 1 << FUNC_0(VAR_2->chanspec);
 if (VAR_4 & 0x000000ff) {
  VAR_5 = 0x000000ff;
 } else if (VAR_4 & 0x0000ff00) {
  VAR_5 = 0x0000ff00;
 } else if (VAR_4 & 0x00ff0000) {
  VAR_5 = 0x00ff0000;
 } else {
  VAR_5 = 0xff000000;
 }
 if (VAR_3[0]) {
  VAR_1->io_bits |= VAR_5;
 } else {
  VAR_1->io_bits &= ~VAR_5;
 }
 FUNC_1(VAR_0, VAR_1);

 return 1;
}
