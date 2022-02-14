
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ b_TimerSelectMode; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_5,
 struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7, unsigned int *VAR_8)
{

 if (VAR_4->b_TimerSelectMode == VAR_1) {
  VAR_8[0] =
   FUNC_0(VAR_4->iobase + VAR_3 +
   VAR_2) & 0x1;
  VAR_8[1] = FUNC_0(VAR_4->iobase + VAR_3);
 }

 else if (VAR_4->b_TimerSelectMode == VAR_0) {
  VAR_8[0] =
   FUNC_0(VAR_4->iobase + VAR_3 +
   VAR_2) & 0x1;
  VAR_8[1] = FUNC_0(VAR_4->iobase + VAR_3);
 }

 else if ((VAR_4->b_TimerSelectMode != VAR_0)
  && (VAR_4->b_TimerSelectMode != VAR_1)) {
  FUNC_1("\nIn ReadTimerCounterWatchdog :: Invalid Subdevice \n");
 }
 return VAR_7->n;
}
