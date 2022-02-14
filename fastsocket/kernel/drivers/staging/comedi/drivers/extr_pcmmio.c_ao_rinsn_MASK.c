
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {unsigned int n_chan; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_3__ {unsigned int* shadow_samples; } ;
struct TYPE_4__ {TYPE_1__ ao; } ;


 unsigned int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++) {
  unsigned VAR_6 = FUNC_0(VAR_3->chanspec);
  if (VAR_6 < VAR_2->n_chan)
   VAR_4[VAR_5] = VAR_0->ao.shadow_samples[VAR_6];
 }
 return VAR_5;
}
