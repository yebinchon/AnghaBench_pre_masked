
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int slot; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2, struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{
 int VAR_5;
 u8 VAR_6 = 0;

 FUNC_1(VAR_0->slot, &VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {
  u8 VAR_7 = 1 << VAR_3->chanspec;

  VAR_6 &= ~VAR_7;
  if (VAR_4[VAR_5])
   VAR_6 |= VAR_7;
 }
 FUNC_0(VAR_0->slot, VAR_6);
 return VAR_5;
}
