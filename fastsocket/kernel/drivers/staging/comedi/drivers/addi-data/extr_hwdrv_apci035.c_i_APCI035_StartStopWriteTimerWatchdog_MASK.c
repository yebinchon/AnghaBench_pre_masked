
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
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_4,
 struct comedi_subdevice *VAR_5, struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8 = 0;
 int VAR_9 = 0;
 if (VAR_7[0] == 1) {
  VAR_8 =
   FUNC_0(VAR_1->iobase + ((VAR_3 - 1) * 32) + 12);



  VAR_8 = (VAR_8 & 0xFFFFF9FFUL) | 0x1UL;
  FUNC_1(VAR_8,
   VAR_1->iobase + ((VAR_3 - 1) * 32) + 12);
 }
 if (VAR_7[0] == 2) {
  VAR_8 =
   FUNC_0(VAR_1->iobase + ((VAR_3 - 1) * 32) + 12);



  VAR_8 = (VAR_8 & 0xFFFFF9FFUL) | 0x200UL;
  FUNC_1(VAR_8,
   VAR_1->iobase + ((VAR_3 - 1) * 32) + 12);
 }

 if (VAR_7[0] == 0)
 {

  VAR_8 = 0;




  FUNC_1(VAR_8,
   VAR_1->iobase + ((VAR_3 - 1) * 32) + 12);
 }
 if (VAR_7[0] == 3)
 {
  VAR_8 = 0;
  for (VAR_9 = 1; VAR_9 <= 4; VAR_9++) {
   if (VAR_1->b_TimerSelectMode == VAR_0) {
    VAR_8 = 0x2UL;
   } else {
    VAR_8 = 0x10UL;
   }
   VAR_3 = VAR_9;
   FUNC_1(VAR_8,
    VAR_1->iobase + ((VAR_3 - 1) * 32) +
    0);
  }

 }
 if (VAR_7[0] == 4)
 {
  VAR_8 = 0;
  for (VAR_9 = 1; VAR_9 <= 4; VAR_9++) {
   if (VAR_1->b_TimerSelectMode == VAR_0) {
    VAR_8 = 0x1UL;
   } else {
    VAR_8 = 0x8UL;
   }
   VAR_3 = VAR_9;
   FUNC_1(VAR_8,
    VAR_1->iobase + ((VAR_3 - 1) * 32) +
    0);
  }
 }
 if (VAR_7[0] == 5)
 {
  VAR_8 = 0;
  for (VAR_9 = 1; VAR_9 <= 4; VAR_9++) {
   if (VAR_1->b_TimerSelectMode == VAR_0) {
    VAR_8 = 0x4UL;
   } else {
    VAR_8 = 0x20UL;
   }

   VAR_3 = VAR_9;
   FUNC_1(VAR_8,
    VAR_1->iobase + ((VAR_3 - 1) * 32) +
    0);
  }
  VAR_2 = 1;
 }
 return VAR_6->n;
}
