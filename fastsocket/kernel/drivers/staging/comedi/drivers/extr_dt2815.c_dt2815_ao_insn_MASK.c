
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* ao_readback; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (char*,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_9;
 unsigned int VAR_10, VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  VAR_10 = ((VAR_6[VAR_7] & 0x0f) << 4) | (VAR_8 << 1) | 0x01;
  VAR_11 = (VAR_6[VAR_7] & 0xff0) >> 4;

  VAR_9 = FUNC_1(VAR_3, 0x00);
  if (VAR_9 != 0) {
   FUNC_3
       ("dt2815: failed to write low byte on %d reason %x\n",
        VAR_8, VAR_9);
   return -VAR_1;
  }

  FUNC_2(VAR_10, VAR_3->iobase + VAR_0);

  VAR_9 = FUNC_1(VAR_3, 0x10);
  if (VAR_9 != 0x10) {
   FUNC_3
       ("dt2815: failed to write high byte on %d reason %x\n",
        VAR_8, VAR_9);
   return -VAR_1;
  }
  VAR_2->ao_readback[VAR_8] = VAR_6[VAR_7];
 }
 return VAR_7;
}
