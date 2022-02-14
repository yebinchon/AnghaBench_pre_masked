
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_readback; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct comedi_device*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
   struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_4->chanspec);
 for (VAR_6 = 0; VAR_6 < VAR_4->n; VAR_6++) {
  FUNC_1(VAR_2, VAR_0, VAR_7, VAR_5[VAR_6]);
  VAR_1->ao_readback[VAR_7] = VAR_5[VAR_6];
 }

 return VAR_6;
}
