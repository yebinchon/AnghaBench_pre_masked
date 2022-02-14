
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int i_IobaseAmcc; } ;
struct TYPE_3__ {int pc_EepromChip; } ;


 unsigned short FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned short FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 unsigned short VAR_6;
 unsigned short VAR_7;
 VAR_7 = FUNC_0(VAR_4->chanspec);

 VAR_6 = FUNC_1(VAR_0->i_IobaseAmcc,
  VAR_1->pc_EepromChip, 0x100 + (2 * VAR_7));
 VAR_5[0] = VAR_6;

 return VAR_4->n;

}
