
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ b_Timer2Mode; int b_DigitalOutputRegister; scalar_t__ iobase; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned char,scalar_t__) ;

int FUNC_4(struct comedi_device *VAR_10, struct comedi_subdevice *VAR_11,
 struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 unsigned char VAR_14;
 unsigned short VAR_15, VAR_16, VAR_17;

 if ((VAR_9->b_Timer2Mode != VAR_8)
  && (VAR_9->b_Timer2Mode != VAR_4)) {
  FUNC_0(VAR_10, "\nread:timer2  not configured ");
 }


 if (VAR_9->b_Timer2Mode == VAR_4) {


  VAR_14 = ((VAR_9->
    b_DigitalOutputRegister) & 0xF0) |
   VAR_3;
  FUNC_3(VAR_14, VAR_9->iobase + VAR_5);

  VAR_15 = FUNC_2(VAR_9->iobase + VAR_7);


  VAR_14 = ((VAR_9->
    b_DigitalOutputRegister) & 0xF0) |
   VAR_2;
  FUNC_3(VAR_14, VAR_9->iobase + VAR_5);

  VAR_16 = FUNC_2(VAR_9->iobase + VAR_7);


  VAR_13[0] = (unsigned int) ((VAR_15) | ((VAR_16) << 16));

 } else
 {

  VAR_17 = FUNC_2(VAR_9->iobase + VAR_1);
  VAR_17 =
   ((VAR_17 & VAR_0) >> 12) & 1;
  if (VAR_17 == 1) {

   FUNC_1(VAR_9->iobase + VAR_6);
  }
  VAR_13[0] = VAR_17;
 }
 return VAR_12->n;
}
