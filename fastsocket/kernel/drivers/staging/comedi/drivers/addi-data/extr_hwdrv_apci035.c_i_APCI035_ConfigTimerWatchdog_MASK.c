
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
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9,
 struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 VAR_6 = 0;
 VAR_5->tsk_Current = VAR_4;
 VAR_5->b_TimerSelectMode = VAR_11[0];
 VAR_7 = VAR_11[1];
 if (VAR_11[0] == 0) {
  VAR_14 = 2;
 } else {
  VAR_14 = 0;
 }

 VAR_13 = 0;

 FUNC_1(VAR_13, VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);
 VAR_13 = 0;
 VAR_13 = FUNC_0(VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);



 FUNC_1(VAR_11[3], VAR_5->iobase + ((VAR_7 - 1) * 32) + 4);



 FUNC_1(VAR_11[2], VAR_5->iobase + ((VAR_7 - 1) * 32) + 8);
 if (VAR_11[0] == VAR_1) {
  VAR_13 =
   (VAR_13 & 0xFFF719E2UL) | VAR_14 << 13UL | 0x10UL;

 }
 else {
  if (VAR_11[0] == VAR_2) {
   VAR_13 = VAR_13 & 0xFFF819E2UL;

  } else {
   FUNC_2("\n The parameter for Timer/watchdog selection is in error\n");
   return -VAR_3;
  }
 }
 FUNC_1(VAR_13, VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);
 VAR_13 = 0;
 VAR_13 = FUNC_0(VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);



 VAR_13 = VAR_13 & 0xFFFFF89FUL;
 if (VAR_11[4] == VAR_0) {



  VAR_13 = VAR_13 | (VAR_11[5] << 5);
 }
 FUNC_1(VAR_13, VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);
 VAR_13 = 0;
 VAR_13 = FUNC_0(VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);



 VAR_13 = VAR_13 & 0xFFFFF87FUL;
 if (VAR_11[6] == VAR_0) {



  VAR_13 = VAR_13 | (VAR_11[7] << 7);
 }
 FUNC_1(VAR_13, VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);
 VAR_13 = 0;
 VAR_13 = FUNC_0(VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);



 VAR_13 = VAR_13 & 0xFFFFF9FBUL;



 VAR_13 = VAR_13 | (VAR_11[8] << 2);
 FUNC_1(VAR_13, VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);
 if (VAR_11[9] == VAR_0) {



  FUNC_1(VAR_11[11],
   VAR_5->iobase + ((VAR_7 - 1) * 32) + 24);



  FUNC_1(VAR_11[10],
   VAR_5->iobase + ((VAR_7 - 1) * 32) + 28);
 }

 VAR_13 = 0;
 VAR_13 = FUNC_0(VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);



 VAR_13 = VAR_13 & 0xFFFFF9F7UL;



 VAR_13 = VAR_13 | (VAR_11[12] << 3);
 FUNC_1(VAR_13, VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);



 VAR_13 = 0;
 VAR_13 = FUNC_0(VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);



 VAR_12 = FUNC_0(VAR_5->iobase + ((VAR_7 - 1) * 32) + 16);

 VAR_13 = (VAR_13 & 0xFFFFF9FDUL) | (VAR_11[13] << 1);
 FUNC_1(VAR_13, VAR_5->iobase + ((VAR_7 - 1) * 32) + 12);

 return VAR_10->n;
}
