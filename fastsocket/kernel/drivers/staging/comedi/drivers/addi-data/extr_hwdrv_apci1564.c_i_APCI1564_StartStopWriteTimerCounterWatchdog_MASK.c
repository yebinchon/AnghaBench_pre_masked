
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
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_8,
 struct comedi_subdevice *VAR_9, struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 unsigned int VAR_12 = 0;
 if (VAR_7->b_TimerSelectMode == VAR_2) {
  switch (VAR_11[1]) {
  case 0:
   FUNC_1(0x0, VAR_7->i_IobaseAmcc + VAR_3 + VAR_4);
   break;
  case 1:
   FUNC_1(0x0001,
    VAR_7->i_IobaseAmcc +
    VAR_3 +
    VAR_4);
   break;
  case 2:
   FUNC_1(0x0201,
    VAR_7->i_IobaseAmcc +
    VAR_3 +
    VAR_4);
   break;
  default:
   FUNC_2("\nSpecified functionality does not exist\n");
   return -VAR_6;
  }
 }
 if (VAR_7->b_TimerSelectMode == VAR_1) {
  if (VAR_11[1] == 1) {
   VAR_12 =
    FUNC_0(VAR_7->i_IobaseAmcc + VAR_5 +
    VAR_4);
   VAR_12 = (VAR_12 & 0xFFFFF9FFUL) | 0x1UL;


   FUNC_1(VAR_12,
    VAR_7->i_IobaseAmcc + VAR_5 +
    VAR_4);
  }
  else if (VAR_11[1] == 0) {


   VAR_12 =
    FUNC_0(VAR_7->i_IobaseAmcc + VAR_5 +
    VAR_4);
   VAR_12 = VAR_12 & 0xFFFFF9FEUL;
   FUNC_1(VAR_12,
    VAR_7->i_IobaseAmcc + VAR_5 +
    VAR_4);
  }
 }
 if (VAR_7->b_TimerSelectMode == VAR_0) {
  VAR_12 =
   FUNC_0(VAR_7->iobase + ((VAR_7->b_ModeSelectRegister -
     1) * 0x20) + VAR_4);
  if (VAR_11[1] == 1) {

   VAR_12 = (VAR_12 & 0xFFFFF9FFUL) | 0x1UL;
  }
  else if (VAR_11[1] == 0) {

   VAR_12 = 0;

  }
  else if (VAR_11[1] == 2) {

   VAR_12 = (VAR_12 & 0xFFFFF9FFUL) | 0x400;
  }
  FUNC_1(VAR_12,
   VAR_7->iobase + ((VAR_7->b_ModeSelectRegister -
     1) * 0x20) + VAR_4);
 }
 return VAR_10->n;
}
