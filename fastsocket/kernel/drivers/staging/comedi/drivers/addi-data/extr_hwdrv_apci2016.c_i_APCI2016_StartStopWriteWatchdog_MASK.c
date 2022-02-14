
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAddon; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{

 switch (VAR_6[0]) {
 case 0:
  FUNC_0(0x0, VAR_2->i_IobaseAddon + VAR_0);
  break;
 case 1:
  FUNC_0(0x0001,
   VAR_2->i_IobaseAddon +
   VAR_0);
  break;
 case 2:
  FUNC_0(0x0201,
   VAR_2->i_IobaseAddon +
   VAR_0);
  break;
 default:
  FUNC_1("\nSpecified functionality does not exist\n");
  return -VAR_1;
 }

 return VAR_5->n;
}
