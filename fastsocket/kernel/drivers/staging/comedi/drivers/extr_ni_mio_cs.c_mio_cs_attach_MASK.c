
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int AssignedIRQ; } ;
struct TYPE_6__ {int BasePort1; } ;
struct pcmcia_device {TYPE_2__ irq; TYPE_1__ io; } ;
struct comedi_device {unsigned int irq; int board_name; scalar_t__ board_ptr; int iobase; TYPE_3__* driver; int minor; } ;
struct comedi_devconfig {int dummy; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int * stc_readl; int * stc_writel; int * stc_readw; int * stc_writew; } ;
struct TYPE_8__ {int driver_name; } ;


 int FUNC_0 (char*,struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 struct pcmcia_device* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_9 ;
 int FUNC_4 (struct comedi_device*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_5 (struct comedi_device*,struct pcmcia_device*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (unsigned int,int ,int ,char*,struct comedi_device*) ;
 int FUNC_8 (int) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_13, struct comedi_devconfig *VAR_14)
{
 struct pcmcia_device *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 FUNC_0("mio_cs_attach(dev=%p,it=%p)\n", VAR_13, VAR_14);

 VAR_15 = VAR_4;
 if (!VAR_15)
  return -VAR_1;

 VAR_13->driver = &VAR_6;
 VAR_13->iobase = VAR_15->io.BasePort1;

 VAR_16 = VAR_15->irq.AssignedIRQ;

 FUNC_6("comedi%d: %s: DAQCard: io 0x%04lx, irq %u, ",
        VAR_13->minor, VAR_13->driver->driver_name, VAR_13->iobase, VAR_16);
 VAR_13->board_ptr = VAR_10 + FUNC_5(VAR_13, VAR_15);

 FUNC_6(" %s", VAR_3.name);
 VAR_13->board_name = VAR_3.name;

 VAR_17 = FUNC_7(VAR_16, VAR_9, VAR_2,
     "ni_mio_cs", VAR_13);
 if (VAR_17 < 0) {
  FUNC_6(" irq not available\n");
  return -VAR_0;
 }
 VAR_13->irq = VAR_16;


 VAR_17 = FUNC_4(VAR_13);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_5->stc_writew = &VAR_8;
 VAR_5->stc_readw = &VAR_7;
 VAR_5->stc_writel = &VAR_12;
 VAR_5->stc_readl = &VAR_11;

 VAR_17 = FUNC_3(VAR_13, VAR_14);

 if (VAR_17 < 0)
  return VAR_17;

 return 0;
}
