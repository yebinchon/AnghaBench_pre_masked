
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
 struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 if (VAR_7[0] == 0) {

  FUNC_0(0x0,
   VAR_3->i_IobaseAddon +
   VAR_0);

  FUNC_0(VAR_7[1],
   VAR_3->i_IobaseAddon +
   VAR_1);
  VAR_7[1] = VAR_7[1] >> 16;
  FUNC_0(VAR_7[1],
   VAR_3->i_IobaseAddon +
   VAR_1 + 2);
 }
 else {
  FUNC_1("\nThe input parameters are wrong\n");
  return -VAR_2;
 }

 return VAR_6->n;
}
