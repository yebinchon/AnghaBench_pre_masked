
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt2814_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int len_chanlist; int maxdata; int * range_table; int do_cmdtest; int do_cmd; int insn_read; int type; } ;
struct comedi_device {unsigned long iobase; char* board_name; int irq; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (int,int ,int ,char*,struct comedi_device*) ;
 int FUNC_8 (unsigned long,int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct comedi_device *VAR_16, struct comedi_devconfig *VAR_17)
{
 int VAR_18, VAR_19;
 int VAR_20;
 struct comedi_subdevice *VAR_21;
 unsigned long VAR_22;

 VAR_22 = VAR_17->options[0];
 FUNC_4("comedi%d: dt2814: 0x%04lx ", VAR_16->minor, VAR_22);
 if (!FUNC_8(VAR_22, VAR_4, "dt2814")) {
  FUNC_4("I/O port conflict\n");
  return -VAR_5;
 }
 VAR_16->iobase = VAR_22;
 VAR_16->board_name = "dt2814";

 FUNC_3(0, VAR_16->iobase + VAR_1);
 FUNC_12(100);
 if (FUNC_2(VAR_16->iobase + VAR_1) & VAR_3) {
  FUNC_4("reset error (fatal)\n");
  return -VAR_5;
 }
 VAR_18 = FUNC_2(VAR_16->iobase + VAR_2);
 VAR_18 = FUNC_2(VAR_16->iobase + VAR_2);

 VAR_19 = VAR_17->options[1];
 VAR_16->irq = 0;
 if (VAR_19 > 0) {
  if (FUNC_7(VAR_19, VAR_12, 0, "dt2814", VAR_16)) {
   FUNC_4("(irq %d unavailable)\n", VAR_19);
  } else {
   FUNC_4("( irq = %d )\n", VAR_19);
   VAR_16->irq = VAR_19;
  }
 } else if (VAR_19 == 0) {
  FUNC_4("(no irq)\n");
 } else {



  FUNC_4("(irq probe not implemented)\n");

 }

 VAR_20 = FUNC_1(VAR_16, 1);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_0(VAR_16, sizeof(struct dt2814_private));
 if (VAR_20 < 0)
  return VAR_20;

 VAR_21 = VAR_16->subdevices + 0;
 VAR_16->read_subdev = VAR_21;
 VAR_21->type = VAR_0;
 VAR_21->subdev_flags = VAR_8 | VAR_7 | VAR_6;
 VAR_21->n_chan = 16;
 VAR_21->len_chanlist = 1;
 VAR_21->insn_read = VAR_11;
 VAR_21->do_cmd = VAR_9;
 VAR_21->do_cmdtest = VAR_10;
 VAR_21->maxdata = 0xfff;
 VAR_21->range_table = &VAR_15;

 return 0;
}
