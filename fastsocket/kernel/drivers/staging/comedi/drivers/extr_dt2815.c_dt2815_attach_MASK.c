
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt2815_private {int dummy; } ;
struct comedi_subdevice {int maxdata; int n_chan; struct comedi_lrange const** range_table_list; int insn_read; int insn_write; int subdev_flags; int type; } ;
struct comedi_lrange {int dummy; } ;
struct comedi_device {unsigned long iobase; char* board_name; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {struct comedi_lrange const** range_type_list; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (char*,...) ;
 struct comedi_lrange VAR_10 ;
 struct comedi_lrange VAR_11 ;
 struct comedi_lrange VAR_12 ;
 struct comedi_lrange VAR_13 ;
 int FUNC_5 (unsigned long,int ,char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_14, struct comedi_devconfig *VAR_15)
{
 struct comedi_subdevice *VAR_16;
 int VAR_17;
 const struct comedi_lrange *VAR_18, *VAR_19;
 unsigned long VAR_20;

 VAR_20 = VAR_15->options[0];
 FUNC_4("comedi%d: dt2815: 0x%04lx ", VAR_14->minor, VAR_20);
 if (!FUNC_5(VAR_20, VAR_2, "dt2815")) {
  FUNC_4("I/O port conflict\n");
  return -VAR_4;
 }

 VAR_14->iobase = VAR_20;
 VAR_14->board_name = "dt2815";

 if (FUNC_1(VAR_14, 1) < 0)
  return -VAR_5;
 if (FUNC_0(VAR_14, sizeof(struct dt2815_private)) < 0)
  return -VAR_5;

 VAR_16 = VAR_14->subdevices;

 VAR_16->type = VAR_0;
 VAR_16->subdev_flags = VAR_6;
 VAR_16->maxdata = 0xfff;
 VAR_16->n_chan = 8;
 VAR_16->insn_write = VAR_8;
 VAR_16->insn_read = VAR_9;
 VAR_16->range_table_list = VAR_7->range_type_list;

 VAR_18 = (VAR_15->options[3])
     ? &VAR_11 : &VAR_12;
 VAR_19 = (VAR_15->options[2])
     ? &VAR_10 : &VAR_13;
 for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
  VAR_7->range_type_list[VAR_17] = (VAR_15->options[5 + VAR_17])
      ? VAR_18 : VAR_19;
 }


 FUNC_3(0x00, VAR_14->iobase + VAR_3);
 for (VAR_17 = 0; VAR_17 < 100; VAR_17++) {

  unsigned int VAR_21;

  FUNC_6(1000);
  VAR_21 = FUNC_2(VAR_14->iobase + VAR_3);
  if (VAR_21 == 4) {
   unsigned int VAR_22;
   VAR_22 = (VAR_15->options[4] & 0x3) << 3 | 0x7;
   FUNC_3(VAR_22, VAR_14->iobase + VAR_1);
   FUNC_4(", program: 0x%x (@t=%d)\n", VAR_22, VAR_17);
   break;
  } else if (VAR_21 != 0x00) {
   FUNC_4("dt2815: unexpected status 0x%x (@t=%d)\n",
          VAR_21, VAR_17);
   if (VAR_21 & 0x60) {
    FUNC_3(0x00, VAR_14->iobase + VAR_3);
   }
  }
 }

 FUNC_4("\n");

 return 0;
}
