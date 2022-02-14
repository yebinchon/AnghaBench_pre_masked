
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* last_data; } ;
union pci20xxx_subdev_private {scalar_t__ iobase; TYPE_1__ pci20006; } ;
struct comedi_subdevice {union pci20xxx_subdev_private* private; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int minor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 union pci20xxx_subdev_private *VAR_9 = VAR_6->private;
 int VAR_10, VAR_11;
 unsigned int VAR_12;

 VAR_9->pci20006.last_data[FUNC_0(VAR_7->chanspec)] = VAR_8[0];
 VAR_12 = (((unsigned int)VAR_8[0] + 0x8000) & 0xffff);
 VAR_11 = (VAR_12 & 0xff);
 VAR_10 = ((VAR_12 >> 8) & 0xff);

 switch (FUNC_0(VAR_7->chanspec)) {
 case 0:
  FUNC_2(VAR_11, VAR_9->iobase + VAR_1);
  FUNC_2(VAR_10, VAR_9->iobase + VAR_1 + 1);
  FUNC_2(0x00, VAR_9->iobase + VAR_3);
  break;
 case 1:
  FUNC_2(VAR_11, VAR_9->iobase + VAR_2);
  FUNC_2(VAR_10, VAR_9->iobase + VAR_2 + 1);
  FUNC_2(0x00, VAR_9->iobase + VAR_4);
  break;
 default:
  FUNC_1(" comedi%d: pci20xxx: ao channel Error!\n", VAR_5->minor);
  return -VAR_0;
 }

 return 1;
}
