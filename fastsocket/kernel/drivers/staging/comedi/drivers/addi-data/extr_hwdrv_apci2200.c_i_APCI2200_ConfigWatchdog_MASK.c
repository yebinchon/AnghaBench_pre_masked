
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6,
 struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 if (VAR_8[0] == 0) {

  FUNC_0(0x0,
   VAR_4->iobase + VAR_0 +
   VAR_1);

  FUNC_0(VAR_8[1],
   VAR_4->iobase + VAR_0 +
   VAR_2);
  VAR_8[1] = VAR_8[1] >> 16;
  FUNC_0(VAR_8[1],
   VAR_4->iobase + VAR_0 +
   VAR_2 + 2);
 }
 else {
  FUNC_1("\nThe input parameters are wrong\n");
  return -VAR_3;
 }

 return VAR_7->n;
}
