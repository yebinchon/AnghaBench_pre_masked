
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* eeprom_data; } ;


 size_t FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 VAR_4[0] = VAR_0->eeprom_data[FUNC_0(VAR_3->chanspec)];

 return 1;
}
