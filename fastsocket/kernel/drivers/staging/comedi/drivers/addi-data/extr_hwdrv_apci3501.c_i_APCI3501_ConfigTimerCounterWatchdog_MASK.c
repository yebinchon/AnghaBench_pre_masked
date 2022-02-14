
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int b_TimerSelectMode; scalar_t__ iobase; int tsk_Current; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_8,
 struct comedi_subdevice *VAR_9, struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 unsigned int VAR_12 = 0;
 VAR_7->tsk_Current = VAR_6;
 if (VAR_11[0] == VAR_1) {

  VAR_7->b_TimerSelectMode = VAR_1;

  FUNC_1(0x0, VAR_7->iobase + VAR_5 + VAR_2);

  if (VAR_11[1] == 1) {

   FUNC_1(0x02,
    VAR_7->iobase + VAR_5 +
    VAR_2);
  } else {
   FUNC_1(0x0, VAR_7->iobase + VAR_5 + VAR_2);
  }


  FUNC_1(VAR_11[2],
   VAR_7->iobase + VAR_5 +
   VAR_4);


  FUNC_1(VAR_11[3],
   VAR_7->iobase + VAR_5 +
   VAR_3);

  VAR_12 = FUNC_0(VAR_7->iobase + VAR_5 + VAR_2) | 0xFFF819E0UL;
  FUNC_1(VAR_12,
   VAR_7->iobase + VAR_5 +
   VAR_2);
 }

 else if (VAR_11[0] == VAR_0) {

  VAR_12 =
   FUNC_0(VAR_7->iobase + VAR_5 +
   VAR_2);
  VAR_12 = VAR_12 & 0xFFFFF9FEUL;
  FUNC_1(VAR_12, VAR_7->iobase + VAR_5 + VAR_2);
  VAR_7->b_TimerSelectMode = VAR_0;
  if (VAR_11[1] == 1) {

   FUNC_1(0x02,
    VAR_7->iobase + VAR_5 +
    VAR_2);
  } else {
   FUNC_1(0x0, VAR_7->iobase + VAR_5 + VAR_2);
  }


  FUNC_1(VAR_11[2],
   VAR_7->iobase + VAR_5 +
   VAR_4);


  FUNC_1(VAR_11[3],
   VAR_7->iobase + VAR_5 +
   VAR_3);


  VAR_12 =
   FUNC_0(VAR_7->iobase + VAR_5 +
   VAR_2);
  VAR_12 =
   (VAR_12 & 0xFFF719E2UL) | 2UL << 13UL | 0x10UL;
  FUNC_1(VAR_12, VAR_7->iobase + VAR_5 + VAR_2);

 }

 return VAR_10->n;
}
