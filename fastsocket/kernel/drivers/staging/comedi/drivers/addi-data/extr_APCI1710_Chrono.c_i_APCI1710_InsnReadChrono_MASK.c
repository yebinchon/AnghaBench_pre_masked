
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; scalar_t__* unused; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_5__ {size_t ui_Read; TYPE_1__* s_FIFOInterruptParameters; } ;
struct TYPE_6__ {TYPE_2__ s_InterruptParameters; } ;
struct TYPE_4__ {unsigned int b_OldModuleMask; unsigned int ul_OldInterruptMask; unsigned int ul_OldCounterLatchValue; } ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (struct comedi_device*,unsigned char,unsigned int,unsigned int*,unsigned char*,unsigned char*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct comedi_device*,unsigned char,unsigned char*) ;
 int FUNC_4 (struct comedi_device*,unsigned char,unsigned int,unsigned char*,unsigned int*) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
 struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 unsigned char VAR_6;
 int VAR_7 = VAR_4->n;

 VAR_6 = FUNC_1(VAR_4->chanspec);

 switch (VAR_6) {
 case 130:
  VAR_7 = FUNC_3(VAR_2,
   (unsigned char) FUNC_0(VAR_4->chanspec), (unsigned char *) &VAR_5[0]);
  break;

 case 128:
  VAR_7 = FUNC_4(VAR_2,
   (unsigned char) FUNC_0(VAR_4->chanspec),
   (unsigned int) VAR_4->unused[0],
   (unsigned char *) &VAR_5[0], (unsigned int *) &VAR_5[1]);
  break;

 case 131:
  VAR_7 = FUNC_2(VAR_2,
   (unsigned char) FUNC_0(VAR_4->chanspec),
   (unsigned int) VAR_4->unused[0],
   (unsigned int *) &VAR_5[0],
   (unsigned char *) &VAR_5[1],
   (unsigned char *) &VAR_5[2],
   (unsigned int *) &VAR_5[3],
   (unsigned int *) &VAR_5[4], (unsigned int *) &VAR_5[5]);
  break;

 case 129:
  FUNC_5("In Chrono Read Interrupt\n");

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
   s_InterruptParameters.
   ui_Read + 1) % VAR_0;
  break;

 default:
  FUNC_5("ReadType Parameter wrong\n");
 }

 if (VAR_7 >= 0)
  VAR_7 = VAR_4->n;
 return VAR_7;

}
