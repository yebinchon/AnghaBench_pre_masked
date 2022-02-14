
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnp_dev {int dummy; } ;
struct comedi_device {unsigned long iobase; unsigned int irq; int board_name; scalar_t__ board_ptr; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct pnp_dev* isapnp_dev; int * stc_readl; int * stc_writel; int * stc_readw; int * stc_writew; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_6 ;
 int FUNC_3 (struct comedi_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct comedi_device*) ;
 int* VAR_10 ;
 int FUNC_5 (struct pnp_dev**) ;
 unsigned int FUNC_6 (struct pnp_dev*,int ) ;
 unsigned long FUNC_7 (struct pnp_dev*,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (unsigned int,int ,int ,char*,struct comedi_device*) ;
 int FUNC_10 (unsigned long,int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_13,
      struct comedi_devconfig *VAR_14)
{
 struct pnp_dev *VAR_15;
 int VAR_16;
 unsigned long VAR_17;
 int VAR_18;
 unsigned int VAR_19;


 VAR_16 = FUNC_3(VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_5->stc_writew = &VAR_8;
 VAR_5->stc_readw = &VAR_7;
 VAR_5->stc_writel = &VAR_12;
 VAR_5->stc_readl = &VAR_11;

 VAR_17 = VAR_14->options[0];
 VAR_19 = VAR_14->options[1];
 VAR_15 = ((void*)0);
 if (VAR_17 == 0) {
  VAR_16 = FUNC_5(&VAR_15);
  if (VAR_16 < 0)
   return VAR_16;

  VAR_17 = FUNC_7(VAR_15, 0);
  VAR_19 = FUNC_6(VAR_15, 0);
  VAR_5->isapnp_dev = VAR_15;
 }



 FUNC_8("comedi%d: ni_atmio: 0x%04lx", VAR_13->minor, VAR_17);
 if (!FUNC_10(VAR_17, VAR_3, "ni_atmio")) {
  FUNC_8(" I/O port conflict\n");
  return -VAR_1;
 }

 VAR_13->iobase = VAR_17;
 VAR_18 = FUNC_4(VAR_13);
 if (VAR_18 < 0)
  return -VAR_1;

 VAR_13->board_ptr = VAR_9 + VAR_18;

 FUNC_8(" %s", VAR_4.name);
 VAR_13->board_name = VAR_4.name;



 if (VAR_19 != 0) {
  if (VAR_19 > 15 || VAR_10[VAR_19] == -1) {
   FUNC_8(" invalid irq %u\n", VAR_19);
   return -VAR_0;
  }
  FUNC_8(" ( irq = %u )", VAR_19);
  VAR_16 = FUNC_9(VAR_19, VAR_6, VAR_2,
      "ni_atmio", VAR_13);

  if (VAR_16 < 0) {
   FUNC_8(" irq not available\n");
   return -VAR_0;
  }
  VAR_13->irq = VAR_19;
 }



 VAR_16 = FUNC_2(VAR_13, VAR_14);
 if (VAR_16 < 0) {
  return VAR_16;
 }

 return 0;
}
