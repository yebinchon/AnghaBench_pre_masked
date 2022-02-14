
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ai_gain; } ;
union pci20xxx_subdev_private {scalar_t__ iobase; TYPE_1__ pci20341; } ;
struct comedi_subdevice {union pci20xxx_subdev_private* private; } ;
struct comedi_insn {unsigned int n; int chanspec; } ;
struct comedi_device {int minor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,int ,unsigned int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
         struct comedi_subdevice *VAR_11,
         struct comedi_insn *VAR_12, unsigned int *VAR_13)
{
 union pci20xxx_subdev_private *VAR_14 = VAR_11->private;
 unsigned int VAR_15 = 0, VAR_16 = 0;
 int VAR_17, VAR_18;
 unsigned char VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;

 FUNC_3(1, VAR_14->iobase + VAR_5);
 VAR_20 = VAR_4 | VAR_7 | (VAR_14->pci20341.ai_gain << 3)
     | FUNC_0(VAR_12->chanspec);
 FUNC_3(VAR_20, VAR_14->iobase + VAR_2);
 FUNC_3(0x00, VAR_14->iobase + VAR_1);
 FUNC_3(0x00, VAR_14->iobase + VAR_3);



 for (VAR_15 = 0; VAR_15 < VAR_12->n; VAR_15++) {




  VAR_16 = 0;
  FUNC_2(VAR_14->iobase + VAR_8);
  VAR_19 = FUNC_2(VAR_14->iobase + VAR_9);
  while ((VAR_19 < 0x80) && VAR_16 < 100) {
   VAR_16++;
   VAR_19 = FUNC_2(VAR_14->iobase + VAR_9);
  }
  if (VAR_16 >= 100) {
   FUNC_1
       ("comedi%d:  pci20xxx: AI interrupt channel %i polling exit !\n",
        VAR_10->minor, VAR_15);
   return -VAR_0;
  }
  VAR_17 = FUNC_2(VAR_14->iobase + VAR_6);
  VAR_18 = FUNC_2(VAR_14->iobase + VAR_6 + 1);
  VAR_21 = VAR_17 + 0x100 * VAR_18;
  VAR_13[VAR_15] = (short)((VAR_21 + 0x8000) & 0xffff);
 }

 return VAR_15;
}
