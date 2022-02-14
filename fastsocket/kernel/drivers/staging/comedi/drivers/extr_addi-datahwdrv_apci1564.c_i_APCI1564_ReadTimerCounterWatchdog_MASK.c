
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ b_TimerSelectMode; int b_ModeSelectRegister; scalar_t__ iobase; scalar_t__ i_IobaseAmcc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_8,
 struct comedi_subdevice *VAR_9, struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 unsigned int VAR_12 = 0;

 if (VAR_7->b_TimerSelectMode == VAR_2) {

  VAR_11[0] =
   FUNC_0(VAR_7->i_IobaseAmcc +
   VAR_3 +
   VAR_5) & 0x1;
  VAR_11[1] =
   FUNC_0(VAR_7->i_IobaseAmcc +
   VAR_3);
 }
 else if (VAR_7->b_TimerSelectMode == VAR_1) {

  VAR_11[0] =
   FUNC_0(VAR_7->i_IobaseAmcc + VAR_6 +
   VAR_5) & 0x1;


  VAR_11[1] = FUNC_0(VAR_7->i_IobaseAmcc + VAR_6);
 }
 else if (VAR_7->b_TimerSelectMode == VAR_0) {

  VAR_11[0] =
   FUNC_0(VAR_7->iobase + ((VAR_7->b_ModeSelectRegister -
     1) * 0x20) +
   VAR_4);
  VAR_12 =
   FUNC_0(VAR_7->iobase + ((VAR_7->b_ModeSelectRegister -
     1) * 0x20) + VAR_5);




  VAR_11[1] = (unsigned char) ((VAR_12 >> 1) & 1);




  VAR_11[2] = (unsigned char) ((VAR_12 >> 2) & 1);




  VAR_11[3] = (unsigned char) ((VAR_12 >> 3) & 1);




  VAR_11[4] = (unsigned char) ((VAR_12 >> 0) & 1);
 }
 else if ((VAR_7->b_TimerSelectMode != VAR_1)
  && (VAR_7->b_TimerSelectMode != VAR_2)
  && (VAR_7->b_TimerSelectMode != VAR_0)) {
  FUNC_1("\n Invalid Subdevice !!!\n");
 }
 return VAR_10->n;
}
