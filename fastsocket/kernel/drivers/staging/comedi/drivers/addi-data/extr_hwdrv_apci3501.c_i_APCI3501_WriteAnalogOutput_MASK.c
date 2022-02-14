
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ b_InterruptMode; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
 struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8 = 0, VAR_9, VAR_10, VAR_11 = 0;;

 VAR_9 = FUNC_0(VAR_6->chanspec);

 if (VAR_3->b_InterruptMode == VAR_2) {
  VAR_10 = 0x80000000;
  if ((*VAR_7 < 0) || (*VAR_7 > 16384)) {
   FUNC_3("\nIn WriteAnalogOutput :: Not Valid Data\n");
  }

 }
 else {
  VAR_10 = 0;
  if ((*VAR_7 < 0) || (*VAR_7 > 8192)) {
   FUNC_3("\nIn WriteAnalogOutput :: Not Valid Data\n");
  }

 }

 if ((VAR_9 < 0) || (VAR_9 > 7)) {
  FUNC_3("\nIn WriteAnalogOutput :: Not Valid Channel\n");
 }

 VAR_11 = FUNC_1(VAR_3->iobase + VAR_0);

 while (VAR_11 == 0) {
  VAR_11 = FUNC_1(VAR_3->iobase + VAR_0);
  VAR_11 = (VAR_11 >> 8) & 1;
 }

 if (VAR_11) {

  VAR_8 =
   (unsigned int) ((unsigned int) (VAR_9 & 0xFF) |
   (unsigned int) ((*VAR_7 << 0x8) & 0x7FFFFF00L) |
   (unsigned int) (VAR_10));
  FUNC_2(VAR_8,
   VAR_3->iobase + VAR_0 +
   VAR_1);
 }

 return VAR_6->n;
}
