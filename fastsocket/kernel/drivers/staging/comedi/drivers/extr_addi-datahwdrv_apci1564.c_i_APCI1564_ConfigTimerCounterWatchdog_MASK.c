
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int b_TimerSelectMode; unsigned int b_ModeSelectRegister; scalar_t__ iobase; scalar_t__ i_IobaseAmcc; int tsk_Current; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 TYPE_1__* VAR_18 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_19,
 struct comedi_subdevice *VAR_20, struct comedi_insn *VAR_21, unsigned int *VAR_22)
{
 unsigned int VAR_23 = 0;
 VAR_18->tsk_Current = VAR_17;
 if (VAR_22[0] == VAR_2) {
  VAR_18->b_TimerSelectMode = VAR_2;


  FUNC_1(0x0,
   VAR_18->i_IobaseAmcc + VAR_11 +
   VAR_13);

  FUNC_1(VAR_22[3],
   VAR_18->i_IobaseAmcc + VAR_11 +
   VAR_14);
 }
 else if (VAR_22[0] == VAR_1) {

  VAR_23 =
   FUNC_0(VAR_18->i_IobaseAmcc + VAR_16 +
   VAR_13);
  VAR_23 = VAR_23 & 0xFFFFF9FEUL;
  FUNC_1(VAR_23, VAR_18->i_IobaseAmcc + VAR_16 + VAR_13);

  VAR_18->b_TimerSelectMode = VAR_1;
  if (VAR_22[1] == 1) {
   FUNC_1(0x02, VAR_18->i_IobaseAmcc + VAR_16 + VAR_13);
   FUNC_1(0x0,
    VAR_18->i_IobaseAmcc + VAR_7 +
    VAR_8);
   FUNC_1(0x0,
    VAR_18->i_IobaseAmcc + VAR_9 +
    VAR_10);
   FUNC_1(0x0,
    VAR_18->i_IobaseAmcc +
    VAR_11 +
    VAR_12);
   FUNC_1(0x0,
    VAR_18->iobase + VAR_3 +
    VAR_12);
   FUNC_1(0x0,
    VAR_18->iobase + VAR_4 +
    VAR_12);
   FUNC_1(0x0,
    VAR_18->iobase + VAR_5 +
    VAR_12);
   FUNC_1(0x0,
    VAR_18->iobase + VAR_6 +
    VAR_12);
  }
  else {
   FUNC_1(0x0, VAR_18->i_IobaseAmcc + VAR_16 + VAR_13);
  }



  FUNC_1(VAR_22[2],
   VAR_18->i_IobaseAmcc + VAR_16 +
   VAR_15);


  FUNC_1(VAR_22[3],
   VAR_18->i_IobaseAmcc + VAR_16 +
   VAR_14);

  VAR_23 =
   FUNC_0(VAR_18->i_IobaseAmcc + VAR_16 +
   VAR_13);
  VAR_23 =
   (VAR_23 & 0xFFF719E2UL) | 2UL << 13UL | 0x10UL;
  FUNC_1(VAR_23, VAR_18->i_IobaseAmcc + VAR_16 + VAR_13);
 }
 else if (VAR_22[0] == VAR_0) {
  VAR_18->b_TimerSelectMode = VAR_0;
  VAR_18->b_ModeSelectRegister = VAR_22[5];


  VAR_23 =
   FUNC_0(VAR_18->iobase + ((VAR_22[5] - 1) * 0x20) +
   VAR_13);
  VAR_23 = VAR_23 & 0xFFFFF9FEUL;
  FUNC_1(VAR_23, VAR_18->iobase + ((VAR_22[5] - 1) * 0x20) + VAR_13);




  FUNC_1(VAR_22[3],
   VAR_18->iobase + ((VAR_22[5] - 1) * 0x20) +
   VAR_14);
  VAR_23 =
   (VAR_23 & 0xFFFC19E2UL) | 0x80000UL |
   (unsigned int) ((unsigned int) VAR_22[4] << 16UL);
  FUNC_1(VAR_23,
   VAR_18->iobase + ((VAR_22[5] - 1) * 0x20) +
   VAR_13);


  VAR_23 = (VAR_23 & 0xFFFFF9FD) | (VAR_22[1] << 1);
  FUNC_1(VAR_23,
   VAR_18->iobase + ((VAR_22[5] - 1) * 0x20) +
   VAR_13);




  VAR_23 = (VAR_23 & 0xFFFBF9FFUL) | (VAR_22[6] << 18);
  FUNC_1(VAR_23,
   VAR_18->iobase + ((VAR_22[5] - 1) * 0x20) +
   VAR_13);
 }
 else {
  FUNC_2(" Invalid subdevice.");
 }

 return VAR_21->n;
}
