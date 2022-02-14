
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int b_OutputMemoryStatus; scalar_t__ iobase; int tsk_Current; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int VAR_6 ;

int FUNC_3(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
 struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 unsigned int VAR_11 = 0;
 VAR_5->tsk_Current = VAR_4;

 if ((VAR_10[0] != 0) && (VAR_10[0] != 1)) {
  FUNC_0(VAR_7,
   "Not a valid Data !!! ,Data should be 1 or 0\n");
  return -VAR_3;
 }
 if (VAR_10[0]) {
  VAR_5->b_OutputMemoryStatus = VAR_1;
 }
 else {
  VAR_5->b_OutputMemoryStatus = VAR_0;
 }

 if (VAR_10[1] == VAR_1) {
  VAR_11 = VAR_11 | 0x1;
 }
 else {
  VAR_11 = VAR_11 & 0xFFFFFFFE;
 }
 if (VAR_10[2] == VAR_1) {
  VAR_11 = VAR_11 | 0x2;
 }
 else {
  VAR_11 = VAR_11 & 0xFFFFFFFD;
 }
 FUNC_2(VAR_11, VAR_5->iobase + VAR_2);
 VAR_6 = FUNC_1(VAR_5->iobase + VAR_2);
 return VAR_9->n;
}
