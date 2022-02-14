
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
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_6,
 struct comedi_subdevice *VAR_7, struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 unsigned int VAR_10 = 0;
 int VAR_11;
 if (VAR_5->b_TimerSelectMode == VAR_1) {

  if (VAR_9[1] == 1) {
   VAR_10 =
    FUNC_0(VAR_5->iobase + VAR_4 +
    VAR_2);
   VAR_10 = (VAR_10 & 0xFFFFF9FFUL) | 0x1UL;

   FUNC_1(VAR_10,
    VAR_5->iobase + VAR_4 +
    VAR_2);
  }

  else if (VAR_9[1] == 0)
  {

   VAR_10 =
    FUNC_0(VAR_5->iobase + VAR_4 +
    VAR_2);
   VAR_10 = VAR_10 & 0xFFFFF9FEUL;
   FUNC_1(0x0,
    VAR_5->iobase + VAR_4 +
    VAR_2);
  } else if (VAR_9[1] == 2) {
   VAR_10 =
    FUNC_0(VAR_5->iobase + VAR_4 +
    VAR_2);
   VAR_10 = (VAR_10 & 0xFFFFF9FFUL) | 0x200UL;
   FUNC_1(VAR_10,
    VAR_5->iobase + VAR_4 +
    VAR_2);
  }
 }

 if (VAR_5->b_TimerSelectMode == VAR_0) {
  if (VAR_9[1] == 1) {

   VAR_10 =
    FUNC_0(VAR_5->iobase + VAR_4 +
    VAR_2);
   VAR_10 = (VAR_10 & 0xFFFFF9FFUL) | 0x1UL;

   FUNC_1(VAR_10,
    VAR_5->iobase + VAR_4 +
    VAR_2);
  } else if (VAR_9[1] == 0) {

   VAR_10 =
    FUNC_0(VAR_5->iobase + VAR_4 +
    VAR_2);
   VAR_10 = VAR_10 & 0xFFFFF9FEUL;
   FUNC_1(VAR_10,
    VAR_5->iobase + VAR_4 +
    VAR_2);
  }

  else if (VAR_9[1] == 2) {

   VAR_10 =
    FUNC_0(VAR_5->iobase + VAR_4 +
    VAR_2);
   VAR_10 = (VAR_10 & 0xFFFFF9FFUL) | 0x200UL;
   FUNC_1(VAR_10,
    VAR_5->iobase + VAR_4 +
    VAR_2);
  }

 }
 VAR_11 = FUNC_0(VAR_5->iobase + VAR_4 +
  VAR_3) & 0x1;
 return VAR_8->n;
}
