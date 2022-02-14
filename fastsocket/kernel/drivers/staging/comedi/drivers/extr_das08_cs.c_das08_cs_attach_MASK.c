
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long BasePort1; } ;
struct pcmcia_device {TYPE_1__ io; } ;
struct das08_private_struct {int dummy; } ;
struct comedi_device {int minor; } ;
struct comedi_devconfig {int dummy; } ;
struct TYPE_4__ {scalar_t__ bustype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int) ;
 struct pcmcia_device* VAR_2 ;
 int FUNC_1 (struct comedi_device*,unsigned long) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5,
      struct comedi_devconfig *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct pcmcia_device *VAR_9 = VAR_2;

 VAR_7 = FUNC_0(VAR_5, sizeof(struct das08_private_struct));
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2("comedi%d: das08_cs: ", VAR_5->minor);


 if (VAR_4->bustype == VAR_3) {
  if (VAR_9 == ((void*)0)) {
   FUNC_2(" no pcmcia cards found\n");
   return -VAR_1;
  }
  VAR_8 = VAR_9->io.BasePort1;
 } else {
  FUNC_2(" bug! board does not have PCMCIA bustype\n");
  return -VAR_0;
 }

 FUNC_2("\n");

 return FUNC_1(VAR_5, VAR_8);
}
