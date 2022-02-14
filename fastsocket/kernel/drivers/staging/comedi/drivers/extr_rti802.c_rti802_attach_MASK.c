
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rti802_private {int dummy; } ;
struct comedi_subdevice {int maxdata; int n_chan; int ** range_table_list; int insn_write; int insn_read; int subdev_flags; int type; } ;
struct comedi_device {unsigned long iobase; char* board_name; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {int ** range_type_list; int * dac_coding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (unsigned long,int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_12, struct comedi_devconfig *VAR_13)
{
 struct comedi_subdevice *VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 VAR_16 = VAR_13->options[0];
 FUNC_2("comedi%d: rti802: 0x%04lx ", VAR_12->minor, VAR_16);
 if (!FUNC_3(VAR_16, VAR_3, "rti802")) {
  FUNC_2("I/O port conflict\n");
  return -VAR_1;
 }
 VAR_12->iobase = VAR_16;

 VAR_12->board_name = "rti802";

 if (FUNC_1(VAR_12, 1) < 0
     || FUNC_0(VAR_12, sizeof(struct rti802_private))) {
  return -VAR_2;
 }

 VAR_14 = VAR_12->subdevices;

 VAR_14->type = VAR_0;
 VAR_14->subdev_flags = VAR_4;
 VAR_14->maxdata = 0xfff;
 VAR_14->n_chan = 8;
 VAR_14->insn_read = VAR_10;
 VAR_14->insn_write = VAR_11;
 VAR_14->range_table_list = VAR_7->range_type_list;

 for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
  VAR_7->dac_coding[VAR_15] = (VAR_13->options[3 + 2 * VAR_15])
      ? (VAR_6)
      : (VAR_5);
  VAR_7->range_type_list[VAR_15] = (VAR_13->options[2 + 2 * VAR_15])
      ? &VAR_9 : &VAR_8;
 }

 FUNC_2("\n");

 return 0;
}
