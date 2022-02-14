
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAmcc; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned int VAR_3 ;

int FUNC_3(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
 struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8 = VAR_7[0];
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_6->chanspec);
 if (VAR_7[1] == 0) {
  *VAR_7 = (unsigned int) FUNC_2(VAR_2->i_IobaseAmcc + VAR_0);
  switch (VAR_10) {
  case 2:
   VAR_9 = 3;
   *VAR_7 = (*VAR_7 >> (2 * VAR_8)) & VAR_9;
   break;
  case 4:
   VAR_9 = 15;
   *VAR_7 = (*VAR_7 >> (4 * VAR_8)) & VAR_9;
   break;
  case 8:
   VAR_9 = 255;
   *VAR_7 = (*VAR_7 >> (8 * VAR_8)) & VAR_9;
   break;
  case 16:
   VAR_9 = 65535;
   *VAR_7 = (*VAR_7 >> (16 * VAR_8)) & VAR_9;
   break;
  case 31:
   break;
  default:
   FUNC_1(VAR_4, "Not a valid Channel number !!!\n");
   return -VAR_1;
   break;
  }
 }
 else {
  if (VAR_7[1] == 1) {
   *VAR_7 = VAR_3;
  }
 }
 return VAR_6->n;
}
