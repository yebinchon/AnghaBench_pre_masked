
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
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
 struct comedi_insn *VAR_5, unsigned int *VAR_6)
{

 if (VAR_6[0] == 0) {

  FUNC_0(0x0,
   VAR_2->i_IobaseAddon +
   VAR_0);

  FUNC_0(VAR_6[1],
   VAR_2->i_IobaseAddon +
   VAR_1);
  VAR_6[1] = VAR_6[1] >> 16;
  FUNC_0(VAR_6[1],
   VAR_2->i_IobaseAddon +
   VAR_1 + 2);
 } else {
  FUNC_1("\nThe input parameters are wrong\n");
 }
 return VAR_5->n;
}
