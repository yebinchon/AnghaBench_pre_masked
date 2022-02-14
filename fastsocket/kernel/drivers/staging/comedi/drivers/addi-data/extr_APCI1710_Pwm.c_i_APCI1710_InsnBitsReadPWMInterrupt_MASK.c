
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_5__ {size_t ui_Read; TYPE_1__* s_FIFOInterruptParameters; } ;
struct TYPE_6__ {TYPE_2__ s_InterruptParameters; } ;
struct TYPE_4__ {unsigned int b_OldModuleMask; unsigned int ul_OldInterruptMask; unsigned int ul_OldCounterLatchValue; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

int FUNC_0(struct comedi_device *VAR_2,
 struct comedi_subdevice *VAR_3, struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 VAR_5[0] = VAR_1->s_InterruptParameters.
  s_FIFOInterruptParameters[VAR_1->
  s_InterruptParameters.ui_Read].b_OldModuleMask;
 VAR_5[1] = VAR_1->s_InterruptParameters.
  s_FIFOInterruptParameters[VAR_1->
  s_InterruptParameters.ui_Read].ul_OldInterruptMask;
 VAR_5[2] = VAR_1->s_InterruptParameters.
  s_FIFOInterruptParameters[VAR_1->
  s_InterruptParameters.ui_Read].ul_OldCounterLatchValue;





 VAR_1->
  s_InterruptParameters.
  ui_Read = (VAR_1->
  s_InterruptParameters.ui_Read + 1) % VAR_0;

 return VAR_4->n;

}
