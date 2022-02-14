
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; int tsk_Current; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

int FUNC_2(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
 struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 unsigned int VAR_11;

 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 VAR_6->tsk_Current = VAR_5;




 if (VAR_10[0] == VAR_0) {
  VAR_12 = VAR_12 | VAR_10[2];
  VAR_13 = VAR_13 | VAR_10[3];
  FUNC_1(VAR_12,
   VAR_6->iobase + VAR_2);
  FUNC_1(VAR_13,
   VAR_6->iobase + VAR_3);
  if (VAR_10[1] == VAR_1) {
   FUNC_1(0x4, VAR_6->iobase + VAR_4);
   VAR_11 =
    FUNC_0(VAR_6->iobase + VAR_4);
  }
  else {
   FUNC_1(0x6, VAR_6->iobase + VAR_4);
  }
 }
 else {
  VAR_12 = VAR_12 & 0xFFFF0000;
  VAR_13 = VAR_13 & 0xFFFF0000;
  FUNC_1(VAR_12,
   VAR_6->iobase + VAR_2);
  FUNC_1(VAR_13,
   VAR_6->iobase + VAR_3);
  FUNC_1(0x0, VAR_6->iobase + VAR_4);
 }

 return VAR_9->n;
}
