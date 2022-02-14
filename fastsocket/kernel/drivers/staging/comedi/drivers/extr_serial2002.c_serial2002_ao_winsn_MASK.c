
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_data {int index; unsigned int value; int kind; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int* analog_out_mapping; unsigned int* ao_readback; int tty; } ;


 size_t FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct serial_data) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = VAR_0->analog_out_mapping[FUNC_0(VAR_4->chanspec)];
 for (VAR_6 = 0; VAR_6 < VAR_4->n; VAR_6++) {
  struct serial_data VAR_8;

  VAR_8.kind = VAR_1;
  VAR_8.index = VAR_7;
  VAR_8.value = VAR_5[VAR_6];
  FUNC_1(VAR_0->tty, VAR_8);
  VAR_0->ao_readback[VAR_7] = VAR_5[VAR_6];
 }
 return VAR_6;
}
