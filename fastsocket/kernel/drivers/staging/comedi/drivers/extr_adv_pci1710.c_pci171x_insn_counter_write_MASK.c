
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {scalar_t__ cnt0_write_wait; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4,
          struct comedi_insn *VAR_5,
          unsigned int *VAR_6)
{
 uint VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_6[0] & 0x00FF;
 VAR_7 = (VAR_6[0] & 0xFF00) >> 8;


 FUNC_1(VAR_8, VAR_3->iobase + VAR_0);
 FUNC_1(VAR_7, VAR_3->iobase + VAR_0);

 if (VAR_2->cnt0_write_wait) {

  VAR_9 = 0xE2;
  do {
   FUNC_1(VAR_9, VAR_3->iobase + VAR_1);
   VAR_10 = FUNC_0(VAR_3->iobase + VAR_0) & 0xFF;
  } while (VAR_10 & 0x40);
 }

 return VAR_5->n;
}
