
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int slot; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4,
      unsigned int *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->n; VAR_6++) {
  u16 VAR_7 = 0;

  FUNC_0(VAR_1->slot, VAR_4->chanspec, &VAR_7,
     VAR_0);
  VAR_5[VAR_6] = VAR_7;
 }
 return VAR_6;
}
