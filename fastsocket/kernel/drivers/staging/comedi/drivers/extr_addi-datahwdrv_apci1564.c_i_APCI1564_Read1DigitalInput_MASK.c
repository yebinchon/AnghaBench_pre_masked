
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

int FUNC_3(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;

 VAR_8 = FUNC_0(VAR_5->chanspec);
 if (VAR_8 >= 0 && VAR_8 <= 31) {
  VAR_7 =
   (unsigned int) FUNC_2(VAR_2->i_IobaseAmcc + VAR_0);




  *VAR_6 = (VAR_7 >> VAR_8) & 0x1;
 }
 else {
  FUNC_1(VAR_3, "Not a valid channel number !!! \n");
  return -VAR_1;
 }
 return VAR_5->n;
}
