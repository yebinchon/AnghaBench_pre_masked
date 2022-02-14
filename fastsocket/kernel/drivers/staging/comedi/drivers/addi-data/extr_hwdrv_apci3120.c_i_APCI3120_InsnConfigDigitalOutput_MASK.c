
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int b_OutputMemoryStatus; scalar_t__ b_DigitalOutputRegister; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_1(struct comedi_device *VAR_5,
 struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7, unsigned int *VAR_8)
{

 if ((VAR_8[0] != 0) && (VAR_8[0] != 1)) {
  FUNC_0(VAR_5,
   "Not a valid Data !!! ,Data should be 1 or 0\n");
  return -VAR_2;
 }
 if (VAR_8[0]) {
  VAR_3->b_OutputMemoryStatus = VAR_1;

 } else {
  VAR_3->b_OutputMemoryStatus = VAR_0;
  VAR_3->b_DigitalOutputRegister = 0;
 }
 if (!VAR_3->b_OutputMemoryStatus) {
  VAR_4 = 0;

 }

 return VAR_7->n;
}
