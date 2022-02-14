
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dio_counter_iobase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_1(FUNC_0(VAR_1)->dio_counter_iobase + VAR_0);
 VAR_5 &= 0xf;
 VAR_4[1] = VAR_5;
 VAR_4[0] = 0;

 return 2;
}
