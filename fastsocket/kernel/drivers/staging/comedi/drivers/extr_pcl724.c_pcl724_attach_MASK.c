
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {unsigned long iobase; unsigned int irq; int n_subdevices; scalar_t__ subdevices; int board_name; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {unsigned int io_range; int IRQbits; int numofports; scalar_t__ is_pet48; scalar_t__ can_have96; int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (unsigned int,int ,int ,char*,struct comedi_device*) ;
 int FUNC_3 (unsigned long,unsigned int,char*) ;
 int VAR_4 ;
 int FUNC_4 (struct comedi_device*,scalar_t__,int ,unsigned long) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_7, struct comedi_devconfig *VAR_8)
{
 unsigned long VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12, VAR_13;




 VAR_9 = VAR_8->options[0];
 VAR_10 = VAR_6->io_range;
 if ((VAR_6->can_have96) && ((VAR_8->options[1] == 1)
      || (VAR_8->options[1] == 96)))
  VAR_10 = VAR_1;
 FUNC_1("comedi%d: pcl724: board=%s, 0x%03lx ", VAR_7->minor,
        VAR_6->name, VAR_9);
 if (!FUNC_3(VAR_9, VAR_10, "pcl724")) {
  FUNC_1("I/O port conflict\n");
  return -VAR_0;
 }

 VAR_7->iobase = VAR_9;

 VAR_7->board_name = VAR_6->name;
 FUNC_1("\n");

 VAR_13 = VAR_6->numofports;
 if ((VAR_6->can_have96) && ((VAR_8->options[1] == 1)
      || (VAR_8->options[1] == 96)))
  VAR_13 = 4;

 VAR_11 = FUNC_0(VAR_7, VAR_13);
 if (VAR_11 < 0)
  return VAR_11;

 for (VAR_12 = 0; VAR_12 < VAR_7->n_subdevices; VAR_12++) {
  if (VAR_6->is_pet48) {
   FUNC_4(VAR_7, VAR_7->subdevices + VAR_12,
      VAR_5,
      (unsigned long)(VAR_7->iobase +
        VAR_12 * 0x1000));
  } else
   FUNC_4(VAR_7, VAR_7->subdevices + VAR_12,
      VAR_4,
      (unsigned long)(VAR_7->iobase +
        VAR_2 * VAR_12));
 };

 return 0;
}
