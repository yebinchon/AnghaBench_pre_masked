
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int b_OutputMemoryStatus; int tsk_Current; scalar_t__ i_IobaseAmcc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int VAR_7 ;

int FUNC_3(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9,
 struct comedi_insn *VAR_10, unsigned int *VAR_11)
{
 unsigned int VAR_12 = 0;

 if ((VAR_11[0] != 0) && (VAR_11[0] != 1)) {
  FUNC_0(VAR_8,
   "Not a valid Data !!! ,Data should be 1 or 0\n");
  return -VAR_4;
 }
 if (VAR_11[0]) {
  VAR_6->b_OutputMemoryStatus = VAR_1;
 }
 else {
  VAR_6->b_OutputMemoryStatus = VAR_0;
 }
 if (VAR_11[1] == VAR_1) {
  VAR_12 = VAR_12 | 0x1;
 }
 else {
  VAR_12 = VAR_12 & 0xFFFFFFFE;
 }
 if (VAR_11[2] == VAR_1) {
  VAR_12 = VAR_12 | 0x2;
 }
 else {
  VAR_12 = VAR_12 & 0xFFFFFFFD;
 }
 FUNC_2(VAR_12,
  VAR_6->i_IobaseAmcc + VAR_2 +
  VAR_3);
 VAR_7 =
  FUNC_1(VAR_6->i_IobaseAmcc + VAR_2 +
  VAR_3);
 VAR_6->tsk_Current = VAR_5;
 return VAR_10->n;
}
