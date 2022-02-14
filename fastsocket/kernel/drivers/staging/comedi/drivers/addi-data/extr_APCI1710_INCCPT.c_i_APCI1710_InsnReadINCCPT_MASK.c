
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_5__ {size_t ui_Read; TYPE_1__* s_FIFOInterruptParameters; } ;
struct TYPE_6__ {TYPE_2__ s_InterruptParameters; int tsk_Current; } ;
struct TYPE_4__ {unsigned int b_OldModuleMask; unsigned int ul_OldInterruptMask; unsigned int ul_OldCounterLatchValue; } ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (struct comedi_device*,unsigned char,unsigned char*,unsigned char*) ;
 int FUNC_4 (struct comedi_device*,unsigned char,unsigned char*) ;
 int FUNC_5 (struct comedi_device*,unsigned char,unsigned char*) ;
 int FUNC_6 (struct comedi_device*,unsigned char,unsigned char*) ;
 int FUNC_7 (struct comedi_device*,unsigned char,unsigned char*) ;
 int FUNC_8 (struct comedi_device*,unsigned char,unsigned char*) ;
 int FUNC_9 (struct comedi_device*,unsigned char,unsigned char*) ;
 int FUNC_10 (struct comedi_device*,unsigned char,unsigned char,unsigned int*) ;
 int FUNC_11 (struct comedi_device*,unsigned char,unsigned int*) ;
 int FUNC_12 (struct comedi_device*,unsigned char,unsigned char*,unsigned char*,unsigned int*) ;
 int FUNC_13 (struct comedi_device*,unsigned char,unsigned char,unsigned char*) ;
 int FUNC_14 (struct comedi_device*,unsigned char,unsigned char,unsigned int*) ;
 int FUNC_15 (char*,...) ;

int FUNC_16(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(VAR_5->chanspec);

 VAR_2->tsk_Current = VAR_1;
 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_13(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec),
   (unsigned char) FUNC_2(VAR_5->chanspec), (unsigned char *) &VAR_6[0]);
  break;

 case 128:
  VAR_8 = FUNC_14(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec),
   (unsigned char) FUNC_2(VAR_5->chanspec), (unsigned int *) &VAR_6[0]);
  FUNC_15("Latch Register Value %d\n", VAR_6[0]);
  break;

 case 133:
  VAR_8 = FUNC_10(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec),
   (unsigned char) FUNC_2(VAR_5->chanspec), (unsigned int *) &VAR_6[0]);
  break;

 case 132:
  VAR_8 = FUNC_11(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec), (unsigned int *) &VAR_6[0]);
  break;

 case 138:
  VAR_8 = FUNC_5(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec), (unsigned char *) &VAR_6[0]);
  break;

 case 136:
  VAR_8 = FUNC_7(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec), (unsigned char *) &VAR_6[0]);
  break;

 case 135:
  VAR_8 = FUNC_8(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec), (unsigned char *) &VAR_6[0]);
  break;

 case 139:
  VAR_8 = FUNC_4(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec), (unsigned char *) &VAR_6[0]);
  break;

 case 140:
  VAR_8 = FUNC_3(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec),
   (unsigned char *) &VAR_6[0], (unsigned char *) &VAR_6[1]);
  break;

 case 134:
  VAR_8 = FUNC_9(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec), (unsigned char *) &VAR_6[0]);

  break;

 case 137:
  VAR_8 = FUNC_6(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec), (unsigned char *) &VAR_6[0]);
  break;

 case 131:
  VAR_8 = FUNC_12(VAR_3,
   (unsigned char) FUNC_0(VAR_5->chanspec),
   (unsigned char *) &VAR_6[0],
   (unsigned char *) &VAR_6[1], (unsigned int *) &VAR_6[2]);
  break;

 case 130:
  VAR_6[0] = VAR_2->s_InterruptParameters.
   s_FIFOInterruptParameters[VAR_2->
   s_InterruptParameters.ui_Read].b_OldModuleMask;
  VAR_6[1] = VAR_2->s_InterruptParameters.
   s_FIFOInterruptParameters[VAR_2->
   s_InterruptParameters.ui_Read].ul_OldInterruptMask;
  VAR_6[2] = VAR_2->s_InterruptParameters.
   s_FIFOInterruptParameters[VAR_2->
   s_InterruptParameters.ui_Read].ul_OldCounterLatchValue;





  VAR_2->
   s_InterruptParameters.
   ui_Read = (VAR_2->s_InterruptParameters.
   ui_Read + 1) % VAR_0;

  break;

 default:
  FUNC_15("ReadType Parameter wrong\n");
 }

 if (VAR_8 >= 0)
  VAR_8 = VAR_5->n;
 return VAR_8;

}
