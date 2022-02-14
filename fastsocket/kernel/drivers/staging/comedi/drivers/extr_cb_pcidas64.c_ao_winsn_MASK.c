
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ layout; } ;
struct TYPE_3__ {unsigned int dac_control1_bits; unsigned int* ao_value; scalar_t__ main_iobase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_2 (struct comedi_device*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__* FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,unsigned int*,int,int) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_5->chanspec);
 int VAR_8 = FUNC_1(VAR_5->chanspec);


 FUNC_8(0, FUNC_6(VAR_3)->main_iobase + VAR_0);


 FUNC_7(VAR_3, &FUNC_6(VAR_3)->dac_control1_bits, VAR_7, VAR_8);
 FUNC_8(FUNC_6(VAR_3)->dac_control1_bits,
        FUNC_6(VAR_3)->main_iobase + VAR_1);


 if (FUNC_2(VAR_3)->layout == VAR_2) {
  FUNC_8(VAR_6[0] & 0xff,
         FUNC_6(VAR_3)->main_iobase + FUNC_4(VAR_7));
  FUNC_8((VAR_6[0] >> 8) & 0xf,
         FUNC_6(VAR_3)->main_iobase + FUNC_5(VAR_7));
 } else {
  FUNC_8(VAR_6[0], FUNC_6(VAR_3)->main_iobase + FUNC_3(VAR_7));
 }


 FUNC_6(VAR_3)->ao_value[VAR_7] = VAR_6[0];

 return 1;
}
