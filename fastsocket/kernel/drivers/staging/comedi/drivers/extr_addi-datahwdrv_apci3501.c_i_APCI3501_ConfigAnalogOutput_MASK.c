
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int b_InterruptMode; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

int FUNC_1(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6,
 struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 FUNC_0(VAR_8[0],
  VAR_4->iobase + VAR_0 +
  VAR_1);

 if (VAR_8[0]) {
  VAR_4->b_InterruptMode = VAR_3;
 } else {
  VAR_4->b_InterruptMode = VAR_2;
 }
 return VAR_7->n;
}
