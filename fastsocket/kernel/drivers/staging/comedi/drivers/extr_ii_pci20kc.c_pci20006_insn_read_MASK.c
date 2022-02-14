
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* last_data; } ;
union pci20xxx_subdev_private {TYPE_1__ pci20006; } ;
struct comedi_subdevice {union pci20xxx_subdev_private* private; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {int dummy; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 union pci20xxx_subdev_private *VAR_4 = VAR_1->private;

 VAR_3[0] = VAR_4->pci20006.last_data[FUNC_0(VAR_2->chanspec)];

 return 1;
}
