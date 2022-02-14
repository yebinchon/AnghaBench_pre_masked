
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ me_regbase; int control_2; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 int VAR_8;
 int VAR_9 = 1 << FUNC_0(VAR_6->chanspec);


 if (VAR_9 & 0x0000ffff) {
  VAR_8 = 0x0000ffff;


  VAR_3->control_2 |= VAR_0;
  FUNC_1(VAR_3->control_2,
         VAR_3->me_regbase + VAR_2);
 } else {

  VAR_8 = 0xffff0000;


  VAR_3->control_2 |= VAR_1;
  FUNC_1(VAR_3->control_2,
         VAR_3->me_regbase + VAR_2);
 }

 if (VAR_7[0]) {

  VAR_5->io_bits |= VAR_8;
 } else {

  VAR_5->io_bits &= ~VAR_8;
 }

 return 1;
}
