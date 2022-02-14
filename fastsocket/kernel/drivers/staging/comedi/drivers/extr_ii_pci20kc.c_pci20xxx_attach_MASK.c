
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* iobase; } ;
struct TYPE_4__ {void* iobase; } ;
union pci20xxx_subdev_private {TYPE_2__ pci20341; TYPE_1__ pci20006; } ;
struct pci20xxx_private {int dummy; } ;
struct comedi_subdevice {int type; union pci20xxx_subdev_private* private; } ;
struct comedi_device {char* board_name; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {scalar_t__* options; } ;
struct TYPE_6__ {void* ioaddr; union pci20xxx_subdev_private* subdev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;



 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_6,
      struct comedi_devconfig *VAR_7)
{
 unsigned char VAR_8;
 int VAR_9;
 int VAR_10;
 struct comedi_subdevice *VAR_11;
 union pci20xxx_subdev_private *VAR_12;

 VAR_9 = FUNC_1(VAR_6, 1 + VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_6, sizeof(struct pci20xxx_private));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->ioaddr = (void *)(unsigned long)VAR_7->options[0];
 VAR_6->board_name = "pci20kc";


 if ((FUNC_6(VAR_5->ioaddr) & VAR_2) != VAR_2) {
  FUNC_5("comedi%d: ii_pci20kc", VAR_6->minor);
  FUNC_5
      (" PCI-20001 C-2A Carrier Board at base=0x%p not found !\n",
       VAR_5->ioaddr);
  return -VAR_1;
 }
 FUNC_5("comedi%d:\n", VAR_6->minor);
 FUNC_5("ii_pci20kc: PCI-20001 C-2A at base=0x%p\n", VAR_5->ioaddr);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_11 = VAR_6->subdevices + VAR_8;
  VAR_10 = FUNC_6(VAR_5->ioaddr + (VAR_8 + 1) * VAR_4);
  VAR_11->private = VAR_5->subdev_private + VAR_8;
  VAR_12 = VAR_11->private;
  switch (VAR_10) {
  case 130:
   VAR_12->pci20006.iobase =
       VAR_5->ioaddr + (VAR_8 + 1) * VAR_4;
   FUNC_2(VAR_6, VAR_11, VAR_7->options[2 * VAR_8 + 2],
          VAR_7->options[2 * VAR_8 + 3]);
   FUNC_5("comedi%d: ii_pci20kc", VAR_6->minor);
   FUNC_5(" PCI-20006 module in slot %d \n", VAR_8 + 1);
   break;
  case 129:
   VAR_12->pci20341.iobase =
       VAR_5->ioaddr + (VAR_8 + 1) * VAR_4;
   FUNC_3(VAR_6, VAR_11, VAR_7->options[2 * VAR_8 + 2],
          VAR_7->options[2 * VAR_8 + 3]);
   FUNC_5("comedi%d: ii_pci20kc", VAR_6->minor);
   FUNC_5(" PCI-20341 module in slot %d \n", VAR_8 + 1);
   break;
  default:
   FUNC_5
       ("ii_pci20kc: unknown module code 0x%02x in slot %d: module disabled\n",
        VAR_10, VAR_8);

  case 128:
   VAR_11->type = VAR_0;
   break;
  }
 }


 FUNC_4(VAR_6, VAR_6->subdevices + VAR_3);

 return 1;
}
