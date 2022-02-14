
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int AdControlReg; int AdFunctionReg; scalar_t__ ai16bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int,int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_12,
    struct comedi_subdevice *VAR_13,
    struct comedi_insn *VAR_14, unsigned int *VAR_15)
{

 int VAR_16, VAR_17;

 VAR_11->AdControlReg = VAR_0 & 0xff;
 VAR_11->AdFunctionReg = VAR_1 | VAR_2;
 FUNC_3(VAR_11->AdFunctionReg, VAR_12->iobase + VAR_6);

 if (!FUNC_5(VAR_12, VAR_13, 1, &VAR_14->chanspec, 0, 0, 0, 0, 0))
  return -VAR_4;

 FUNC_3(0, VAR_12->iobase + VAR_9);

 for (VAR_16 = 0; VAR_16 < VAR_14->n; VAR_16++) {
  FUNC_4(0, VAR_12->iobase + VAR_10);
  FUNC_6(2);
  VAR_17 = 100;
  while (VAR_17--) {
   if (FUNC_1(VAR_12->iobase + VAR_7) & VAR_3)
    goto conv_finish;
   FUNC_6(1);
  }

  FUNC_0(VAR_12, "A/D insn timeout");
  VAR_15[VAR_16] = 0;
  FUNC_3(0, VAR_12->iobase + VAR_9);
  return -VAR_5;

conv_finish:
  if (VAR_11->ai16bits) {
   VAR_15[VAR_16] =
       (FUNC_1(VAR_12->iobase +
     VAR_8) & 0xffff) ^ 0x8000;
  } else {
   VAR_15[VAR_16] =
       (FUNC_2(VAR_12->iobase + VAR_8) >> 4) & 0xfff;
  }
 }

 FUNC_3(0, VAR_12->iobase + VAR_9);
 return VAR_16;

}
